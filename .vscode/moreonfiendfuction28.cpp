#include<iostream>
#include<iomanip>
using namespace std;
class Y;
class X{
    int data;
    public:
    void setdata(int a){
        data=a;
    }
    friend void add(X,Y);
};
class Y{
    int num;
    public:
    void setdata(int b){
        num=b;
    }
    friend void add(X,Y);
};
void add(X O1,Y O2){
    cout<<(O1.data+O2.num)<<endl;//take care here we have to use o1.data and o2.num ,using o1.a,o2.b is incorrect.
}
int main(){
    X h;
    h.setdata(15);

    Y j;
    j.setdata(18);

    add(h,j);
    return 0;
}

/*
1st class “Y” is declared at the top which is known as forward declaration to let the 
compiler know that this class is defined somewhere in the program.
2nd class “X” is defined which consists of private data member “data” and public member 
function “setValue” which assigns the value to the private data member “data”. At the 
end friend function “add” is declared.
3rd class “Y” is defined which consists of private data member “num” and public member 
function “setValue” which assigns the value to the private data member “num”. At the 
end friend function “add” is declared.
4th function “add” is defined which add the value of the objects of class “X” and “Y” 
and print it.
*/

/*
1st object “a1” of the data type “X” is declared
2nd function “setValue” is called by the object “a1” and the value “15” is passed
3rd object “b1” of the data type “Y” is declared
4th function “setValue” is called by the object “b1” and the value “18” is passed
5th function “add” is called and the objects “a1” and “b1” are passed to it. 
The function “add” will add the values of both objects and print them.
*/

#include<iostream>
#include<iomanip>
using namespace std;
class Y;
class X{
    int data1;
    friend void exchange(X &,Y &);// declare friend function with & whil taking refrence variable
    public:
    void setdata(int a){
          data1=a;  
    }
    void display(){
     cout<<data1<<endl;
    }
    

};
class Y{
    int data2;
    friend void exchange(X & ,Y & );

    public:
    void setdata(int b){
          data2=b;  
    }
    void display(){
     cout<<data2<<endl;
    }
    

};
void exchange(X &O1,Y &O2){
      int temp=O1.data1;
      O1.data1=O2.data2;
      O2.data2=temp;
}

int main(){
    X h;
    Y j;
    h.setdata(15);
    j.setdata(18);
     
    exchange(h,j);
    h.display();
    j.display();
  
    return 0;
}

/*
1st class “y” is declared at the top which is known as forward declaration to let the 
compiler know that this class is defined somewhere in the program.
2nd class “x” is defined which consists of private data member “data1” and friend 
function “exchange” which takes reference variables “x” and “y” as parameters. 
The public member function “indata” is defined which assigns the value to the 
private data member “data1” and the function “display” prints the value of the 
data member “data1”.
3rd class “y” is defined which consists of private data member “data2” and friend 
function “exchange” which takes reference variables “x” and “y” as parameters. 
The public member function “indata” is defined which assigns the value to 
the private data member “data2” and the function “display” prints the value of the 
data member “data2”.
4th function “exchange” is defined which swap the values.
*/

/*
1st object “h” of the data type “x” is declared
2nd object “j” of the data type “y” is declared
3rd function “indata” is called by the object “h” and the value “15” is passed
4th function “indata” is called by the object “j” and the value “18” is passed
5th function “exchange” is called and the objects “h” and “j” are passed to it. 
The function “exchange” will swap both values and
6th function “display” is called by the objects “h” and “j” which will print their values.
*/