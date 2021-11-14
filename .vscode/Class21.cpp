//CLASSES IN C++
//Why use classes instead of structures??
/*
Classes and structures are somewhat the same but still, they have some differences. 
For example, we cannot hide data in structures which means that everything is public 
and can be accessed easily which is a major drawback of the structure because structures 
cannot be used where data security is a major concern. Another drawback of structures 
is that we cannot add functions in it.
*/

//CLASSES IN C++
/*
Classes are user-defined data-types and are a template for creating objects. 
Classes consist of variables and functions which are also called class members.
*/

//Public Access Modifier in C++
/*
All the variables and functions declared under public access modifier will be available 
for everyone. They can be accessed both inside and outside the class. 
Dot (.) operator is used in the program to access public data members directly.
*/

//Private Access Modifier in C++
/*
All the variables and functions declared under a private access modifier can only be 
used inside the class. They are not permissible to be used by any object or function 
outside the class.

*** BY DEFAULT ANYTHIG WE WRITE INSIDE CLASSES IS CONSIDERED AS PRIVATE . SO TO USE IT 
AS PUBLIC WE HAVE TO PUT IT IN PUBLIC ACCESS MODIFIER.
*/

#include <iostream>
#include <iomanip>
using namespace std;
class employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int b1, int c1);
    void getdata()
    {
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
        cout << d << endl;
        cout << e << endl;
    }
};

void employee::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    employee harry;
    harry.d = 18;
    harry.e = 19;
    harry.setdata(5, 4, 3);
    harry.getdata();
    return 0;
}

/*
1st we created an “employee” class, 2nd three integer variables “int a”, “int b”, and 
“int c” were declared under the private access modifier, 3rd two integer variables “int d” 
and “int e” was declared under the public access modifiers, 4th “setData” function was 
declared, 5th “getData” function was defined and values of all the variables are printed. 
6th “setData” function was defined outside the “employee” class by using a scope 
resolution operator; “setData” function is used to assign values to the private member 
of the class.
*/

/*
1st we created an object “harry” of the class “employee”; 2nd we assigned values to 
“int d” and “int e” which are public class members. If we try to assign values to the 
private class member’s compiler will throw an error. 3rd we passed the values to the 
function “setData” and at the end, we called “getData” function which will print the 
values of all the variables. 
*/