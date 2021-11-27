/*
initization syntax:

Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}

*/



#include<iostream>
#include<iomanip>
using namespace std;
class test{
    int a;
    int b;
    public:
    test(int i,int j):a(i),b(j){
        cout<<a<<endl;
        cout<<b<<endl;
    }

};
int main(){
    test t(5,6);
    return 0;
}

/*
A constructor is written first and then the initializations section is written
In the initialization section, the data members are initialized
We have created a “test” class that consists of private data member “a” and “b” and 
parameterized constructor which takes two arguments and sets the value of data member 
“a” and “b” by using the initialization list. The constructor will also print the value 
of data member “a” and “b”.
In the main program object “t” is created of the “test” data type and the values (4, 6)
 are passed.
*/

/*
The main thing to note here is that if we use the code shown below to initialize data 
members the compiler will throw an error because the data member “a” is being 
initialized first and the “b” is being initialized second so we have to assign 
the value to “a” data member first.

Test(int i, int j) : b(j), a(i+b)
*/

/*
But if we use the code shown below to initialize data members the compiler will not 
throw an error because the data member “a” is being initialized first and we are 
assigning the value to the data member “a” first.

Test(int i, int j) : a(i), b(a + j)
*/

