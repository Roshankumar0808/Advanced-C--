 //1
#include<iostream>
using namespace std;
int main(){
    int a=4,b=6;
    char c ='d';
    cout<<"The value of a is:"<<a<<".\nThe value of b is: "<<b;
    cout<<"\nThe value of c is "<<c;
    return 0;
}

// /* "\n" it acts as a line break.*/

// //Local and global variable
// //2
#include<iostream>
using namespace std;
int global=89;
void sum(){
    cout<<global;
}
int main(){
    int global=15;
    global=18;
    sum();
    cout<<global;
    return 0;
}

/*So here we are defining local and global variable 
** always remember local variable have precedence over global variable .
In both variable work completely fine even if both have same name.
In code2 we can clearly see that what ever variable we write inside int main i.e"global" is 
called local variable.
and the "global " we used in line 18 of code is actually global variable.
So when we run our code it start running from line int main and it see that our variable has 
value 15 and in next line we update it as 18 so now our local variable"global " has value 18 
now after updating global variable value we call a function called sum()
So now our program will go to sum function and excetute it and in sum() there is no
local variable so it will see for globbal variable and we have global variable value as 89.
so sum() will print value 89 first and then move to int main and there we print 18.
so toghether it becomes 8918.*/

// Bollean data types.
//3
#include<iostream>
using namespace std;
int main(){
    bool a=true,b=false;
    cout<<"The value of a is:"<<a<<".\nThe value of b is: "<<b;
    return 0;
}

//So in program 3 boolean data type will print value 1 for true and 0 for false.
