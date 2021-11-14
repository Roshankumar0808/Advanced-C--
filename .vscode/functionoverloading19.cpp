//1
//FUNCTION OVERLOADING
/*
Function overloading is a process to make more than one function with the same name but 
different parameters, numbers, or sequence.
*/
#include <iostream>
#include <iomanip>
using namespace std;
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
int sum(int a, int b, int c)
{
    int d = a + b + c;
    return d;
}

int volume(int r, int h)
{
    int v = (3.14 * r * r * h);
    return v;
}

int volume(int a)
{
    int b = (a * a * a);
    return b;
}

int volume(int l, int b, int h)
{
    int e = (l * b * h);
    return e;
}
int main()
{
    cout << sum(5, 7) << endl;
    cout << sum(5, 7, 9) << endl;
    cout << volume(2, 1) << endl;
    cout << volume(2) << endl;
    cout << volume(2, 1, 3) << endl;
    return 0;
}

/*
we have created two “sum” functions, the 1st “sum” function takes two arguments “int a”, 
“int b” and return the sum of those two variables; and the 2nd sum function is taking 
three arguments “int a”, “int b”, “int c” and return the sum of those three variables.
we passed two arguments in the first function call and three arguments in the second 
function call.both the “sum” function runs fine and gives us the required output.
*/

/*
The main thing to note here is that the name of the function can be the same but the 
data type and the sequence of arguments need to be different as shown in the example 
program otherwise program will not run.
*/

/*
we have created three “volume” functions, the 1st “volume” function calculates the 
volume of the cylinder and has two arguments “double r” and “int h”; the 2nd “volume” 
function calculates the volume of the cube and has one argument “int a”; the 3rd 
“volume” function calculates the volume of the rectangular box and has three arguments 
“int l”, “int b” and “int h”.
*/

/*
we passed three arguments in the first function call, two arguments in the second 
function call, and one argument in the third function call.all three “volume” functions 
run fine and give us the required output.
*/