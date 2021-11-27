#include<iostream>
#include<iomanip>
using namespace std;
class complex{
    int a;
    int b;
    public:
    complex(){
        a=0;
        b=0;
    }
    complex(int x){
       a=x;
       b=0;
    }
    complex(int x,int y){
       a=x;
       b=x;
    }
    void display(){
        cout<<"The number are"<<a<<","<<b<<endl;
    }
};
int main(){
    complex c1,c2(5),c3(2,3);
    
    c1.display();
    c2.display();
    c3.display();
    return 0;
}