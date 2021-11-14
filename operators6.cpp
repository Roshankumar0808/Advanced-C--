//1
//Arthemetic opeartor
#include<iostream>
using namespace std;
int main()
{
   int a=14;
   int b=5;
   cout<<a+b<<endl;// add
   cout<<a-b<<endl;//subb
   cout<<a*b<<endl;//mul
   cout<<a/b<<endl;//div and give only whole number because both variable are whole num and data type is int .
   cout<<a%b<<endl;//remainder
   cout<<a++<<endl;//15 increase by1
   cout<<a--<<endl;//14 decrease 1 from latest value
   cout<<++b<<endl;//6 first increase and then print 
   cout<<--b<<endl;//5 first decrease and then print 
    return 0;
}

//2
//Assingment operator
// e.g int a =5; char c ='d' 

//3
//Comparsion operator
#include<iostream>
using namespace std;
int main()
{
   int a=14;
   int b=5;
   //( ) is important in comparsion operator.
   cout<<(a==b)<<endl;// a is not equal to b so its printing 0 i.e false
   cout<<(a!=b)<<endl;// a is not equal to b so its printing 0 i.e true
   cout<<(a>=b)<<endl;//a is greater than b so printing 1.
   cout<<(a<=b)<<endl;
   cout<<(a>b)<<endl;
   cout<<(a<b)<<endl;
    return 0;
}

//4
//Logical operator
#include<iostream>
using namespace std;
int main()
{
   int a=14;
   int b=5;
   cout<<((a==b)&&(a>b))<<endl;// And operator:print 1 only if both condition are true
   cout<<((a==b)||(a>b))<<endl;//OR operator: print 1 if any one of the given condition are true
   cout<<(!(a==b))<<endl;//NOT operator: print opposite to what real answer is
   return 0;
}
