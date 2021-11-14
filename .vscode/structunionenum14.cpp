//1
//STRUCTURE
#include<iostream>
#include<iomanip>
using namespace std;
typedef struct employee
{
    int eid;
    char fav;
    float sal;
}ro;//typedef is used to call the whole function by own fixed/given naame eg here we can now use "ro" at the place of struct employee


int main(){
    struct employee roshan;
    roshan.eid=3;
    roshan.fav='c';
    roshan.sal=120000;
    cout<<roshan.eid<<endl;
    cout<<roshan.fav<<endl;
    cout<<roshan.sal<<endl;
    ro harsh;
    harsh.eid=8;
    harsh.fav='p';
    harsh.sal=15200.36;
    cout<<harsh.eid<<endl;
    cout<<harsh.fav<<endl;
    cout<<harsh.sal<<endl;
    return 0;
}
//2
//UNION
/*
we have created a union with the name “money” in which we have declared three variables of different data types (rice, car, pound). The main thing to note here is that:

We can only use 1 variable at a time otherwise the compiler will give us a garbage value
The compiler chooses the data type which has maximum memory for the allocation.
*/
#include<iostream>
#include<iomanip>
using namespace std;
union money
{
    int car;
    char bike;
    float truck;
};

int main(){
    union money m1;
    m1.car=15;
     //m1.truck= 156.3;
    cout<<m1.car<<endl;
   // cout<<m1.truck<<endl;
    return 0;
}
/*
1st we have created a union variable “m1” of type “money”, 
2nd we have assigned values to (car) fields of the union money, 
and in the end, we have printed the value of “car”. 
The main thing to note here is that once we have assigned a value to the union field “rice”, 
now we cannot use other fields of the union otherwise we will get garbage value.
*/

//3
//ENUMS
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    enum fruits{mango,apple,orange};
    fruits g1=apple;
    cout<<g1<<endl;

    return 0;
}
/*
 1st we have created an enum “fruits” in which we have stored three named constants (breakfast, lunch, dinner).
 2nd we have assigned the value of “fruits” to the variable “g1” and at the end, we have printed “g1”. 
 The main thing to note here is that (mango,apple,orange) are constants; the value for “mango” is “0”, 
 the value for “apple” is “1” and the value for “ornage” is “2”.*/

 // We can also write the above code without assingning a variable g1 like;
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    enum fruits{mango,apple,orange};
    
    cout<<mango<<endl;
    cout<<apple<<endl;
    cout<<orange<<endl;

    return 0;
}