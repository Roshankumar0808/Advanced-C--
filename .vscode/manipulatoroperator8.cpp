//1
///CONSTANTS
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a=4;
    cout<<"past a"<<a<<endl;
    a=18;
    cout<<"present a"<<a<<endl;
    const int b =99;
    cout<<"constant b"<<b<<endl;
    b=56;//this will not work because in above line we declared b as constant so we can not change its value now.
    cout<<b<<endl;
    return 0;
}

//2
//MANIPULATORS
//These  are used for beauty and display eg are endl and setw.
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a=5,b=116,c=85697;
    cout<<"The value of a without setw"<<a<<endl;
    cout<<"The value of a without setw"<<b<<endl;
    cout<<"The value of a without setw"<<c<<endl;
    cout<<"The value of a without setw"<<setw(5)<<a<<endl;//print in 5 digit manner.
    cout<<"The value of a without setw"<<setw(5)<<b<<endl;
    cout<<"The value of a without setw"<<setw(5)<<c<<endl;
    return 0;
}

//3
//Operator Precedence
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a=15,b=16;
    int c = ((((a*6)+b)*85)-b);//It will do operation according t opeaarator preceddence table 
    //opearrtor precedence table link "https://en.cppreference.com/w/cpp/language/operator_precedence "
    //if precedence order is same i.e add sub than give prefrence accordding to left right or right left what ever written in taable
    return 0;
}

