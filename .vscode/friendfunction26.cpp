/*
Friend functions are those functions that have the right to access the private data 
members of class even though they are not defined inside the class. It is necessary to 
write the prototype of the friend function.
*/
/*
One main thing to note here is that if we have written the prototype for the friend 
function in the class it will not make that function a member of the class.
*/

#include<iostream>
#include<iomanip>
using namespace std;
class complex{
    private:
    int a;
    int b;
    public:
    void sumg(int n,int m){
        a=n;
        b=m;
    }
    friend complex sumc(complex O1,complex O2);
    void display(){
        cout<<"THE SUM OF complex a and b is:"<<a<<"+"<<"i"<<b<<endl;
    }
    
};
complex sumc(complex O1,complex O2){
    complex O3;
    O3.sumg((O1.a+O2.a),(O1.b+O2.b));
    return O3;
}
int main(){
    complex d,e,f;
    d.sumg(1,2);
    d.display();
    e.sumg(3,4);
    e.display();
    f=sumc(d,e);
    f.display();
    return 0;
}

/*
we created a complex class that has integer “a” variable and “b” integer variable as 
private class members; and “setNumber” void function, “printNumber” void function as 
public class members. The “sumComplex” friend function prototype is written as well in 
the complex class. These functions are explained below.

We have defined a “setNumber” function. In this function the values are assigned to 
the variables “a” and “b” because they are private data members of the class and values 
cannot be assigned directly. We have defined a “printNumber” function. In this function, 
the values of the variable “a” and “b” are being printed. We have defined a “sumComplex” 
friend function. In this function, the object “o3” is created which calls the “setNumber” 
function and passes the values of two objects after performing addition on them.
*/

/*
We have created object “c1”, “c2”, and”sum” of complex data-type.
The object “c1” calls the “setNumber” and “printNumber” functions.
The object “c2” calls the “setNumber” and “printNumber” functions.
The function “sumComplex” is called and the values are assigned to the “sum”.
The object “sum” calls the “printNumber” functions.
*/

/*
Properties of Friend Function
Not in the scope of the class
Since it is not in the scope of the class, it cannot be called from the object of that class, for example, sumComplex() is invalid
A friend function can be invoked without the help of any object
Usually contain objects as arguments
Can be declared under the public or private access modifier, it will not make any difference
It cannot access the members directly by their names, it needs (object_name.member_name) to access any member.
*/