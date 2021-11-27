#include<iostream>
#include<iomanip>
using namespace std;
class complex{
      int a;
      int b;
      public:
     complex(int x,int y){// do not use int a or int b use just a and b;
            a=x;
            b=y;
     }
      void display(){
          cout<<a<<"+"<<"i"<<b<<endl;
      }

};
 

int main(){
    complex c1(5,6),c2(8,9);
    c1.display();
    c2.display();
  
    return 0;
}

/*
Parameterized constructors are those constructors that take one or more parameters. 
Default constructors are those constructors that take no parameters. The main things 
to note here are that constructors are written in the public section of the class and 
the constructors don’t have a return type. An example program to demonstrate the 
concept of the constructor is shown below.
*/

/*
1st “complex” class is defined which consists of private data members “a” and “b”.
2nd parameterized constructor of the “complex” class is declared which takes two parameters.
3rd function “printNumber” is defined which will print the values of the data members “a” and “b”.
4th parameterized constructor is defined which takes two parameters and assigns the 
values to the data members “a” and “b”. The main things to note here are that whenever 
a new object will be created this constructor will run.
*/

/*
1st parameterized constructor is called implicitly with the object “a” and the values “5” and “6” are passed
2nd function “printNumber” is called which will print the values of data members
3rd parameterized constructor is called explicitly with the object “b” and the values “8” and “9” are passed
4th function “printNumber” is called again which will print the values of data members
*/

#include<iostream>
#include<iomanip>
using namespace std;
class point{
      int a;
      int b;
      public:
     point(int x,int y){// do not use int a or int b use just a and b;
            a=x;
            b=y;
     }
      void display(){
          cout<<"point are"<<a<<","<<b<<endl;
      }

};
 

int main(){
    point c1(5,6),c2(8,9);
    c1.display();
    c2.display();
  
    return 0;
}

/*
1st “point” class is defined which consists of private data members “a” and “b”.
2nd parameterized constructor of the “point” class is defined which takes two 
parameters and assigns the values to the private data members of the class.
3rd function “display” is defined which will print the values of the data members “a” and “b”.
*/

/*
1st parameterized constructor is called implicitly with the object “c1” and the values
 “5” and “6” are passed
2nd function “displayPoint” is called which will print the values of data members
3rd parameterized constructor is called implicitly with the object “q” and the values 
“8” and “9” are passed
4th function “displayPoint” is called which will print the values of data members
*/