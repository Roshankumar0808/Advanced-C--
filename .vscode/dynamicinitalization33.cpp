#include<iostream>
#include<iomanip>
using namespace std;
class bankdeposit{
     int principal,time;
     float rate,returnrate;
     public:
    bankdeposit(){};//Writing this non void function is necessaray.
     bankdeposit(int p,int t,int r){
           principal=p;
           time=t;
           rate=float(r)/100;
           returnrate=p;
           returnrate=returnrate*(1+r);
     }
     bankdeposit(int p,int t, float r){
           principal=p;
           time=t;
           rate=r;
           returnrate=p;
           returnrate=returnrate*(1+r);
     }
     void display(){
         cout<<principal<<","<<time<<","<<rate<<","<<returnrate<<endl;
     }
};
int main(){
    bankdeposit b1,b2;
    int a;
    int b;;
    int c;
    float d; 
    cin>>a>>b>>c;
    cin>>a>>b>>d;
    b1=bankdeposit(a,b,c);//Writing like this is imp for dynamic initilazation.
    b2=bankdeposit(a,b,d);
    b1.display();
    b2.display();

    return 0;
}