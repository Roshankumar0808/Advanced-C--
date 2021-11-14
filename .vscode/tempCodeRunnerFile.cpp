#include <iostream>
#include <iomanip>
using namespace std;
class complex
{
private:
    int a;
    int b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setdatabysum(complex O1, complex O2)
    {
        a = O1.a + O2.a;
        b = O1.b + O2.b;
    }
    void display()
    {
        cout << "THE COMPLEX NUMBER IS" << a << "+"
             << "i" << b << endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setdata(5, 7);
    c1.display();

    c2.setdata(1, 2);
    c2.display();

    c3.setdatabysum(c1, c2);
    c3.display();
    return 0;
}