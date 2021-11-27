#include<iostream>
#include<iomanip>
using namespace std;
class number{
     int a;

     public:
     number(){
         a=0;
     }
     number(int n){
         a=n;
     }
     number(number &obj){
         cout<<"copy construct called"<<endl;
         a=obj.a;
     }
     void display(){
         cout<<a<<endl;
     }

};
int main(){
    number g,h,i(45),j;
    g.display();
    h.display();
    i.display();
    number k(i);
    k.display();//Copy constructor invoked

    j=i;
    j.display();//Copy constructor not invoked

    number l=i;
    l.display();//Copy constructor invoked

    return 0;
}

/*
A copy constructor is a type of constructor that creates a copy of another object. 
If we want one object to resemble another object we can use a copy constructor. 
If no copy constructor is written in the program compiler will supply its own 
copy constructor.
*/

/*
1st we created a “number” class which consists of private data member “a”.
2nd default constructor of the “number” class is defined which has no parameters and 
assign “0” to the data members “a”.
3rd parameterized constructor of the “number” class is defined which takes one 
parameter and assigns values to the data members “a”.
4th copy constructor of the “number” class is defined which takes its own reference 
object as a parameter and assigns values to the data members “a”.
5th function “display” is defined which will print the values of the data members “a”.
*/

/*
1st objects “g”, “h”, “i”, and “j” are created of the “number” data type. 
The main thing to note here is that the object “i” has a value “45”.
2nd function “display” is called by the objects “g”, “h”, and “i”.
3rd copy constructor is invoked and the object “i” is passed to “k”
4th function “display” is called by the object “z1”
5th the value of “i” is assigned to “j”. The main thing to note here is that it 
will not invoke a copy constructor because the object “i” is already created.
6th function “display” is called by the object “z2”
7th the value of “i” is assigned to “l”. The main thing to note here is that 
it will invoke a copy constructor because the object “l” is being created.
8th function “display” is called by the object “l”
*/