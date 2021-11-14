//1
//Scope resolution operator
#include<iostream>
using namespace std;
int a= 5;
int main()
{
    int a =20;
    cout<<a<<endl;// This print value of local variable
    cout<<::a<<endl;// This primt value of global variable and is known as "Scope resolution operator"
    return 0;
}

//2
//sizeof()
#include<iostream>
using namespace std;
int main()
{
   int a = 34.4f;
   int b = 34.4l;
   cout<<sizeof(a)<<endl;
   cout<<sizeof(b)<<endl;
   cout<<sizeof(34.4)<<endl;
   cout<<sizeof(34.4F)<<endl;
   cout<<sizeof(34.4L)<<endl;
   return 0;
}

//3
//Reference variable
#include<iostream>
using namespace std;
int main()
{
   int x= 5;
   int & y =x;// This is called refrence variable in this if we use & in front of any other variable and name it as previous variable than it will point it toward the previous variable only.This is way to call a same variavle with diffrent names.
   cout<<x<<endl;
   cout<<y<<endl;
   return 0;

}

//4
//tyepcasting
/*It is basically changing one form of data type to another like changing int to float 
float to double*/
#include<iostream>
using namespace std;
int main(){
    int a = 15;
    float b= 15.88;
    cout<<float(a)<<endl;//can be written in both ways here we changed int to float.
    cout<<(float)a<<endl;
    cout<<int(b)<<endl;//here we changed float to int type.
    cout<<(int)b<<endl;
    cout<<a+b<<endl;
    cout<<a+int(b)<<endl;//here we add int to float coverted int.
    cout<<float(a)+b<<endl;
    return 0;
}
