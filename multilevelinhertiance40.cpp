#include<iostream>
#include<iomanip>
using namespace std;
class student{
    int roll;
    public:
    void setdata(int r){
           roll=r;
    }
    void getdata(){
        cout<<"roll no is"<<roll<<endl;
    }
};
class exam:public student{
     protected:// do not forget to marks maths physics protected otherwise it would cuase error.
     float maths;
     float physics;
     public:
     void marks(float m,float p){
         maths=m;
         physics=p;
     }
     void pecentge(){
         cout<<(maths+physics)/2<<endl;
     }
     void getmarks(){
         cout<<"marks in maths"<<maths<<endl;
         cout<<"marks in maths"<<physics<<endl;
     }
};

class result: public exam{
    float percentage;
    public:
    void display(){
        getdata();
        getmarks();
       
        cout<<"total percentage is"<<(maths+physics)/2<<endl;
    }
};

int main(){
    result roshan;
    roshan.setdata(15);
    roshan.marks(78,98);
    roshan.display();
    return 0;
}

/*
Multilevel Inheritance in C++
Multilevel inheritance is a type of inheritance in which one derived class is inherited 
from another derived class. For example, we have three classes “animal”, “mammal” and 
“cow”. If the “mammal” class is inherited from the “animal” class and “cow” class is 
inherited from “mammal” which means that the “mammal” class can now implement the 
functionalities of “animal” and “cow” class can now implement the functionalities of 
“mammal” class.
*/

/*
1st we created a “student” class which consists of protected data member integer “roll_number”.
2nd the “student” class consists of a public function “set_roll_number” and “get_roll_number”
3rd the function “set_roll_number” will set the value of the data member “roll_number”.
4th the function “get_roll_number” will print the value of the data member “roll_number”
*/

/*
1st we created an “exam” class that is inheriting “student” class in public mode.
2nd the “exam” class consists of protected data members float “math” and float “physics”.
3rd the “exam” class consists of public member functions “set_marks” and “get_marks”.
4th the function “set_marks” will set the value of the data members “math” and “physics”.
5th the function “get_marks” will print the value of the data members “math” and “physics”.
*/

/*
1st we created a “Result” class which is inheriting the “Exam” class in public mode.
2nd the “Result” class consists of private data member’s float “percentage”.
3rd the “exam” class consists of the public member function “display_results”.
4th the function “display_results” will call the “get_roll_number” and “get_marks” 
functions, and add the values of “math” and “physics” variables then divide that 
value with “2” to get a percentage and prints it.
*/

/*
1st object “harry” is created of the “Result” data type.
2nd the function “set_roll_number” is called by the object “harry” and the value 
“420” is passed.
3rd the function “set_marks” is called by the object “harry” and the values “94.0” 
and “90.0” are passed.
4th the function “display_results” is called by the object “harry”.
*/