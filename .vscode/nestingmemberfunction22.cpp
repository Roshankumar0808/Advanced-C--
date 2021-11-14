//Object-Oriented programming Recap
/*
Stroustrup initially named C++ language as C with classes because C++ language was 
almost the same as C language but they added a new concept of classes in it.
Classes are the extension of structures in C language.
Structures had limitations such as; members are public and no methods.
Classes have some additional futures than structures such as; classes that can have 
methods and properties.
Classes have a feature to make class members as public and private.
In C++ objects can be declared along with class deceleration .
*/

/*class employee{

};roshan,ankit;
*/
//THIS IS CALLED DECLARING OBJECT ALONG WITH CLASS.

//NESTING OF MEMBER FUNCTION
/*
If one member function is called inside the other member function of the same class it 
is called nesting of a member function.
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class binary
{
private:
    string s;
    void checkbinary();

public:
    void readinput();
    void onescompliment();
    void display();
};
void binary::checkbinary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "number is not binary" << endl;
        }
        
    }
}

void binary::readinput()
{
    cout << "Enter some binary number" << endl;
    cin >> s;
   
}

void binary::onescompliment()
{
    checkbinary();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary::display()
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}
int main()
{
    binary b;
    b.readinput();
    b.display();
    b.onescompliment();
    b.display();

    return 0;
}

/*
 we created a binary class that has, “s” string variable and “checkbinary” void function as 
 private class members; and “read” void function, “ones_compliment” void function, and 
 “display” void function as public class members.
 we have created a “read” function. This function will take input from the user at
 runtime.
 we have created a “checkbinary” function. This ”for” loop in the function will run till 
 the length of the string and “if” condition in the body of the loop will check the 
 whole string that if there are any values in the string other than “1” and “0”. 
 If there are values other than “1” and “0” this function will output “Incorrect 
 binary format”.
 in the body of the “ones_compliment” function; the “checkbinary” function is called, and 
 as we have discussed above that if one member function is called inside the other 
 member function of the same class it is called nesting of a member function. 
 The “for” loop inside the “ones_compliment” functions runs till the length of the 
 string and the “if” condition inside the loop replaces the number “0” with “1” and “1” 
 with “0”.
 the “for” loop inside display function runs till the length of the string and prints 
 each value of the sting.
 we created an object “b” of the binary data type, and the functions “read”, “display”, 
 “ones_compliment”, and “display” are called. 
*/

/*
The main thing to note here is that the function ”chk_bin” is the private access 
modifier of the class so we cannot access it directly by using the object, it can be 
only accessed inside the class or by the member function of the class.
*/