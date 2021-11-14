//1
//SELECTION STRUCTURE
//IF-ELSE IF-ELSE
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   int age;
   cout<<"ENTER YOUR AGE"<<endl;
   cin>>age;
   if ((age<18)&&(age>0)){
       cout<<"Your are not elligible to vote"<<endl;
   }
   else if(age==18){
       cout<<"Ellgible from next yr"<<endl;
   }
   else if(age<22){
       cout<<"You are half elligble"<<endl;
   }
   else{
       cout<<"yOU ARE COMPLETELY ELLIGIBLE"<<endl;
   }
   return 0;
}

//2
//SWITCH STATEMENTS
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   int age;
   cout<<"ENTER YOUR AGE"<<endl;
   cin>>age;
   switch (age)
   {
   case 3:
cout<<"ne"<<endl;
       break;
       case 13:
cout<<"nee"<<endl;
       break;
       case 23:
cout<<"neee"<<endl;
       break;
       case 33:
cout<<"neeee"<<endl;
       break;
       case 43:
cout<<"neeeee"<<endl;
       break;
   
   default:
   cout<<"end"<<endl;
       break;
   }
   cout<<"jump out of switch case"<<endl;
   return 0;
}

