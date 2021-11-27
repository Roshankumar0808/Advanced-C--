#include<iostream>
#include<iomanip>
using namespace std;
class base{
    int data1;
    public:
    int data2;
    void setdata(){
        data1=10;
        data2=20;
    }
    int getdata(){//here we can not use void becuse futher we wan int value of data3
        return data1;}
    void getdata2(){
        cout<<data2<<endl;
    }
};
class derived: public base{
    int data3;
    public:
    int process(){
        data3=data2*getdata();
        return data3;
    }
    void display(){
        cout<<data3<<endl;
        cout<<getdata()<<endl;
        cout<<data2<<endl;
    }
};
int main(){
    derived d1,d2,d3;
    d1.setdata();
    d1.process();
    d1.display();
  

    return 0;
}

/*
Single inheritance is a type of inheritance in which a derived class is inherited 
with only one base class. For example, we have two classes “employee” and “programmer”.
 If the “programmer” class is inherited from the “employee” class which means that the 
 “programmer” class can now implement the functionalities of the “employee” class
*/

/*
1st we created a “base” class which consists of private data member’s integer “data1” 
and public data member integer “data2”.
2nd the “base” class consists of three member functions “setData”, “getData”, and 
“getData2”.
3rd the function “setData” will assign the values “10” and “20” to the data members 
“data1” and “data2”.
4th the function “getData” will return the value of the data member “data1”.
5th the function “getData2” will return the value of the data member “data2”.
*/

/*
1st we created a “derived” class which is inheriting the base class publically. 
The “derived” class consists of private data member’s integer “data3”.
2nd the “derived” class consists of two public member functions “process” and “display”.

3rd the function “process” will multiply the values “data2” and “data1”; and store the
 values in the variable “data3”.
4th the function “display” will print the values of the data member “data1”, “data2”, 
and “data3”.
*/

/*
1st object “d1” is created of the “derived” data type.
2nd the function “setData” is called by the object “d1”. This function will set the 
values of the data members “data1” and “data2”
3rd the function “process” is called by the object “d1”. This function will multiply 
the values “data2” and “data1”; and store their value in the variable “data3”.
4th the function “display” is called by the object “d1”. This function will print 
the values of the data member “data1”, “data2”, and “data3”.
*/