//1
//FOR loop:
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    for(int i=1;i<=10;i++){
        cout<<(6*i)<<endl;//first it will see condition int i=1 then i<=10 then c++ program and at last go for updation i++.
    }
    return 0;
}

//2
//WHILE loop:
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int i=1;
    while(i<=10)
    {
        cout<<(6*i)<<endl;
        i++;
    }
    return 0;
}

//3
//DO-WHILE LOOP
//dO WHILE LOOP AT LEAST RUN ONE TIME AAND AFTER THAT IT CHECK WHILE CONDITION
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int i=1;
    do{
        cout<<(6*i)<<endl;
        i++;
    }while(i<=10);
    return 0;
}