#include<iostream>
#include<iomanip>
using namespace std;
class base1{
    public:
    void say(){
        cout<<"hello"<<endl;
    }
};
class base2{
    public:
    void say(){
        cout<<"kaise ho"<<endl;
    }
};
class derived: public base1,public base2{
    public:
    void display(){
        base2::say();
    }
};
int main(){
    derived roshan;
    base1 b;
    base2 b2;
    b.say();
    b2.say();
    roshan.display();
    return 0;
}

/*
Ambiguity in inheritance can be defined as when one class is derived for two or 
more base classes then there are chances that the base classes have functions with 
the same name. So it will confuse derived class to choose from similar name functions. 
To solve this ambiguity scope resolution operator is used “::”. An example program is 
shown below to demonstrate the concept of ambiguity resolution in inheritance.
*/

/*
We have created a “Base1” class which consists of public member function “greet”. The function “greet” will print “how are you?”
We have created a “Base2” class which consists of public member function “greet”. The function “greet” will print “kaise ho?”
We have created a “Derived” class which is inheriting “Base1” and “Base2” classes. 
The “Derived” class consists of public member function “greet”. The function “greet” 
will run the “greet” function of the “Base2” class because we have used a scope 
resolution operator to let the compiler know which function should it run otherwise 
it will cause ambiguity.
*/

/*
Object “base1obj” is created of the “Base1” data type.
Object “base3obj” is created of the “Base2” data type.
The function “greet” is called by the object “base1obj”.
The function “greet” is called by the object “base2obj”.
Object “d” is created of the “Derived” data type.
The function “greet” is called by the object “d”.
*/

/*
The main thing to note here is that when the function “greet” is called by the 
object “d” it will run the “greet” function of the “Base2” class because we had 
specified it using scope resolution operator “::” to get rid ambiguity.
*/

#include<iostream>
#include<iomanip>
using namespace std;
class base1{
    public:
    void say(){
        cout<<"hello"<<endl;
    }

};
class derived:public base1{
      public:
      void say(){
          cout<<"kaise ho"<<endl;
      }

};

int main(){
    derived roshan;
    roshan.say();
    return 0;
}

/*
We have created a “B” class which consists of public member function “say”. The function “say” will print “hello world”
We have created a “D” class that is inheriting the “B” class. The “D” class consists 
of the public member function “say”. The function “say” will print “Hello my beautiful 
people”
*/

/*
The main thing to note here is that both “B” and “D” classes have the same function 
“say”, So if the class “D” will call the function “say” it will override the base
 class “say” method because compiler by default run the method which is already 
 written in its own body. But if the function “say” was not present in the class 
 “D” then the compiler will run the method of the class “B”.
*/

/*
Object “b” is created of the “B” data type.
The function “say” is called by the object “b”.
Object “d” is created of the “D” data type.
The function “say” is called by the object “d”.
*/