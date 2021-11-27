#include<iostream>
#include<iomanip>
using namespace std;
class A{
    int b;
    public:
    A(int a){
       b=a;
    }
    void displayA(){
        cout<<b<<endl;
    }

};
class B{
   int c;
   public:
   B(int d){
       c=d;
   }
   void displayB(){
       cout<<c<<endl;
   }

};
class derived:public A,public B{
      int derived1,derived2;
      public:
      derived(int e,int f,int g ,int h): B(g),A(h){
          derived1=e;
          derived2=f;
          
      }

};
int main(){
    
    return 0;
}