/*
Member Friend Functions in C++
Friend functions are those functions that have the access to private members of the 
class in which they are declared. 
*/

/*
The main thing to note here is that only that function 
can access the member function which is made a friend of the other class. An example of 
the friend function is shown below.
*/

#include<iostream>
#include<iomanip>
using namespace std;
class complex;
class calculator{
    public:
   
    int sumcomp(complex O1,complex O2);
    int sumreal(complex O1,complex O2);
    

};
class complex{
    private: 
    int a;
    int b;
    // friend int calculator ::sumreal(complex ,complex );
    // friend int calculator :: sumcomp(complex ,complex );
    public:
    void setvalue(int n,int m){
        a=n;
        b=m;
    }
     friend class calculator;
    

    void display(){
        cout<<"complex num is:"<<a<<"+"<<"i"<<b<<endl;
    }
};


int calculator ::sumreal(complex O1,complex O2){
          
          return (O1.a+O2.a);
     }
int calculator :: sumcomp(complex O1,complex O2){
       
         return (O1.b+O2.b);
    }


int main(){
    complex h,j;
    h.setvalue(4,1);
    h.display();
    j.setvalue(1,3);
    j.display();
    calculator c1,c2;
    int res1= c1.sumreal(h,j);
    cout<<"real sum of h j is:"<<res1<<endl;
    int res2= c2.sumcomp(h,j);
    cout<<"complex sum of h j is:"<<res2<<endl;

    return 0;
}

/*
a complex class is created which consists of two friend functions “sumRealComplex” 
and “sumCompComplex” of the calculator class. The main thing to note here is that 
“sumRealComplex” and “sumCompComplex” are the friend functions of complex class so 
they can access all the private members of the complex class.
*/

/*
Friend classes are those classes that have permission to access private members of the 
class in which they are declared. The main thing to note here is that if the class is 
made friend of another class then it can access all the private members of that class. 
*/

/*
Friend classes are those classes that have permission to access private members of the 
class in which they are declared. The main thing to note here is that if the class is 
made friend of another class then it can access all the private members of that class. 
*/

/*
a complex class is defined which consists of, two private data members “a” and “b”, 
and two public member functions “setNumber” and “printNumber”. The function “setNumber” 
will assign the values to the variables “a” and “b”. The function “printNumber” 
will print the values of the variables “a” and “b”. Two functions “sumRealComplex” 
and “sumCompComplex” are defined at the end. The function “sumRealComplex” will add 
the real values and the function “sumCompComplex” will add the complex value.
*/

/*
1st two objects “o1” and “o2” of the “complex” data type are declared. 2nd “setNumber” 
function is called with the “o1” and “o2” objects and the values are passed. 
3rd object “calc” of the calculator data type is declared. 4th “sumRealComplex” 
function is called by the “calc” object and the object “o1” and “o2” are passed to it. 
5th “sumCompComplex” function is called by the “calc” object and the object “o1” and 
“o2” are passed to it.
*/