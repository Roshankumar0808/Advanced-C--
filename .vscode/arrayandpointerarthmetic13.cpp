#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int marks[]={15,26,56,99};//Array is written in this manner
    marks[2]=78;//araay element value can be updated 
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    int marksnew[4];//Array can be declared in this way but in this type storaage size is necessary to mention.
    marksnew[0]=15;
    marksnew[1]=25;
    marksnew[2]=35;
    marksnew[3]=45;
    cout<<marksnew[0]<<endl;
    cout<<marksnew[1]<<endl;
    cout<<marksnew[2]<<endl;
    cout<<marksnew[3]<<endl;
    for (int i = 0; i < 4; i++)//The same array can be printed using for loop too.
    {
        cout<<marks[i]<<endl;
    }
    /*
    Pointers and Arrays
Storing the address of an array into pointer is different than storing the address of a variable into the pointer because the name of the array is an address of the first index of an array. So to use ampersand "&" with the array name for assigning the address to a pointer is wrong.

&Marks --> Wrong
Marks --> address of the first block
    */
   int* p=marks;//making pointer variable for array 
   cout<<*p<<endl;//value of first block in marks.
   cout<<*(p+1)<<endl;
   cout<<*(p+2)<<endl;
   cout<<*(p+3)<<endl;
   cout<<*(p++)<<endl;//print first value then jump to next
   cout<<*(++p)<<endl;//it first jump to next value and then it prints.
   cout<<p<<endl;//value of first block in marks.
   cout<<(p+1)<<endl;
   cout<<(p+2)<<endl;
   cout<<(p+3)<<endl;
   cout<<(p++)<<endl;//print first value then jump to next
   cout<<(++p)<<endl;//it first jump to next value and then it prints.
    return 0;
}