#include<iostream>
#include<iomanip>
using namespace std;
class A{
    public:
    void say(){
        cout<<"hello"<<endl;
    }
};
class B:public virtual A{
    
};
class C: public virtual A{

};
class D: public B,public C{
    public:
    void display(){
        say();
    }
};

int main(){
    D roshan;
    roshan.say();
    return 0;
}