//1
//pointers
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a=5;
    int* b=&a;//int* b is known as pointer variable which store the address of our variable a.
    cout<<b<<endl;
    cout<<*b<<endl;//This is called derefrencing variable which means if we use * infront of out pointer variable variable it will return us the actual value of variable.
    cout<<*&a<<endl;//we can tract the variable value in this way also by using * with &.
    return 0;
}

//2
//pointer to pointer
//In layman terms we can say that pointer to pointer stores address of pointer itself.
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a = 5;
    int* b= &a;
    int** c= &b;
    cout<<c<<endl;
    cout<<&b<<endl;
    cout<<*c<<endl;
    cout<<**c<<endl;
    return 0;
}

/*
int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl; 
    cout<<"The value at address c is "<<*c<<endl; 
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl; 
    */