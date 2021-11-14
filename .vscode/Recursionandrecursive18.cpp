//1
//Recursion and recursive function
#include<iostream>
#include<iomanip>
using namespace std;
int fact(int a){
    if(a<=1){
        return 1;
    }
    int b = a*fact(a-1);
    return b;
}
int main(){
    cout<<fact(4);
    return 0;
}
/*
we created a “factorial” function which takes one argument. In the function body, 
there is a base case which checks that if the value of variable “n” is smaller or 
equal to “1” if the condition is “true” return “1”. And there is a recursive condition
that divides the bigger value to smaller values and at the end returns a factorial.
4 * factorial( 4-1 )
4 * 3 * factorial( 3-1 )
4* 3 * 2 * factorial( 2-1 )
4 * 3 * 2 * 1
*/

//2
//one more eg of recursive function
//fibonnaci
#include<iostream>
#include<iomanip>
using namespace std;
int fib(int a){
    if (a<2){
        return 1;
    }
    int c= fib(a-2)+fib(a-1);
    return c;
}
int main(){
    cout<<fib(5)<<endl;
    return 0;
}
/*
we created a “fib” function which takes one argument. In the function body, there is a 
base case which checks that if the value of variable “n” is smaller than “2”, if the 
condition is “true” return “1”. And there is a recursive condition that divides the 
bigger value to smaller values and at the end returns a Fibonacci number.
*/

/*One thing to note here is that recursive functions are not always the best option. 
They perform well in some problems but not in every problem.*/