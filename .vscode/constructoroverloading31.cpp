#include<iostream>
#include<iomanip>
using namespace std;
class complex{
    int a;
    int b;
    public:
    complex(){
        a=0;
        b=0;
    }
    complex(int x){
       a=x;
       b=0;
    }
    complex(int x,int y){
       a=x;
       b=x;
    }
    void display(){
        cout<<"The number are"<<a<<","<<b<<endl;
    }
};
int main(){
    complex c1,c2(5),c3(2,3);// if object has no argumeent do not use empty () do not buy bracket in such cases eg c1 is correct but c1() is incorrect.
    
    c1.display();
    c2.display();
    c3.display();
    return 0;
}

/*
1st we created a “complex” class which consists of private data members “a” and “b”.
2nd default constructor of the “complex” class is declared which has no parameters 
and assigns “0” to the data members “a” and “b”.
3rd parameterized constructor of the “complex” class is declared which takes two 
parameters and assigns values to the data members “a” and “b”.
4th parameterized constructor of the “complex” class is declared which takes one 
parameter and assigns values to the data members “a” and “b”.
5th function “printNumber” is defined which will print the values of the data members 
“a” and “b”.
*/

/*
1st parameterized constructor is called with the object “c1” and the values “4” and “6” 
are passed. The main thing to note here is that this will run the constructor with two 
parameters.
2nd function “printNumber” is called which will print the values of data members
3rd parameterized constructor is called with the object “c2” and the value “5” is 
passed. The main thing to note here is that this will run the constructor with one 
parameter.
4th function “printNumber” is called which will print the values of data members
5th default constructor is called with the object “c3”. The main thing to note here 
is that this will run the constructor with no parameters.
6th function “printNumber” is called which will print the values of data members
*/