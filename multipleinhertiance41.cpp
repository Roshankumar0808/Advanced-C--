#include<iostream>
#include<iomanip>
using namespace std;
class base1{
    protected:
    int b1;
    public:
    void setdata1 (int a){
        b1=a;
    }
};
class base2{
    protected:
    int b2;
    public:
    void setadata2(int b){
        b2=b;
    }
};
class base3{
    protected:
    int b3;
    public:
    void setdata3(int c){
        b3=c;
    }
};
class derived:public base1,public base2,public base3{
    public:
    void display(){
        // setdata1(15);
        // setadata2(18);
        // setdata3(225);
        cout<<b1<<b2<<b3<<endl;
    }
};
int main(){

    derived roshan;
    roshan.setdata1(15);
    roshan.setadata2(18);
    roshan.setdata3(225);
    roshan.display();
    return 0;
}

/*
Multiple inheritances are a type of inheritance in which one derived class is 
inherited with more than one base class. For example, we have three classes 
“employee”, “assistant” and “programmer”. If the “programmer” class is inherited 
from the “employee” and “assistant” class which means that the “programmer” class 
can now implement the functionalities of the “employee” and “assistant” class. 
*/

/*
After writing the class keyword we have to write the derived class name and then put a “:” sign.
After “:” sign we have to write the visibility mode and then write the base class name 
nd again we have to write the visibility mode and write another base class name.
*/

/*
1st we created a “Base1” class which consists of protected data member integer 
“base1int”.
2nd the “Base1” class consists of a public function “set_base1int”. This function 
will set the value of the data member “base1int”.
3rd we created a “Base2” class which consists of protected data member integer 
“base2int”.
4th the “Base2” class consists of a public function “set_base2int”. 
This function will set the value of the data member “base2int”.
5th we created a “Base3” class which consists of protected data member integer 
“base3int”.
2nd the “Base3” class consists of a public function “set_base3int”. This function 
will set the value of the data member “base3int”.
*/

/*
1st we created a “Derived” class which is inheriting “Base1”, “Base2”, and “Base3” classes in public mode.
2nd the “Derived” class consists of the public member function “show”.
4th the function “show” will first print the values of “base1int”, “base2int”, and 
“base3int” individually and then print the sum of all three values.
*/

/*
1st object “harry” is created of the “Derived” data type.
2nd the function “set_base1int” is called by the object “harry” and the value “25” is passed.
3rd the function “set_base2int” is called by the object “harry” and the value “5” is passed.
4th the function “set_base3int” is called by the object “harry” and the value “15” is passed.
4th the function “show” is called by the object “harry”.
*/