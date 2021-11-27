#include<iostream>
#include<iomanip>
using namespace std;
class simple{
     int data1;
     int data2;
     int data3;
     public:
     simple(int a,int b=5,int c=6){
         data1=a;
         data2=b;
         data3=c;
     };
     void print(){
         cout<<data1<<","<<data2<<","<<data3<<endl;
     }
};
int main(){
    simple c1(5);
    c1.print();
    simple c2(5,8);
    c2.print();
    return 0;
}

/*
Default arguments of the constructor are those which are provided in the constructor 
declaration. If the values are not provided when calling the constructor the 
constructor uses the default arguments automatically. An example program to 
demonstrate the concept default arguments in C++ is shown below.
*/

/*
1st we created a “simple” class which consists of private data members “data1”, “data2” and “data3”.
2nd parameterized constructor of the “simple” class is defined which takes three 
parameters and assigns values to the data members “a” and “b”. The main thing to 
note here is that the value “5” and “6” are the default values for the variables “b” 
and “c”.
3rd function “printData” is defined which prints the values of the data members 
“data1”, “data2”, and “data3”.
*/

/*
1st parameterized constructor is called with the object “c1” of the data type “simple” 
and the values "5" are passed. The main thing to note here is that the value 
of the parameter"b" and “c” will be automatically set by the default value.
2nd function “printData” is called which will print the values of data members.
*/