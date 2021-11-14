//1
//Break statements
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    for (int i = 0; i <10; i++)
    {
        cout<<i<<endl;
        if(i==5){//Here we are saying our program to stop working extactly at 5 and jump out of for loop.
            break;
        }
    }
    cout<<"break at 5";
    return 0;
}

//2
//break before code
//The basic catch of this program is that here we are using breaking condition even befoe code ehich meaans that our code will stop working at 4 because we gided thaat it should stop working at 5.
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    for (int i = 0; i <10; i++)
    {   if(i==5){//Here we are saying our program to stop working extactly at 5 and jump out of for loop.
            break;
        }
        cout<<i<<endl;
    }
    cout<<"break at 5";
    return 0;
}

//3
//continue
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    for (int i = 0; i <10; i++)
    {
        if(i==5){//Here we are saying our program to stop just escape at 5 which means it will work all fine but will escape what it has to do on 5.
            continue;
        }
        cout<<i<<endl;
        
    }
    cout<<"break at 5";
    return 0;
}
/*
CONTINUE WORKING
Initialize integer variable “i” with value “0”
Check the condition if the value of the variable "i” is smaller than “10”
If the condition is true go into the loop body
Check the condition if the value of the variable "i” is equal to “5", if it is equal terminate the loop for the current iteration and go to the next iteration
Execute “cout” function
Update the value of “i” by one
Keep repeating these steps until the loop condition gets false.*/

//The main difference is that the break statement entirely terminates the loop, but the continue statement only terminates the current iteration.