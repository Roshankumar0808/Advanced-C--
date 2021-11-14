//1
//call by value
//This swap will not work.
#include<iostream>
#include<iomanip>
using namespace std;
void swap(int a,int b){
     int temp=a;
     a=b;
     b=temp;
}
int main(){
    int x=4,y=5;
    swap(x,y);
    cout<<x<<y<<endl;
    return 0;
}
/*
we created a swap function which is taking two parameters “int a” and “int b”. 
In function body values of the variable, “a” and “b” are swapped.
we have initialized two integer variables “x” and “y” and printed their values. 
Then we called a “swap” function and passed values of variables “x” and “y” and again 
printed the values of variables “x” and “y”. 
the values of “x” and “y” are the same for both times they are printed. 
So the main point here is that when the call by value method is used it doesn’t change 
the actual values because copies of actual values are sent to the function.
*/

//2
//call by pointers
#include<iostream>
#include<iomanip>
using namespace std;
void swappointer(int* a,int* b){
    int temp=*a;
    *a=*b;
     *b=temp;
}
int main(){
    int x=4,y=6;
    swap(x,y);
    cout<<x<<y;
    return 0;
}
/*
we created a swap function which is taking two pointer parameters “int* a” and “int* b”. 
In function body values of pointer variables, “a” and “b” are swapped. 
we have initialized two integer variables “x” and “y” and printed their values. 
Then we called a “swap” function and passed addresses of variables “x” and “y” and again 
printed the values of variables “x” and “y”.
he values of “a” and “b” are swapped when the swap function is called. 
So the main point here is that when the call by pointer method is used it changes the 
actual values because addresses of actual values are sent to the function.
*/

//3
//Call by refrence
#include<iostream>
#include<iomanip>
using namespace std;
void swapref(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int x=5,y=6;
    swap(x,y);
    cout<<x<<y;
    return 0;
}
/*
we created a swap function that is taking reference of “int &a” and “int &b” as 
parameters. In function body values of variables, “a” and “b” are swapped. 
we have initialized two integer variables “x” and “y” and printed their values. 
Then we called a “swap” function and passed variables “x” and “y” and again printed the
values of variables “x” and “y”.
the values of “a” and “b” are swapped when the swap function is called. 
So the main point here is that when the call by reference method is used it changes the 
actual values because references of actual values are sent to the function.
*/