//1
//Inline function
#include<iostream>
#include<iomanip>
using namespace std;
inline int product(int a,int b)
{
    int c=a*b;
    return c;
}
int main(){
    
    cout<<product(5,18)<<endl;
    cout<<product(5,18)<<endl;
    cout<<product(5,18)<<endl;
    cout<<product(5,18)<<endl;
    cout<<product(5,18)<<endl;
    cout<<product(5,18)<<endl;
    cout<<product(5,18)<<endl;
    return 0;
}
/*
1st inline keyword is used to make the function inline. 2nd a product function is created 
which has two arguments and returns the product of them. Now we will call the product 
function multiple times in our main program 
we called the product function multiple times. The main thing to note here is that the 
function will not run instead of it the function code will be copied at the place where 
the function is being called. This will increase the execution time of the program 
because the compiler doesn’t have to copy the values and get the return value again 
and again from the compiler. 
*/

//2
//default function
#include<iostream>
#include<iomanip>
using namespace std;
float moneyrecived(int saving,float interest=1.05){
    int recive= saving*interest;
    return recive;
}
int main(){
    cout<<"Amount recived by normal people"<<moneyrecived(1500)<<endl;//this is called defaault argument means we defibed this argument before itself in function argument
    cout<<"Amount recived by vip people"<<moneyrecived(1500,1.15)<<endl;//thiss is the case where there are some specific prole who get more interest than normal people so for them we here defined interest rate agaain for only that specific case only 
    return 0;
}
/*
we created a “moneyReceived” function which has two arguments “int saving” and 
“float factor=1.05”. This function returns the product of “saving” and “factor”.
 In our main function, we called “moneyReceived” function and passed one argument “money”.
Again we called “moneyReceived” function and passed two arguments ”money” and “1.15”. 
The main thing to note here is that when we passed only one argument “money” to the 
function at that time the default value of the argument “factor” will be used. 
But when we passed both arguments then the default value will not be used.
*/

//3
//constant argument
int strlen(const char *p){

}
/*
Constant arguments are used when you don’t want your values to be changed or modified 
by the function.
we created a “strlen” function which takes a constant argument “p”. 
As the argument is constant so its value won’t be modified.
*/