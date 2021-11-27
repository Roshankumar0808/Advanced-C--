#include<iostream>
#include<iomanip>
using namespace std;
class complex{
      int a;
      int b;
      public:
     complex(){// do not use int a or int b use just a and b;
            a=10;
            b=20;
     }
      void display(){
          cout<<a<<"+"<<"i"<<b<<endl;
      }

};
 

int main(){
    complex c1,c2,c3;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}
/*
A constructor is a special member function with the same name as the class. 
The constructor doesn’t have a return type. Constructors are used to initialize the 
objects of its class. Constructors are automatically invoked whenever an object is 
created.
*/

/*
Important Characteristics of Constructors in C++

A constructor should be declared in the public section of the class
They are automatically invoked whenever the object is created
They cannot return values and do not have return types
It can have default arguments
We cannot refer to their address
*/

/*
1st “complex” class is defined which consists of private data members “a” and “b”.
2nd default constructor of the “complex” class is declared.
3rd function “printNumber” is defined which will print the values of the data members “a” and “b”.
4th default constructor is defined which will assign the values to the data members “a” 
and “b”. The main things to note here are that whenever a new object will be created 
this constructor will run and if the parameters are not passed to the constructor it 
is called a default constructor.
*/

/*
1st objects “c1”, “c2”, and “c3” of the complex data type are created. 
The main thing to note here is that when we are creating objects the constructor 
will run for each object and will assign the values.
2nd function “printNumber” is called by the objects “c1”, “c2”, and “c3”.
*/