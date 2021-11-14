//1
//ARRAY AS OBJECT
/*
An array of objects is declared the same as any other data-type array.  An array of 
objects consists of class objects as its elements. If the array consists of class 
objects it is called an array of objects.
*/

#include <iostream>
#include <iomanip>
using namespace std;
class employee
{
private:
    int id;

public:
    void setdata();
    void getdata();
};
void employee::setdata()
{
    cout << "EMPLOYEE ID IS" << endl;
    cin >> id;
}
void employee::getdata()
{
    cout << "Employee id is:" << id << endl;
}

int main()
{
    employee google[5];
    for (int i = 0; i < 5; i++)
    {

        google[i].setdata();
        google[i].getdata();
    }
    return 0;
}

/*
we created an employee class that has integer “id” variable and “salary” integer 
variable as private class members; and “setId” void function, “getId” void function 
as public class members. These functions are explained below.

We have defined a “setId” function. In this function, the “salary” variable is 
assigned by the value “122” and the function will take input for “id” from the user 
at runtime. We have defined a “getId” function. This function will print the values of 
the variables “id”.

we created an array “fb” of size “4” which is of employee data-type. The “for” loop is 
used to run “setId” and “getId” functions till the size of an array. The main thing to 
note here is that the objects can also be created individually but it is more 
convenient to use an array if too many objects are to be created.
*/



//PASSING OBJECT AS FUNCTION
#include <iostream>
#include <iomanip>
using namespace std;
class complex
{
private:
    int a;
    int b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setdatabysum(complex O1, complex O2)
    {
        a = O1.a + O2.a;
        b = O1.b + O2.b;
    }
    void display()
    {
        cout << "THE COMPLEX NUMBER IS" << a << "+"
             << "i" << b << endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setdata(5, 7);
    c1.display();

    c2.setdata(1, 2);
    c2.display();

    c3.setdatabysum(c1, c2);
    c3.display();
    return 0;
}

/*
we created a complex class that has integer “a” variable and “b” integer variable as 
private class members; and “setData” void function, “setDataBySum” void function, and 
“printNumber” void function as public class members. These functions are explained 
below.

We have defined a “setData” function. In this function the values are assigned to the 
variables “a” and “b” because they are private data members of the class and values 
cannot be assigned directly. We have defined a “setDataBySum” function. 
In this function, the values of two objects are added and then assigned to the 
variables “a” and “b”. We have defined a “printNumber” function. In this function, 
the values of the variable “a” and “b” are being printed.
*/

/*
We have created object “c1”, “c2”, and”c3” of complex data-type.
The object “c1” calls the “setData” and “printNumber” functions.
The object “c2” calls the “setData” and “printNumber” functions.
The object “c3” calls the “setDataBySum” and “printNumber” functions.
*/