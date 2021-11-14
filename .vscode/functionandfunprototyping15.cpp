//1
//FUNCTIONS
#include<iostream>
#include<iomanip>
using namespace std;
int mul(int a ,int b){
    int c = a*b;
    return c;
}
int main(){
    int num1;
    int num2;
    cout<<"num1"<<endl;
    cin>>num1;
    cout<<"num2"<<endl;
    cin>>num2;
    cout<<mul(num1,num2);
    return 0;
}
/*
we created an integer function with the name of mul, which takes two parameters “int a” and “int b”.
 In the function, body multiplication is performed on the values of variable “a” and variable “b” and the result is stored in variable “c”.
In the end, the value of variable “c” is returned to the function.
 We have seen how this function works now we will see how to pass values to the function parameters.
 we have declared two integer variables “num1” and “num2”, we will take their input at run time. 
 In the end, we called the “mul” function and passed both variables “num1” and “num2” into sum function. 
“mul” function will perform the multiplication and returns the value at the same location from where it was called.
*/

//2
//FUNCTION PROTOTYPING
#include<iostream>
#include<iomanip>
using namespace std;
int mul(int a,int b);//This is called function prototyping in this in begining instead of writing the naame of our function and tell program to search for it anywhwere so even if it is written anywhere it will work
int main(){
     int num1;
    int num2;
    cout<<"num1"<<endl;
    cin>>num1;
    cout<<"num2"<<endl;
    cin>>num2;
    cout<<mul(num1,num2);
   
}
    int mul(int a ,int b){
    int c = a*b;
    return c;
}
/*
we have made a function prototype of the function “mul”, this function prototype will 
tell the compiler that the function “mul” is declared somewhere in the program which 
takes two integer parameters and returns an integer value. Some examples of acceptable 
and not acceptable prototypes are shown below:
int sum(int a, int b); //Acceptable
int sum(int a, b); // Not Acceptable
int sum(int, int); //Acceptable
*/
/*
The function doesn't need to have parameters or it should return some value. 
An example of the void function is shown
*/
#include<iostream>
#include<iomanip>
using namespace std;
int mul(int a,int b);//This is called function prototyping in this in begining instead of writing the naame of our function and tell program to search for it anywhwere so even if it is written anywhere it will work
void g(void);
int main(){
    int num1;
    int num2;
    cout<<"num1"<<endl;
    cin>>num1;
    cout<<"num2"<<endl;
    cin>>num2;
    cout<<mul(num1,num2);
    g();
    return 0;
}
    int mul(int a ,int b){
    int c = a*b;
    return c;
}

void g(){
    cout<<"\nHello, Good Morning";
}