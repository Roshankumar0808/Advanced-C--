//STATIC DATA MEMBER && METHOD
//STATIC DATA MEMBER IN C++
/*
When a static data member is created, there is only a single copy of the data member which is 
shared between all the objects of the class. As we have discussed in our previous 
lecture that if the data members are not static then every object has an individual 
copy of the data member and it is not shared.
*/

//Static method in c++
/*
When a static method is created, they become independent of any object and class. 
Static methods can only access static data members and static methods. Static methods 
can only be accessed using the scope resolution operator.
*/

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class employee
{
private:
    int id;
    static int count;

public:
    void setdata();
    void getdata();
    static void getcount(){
    cout << "current count is" << count << endl;
    }
};
void employee::setdata()
{
    cout << "ENTER EMPLOYEE ID" << endl;
    cin >> id;
    count++;
}

void employee::getdata()
{
    cout << "employee id is" << id << "employe number is" << count << endl;
}
int employee::count;

int main()
{
    employee roshan, rahul, ravi;
    roshan.setdata();
    roshan.getdata();
    employee::getcount();

    rahul.setdata();
    rahul.getdata();
    employee::getcount();
    return 0;
}