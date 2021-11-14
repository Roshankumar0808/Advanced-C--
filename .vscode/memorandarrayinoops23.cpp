//MEMORY ALLOCATION OF OBJECT IN OOPS
/*
The way memory is allocated to variables and functions of the class is different even 
though they both are from the same class.
The memory is only allocated to the variables of the class when the object is created. 
The memory is not allocated to the variables when the class is declared. 
At the same time, single variables can have different values for different objects, 
so every object has an individual copy of all the variables of the class. 
But the memory is allocated to the function only once when the class is declared. 
So the objects don’t have individual copies of functions only one copy is shared among 
each object.
*/

//Arrays in Classes
/*
Arrays are used to store multiple values of the same type. An array is very helpful 
when multiple variables are required, instead of making multiple variables one array 
can be used which can store multiple values. Array stores data in sequential order.
*/

#include <iostream>
#include <iomanip>
using namespace std;
class shop
{
private:
    int itemid[100];
    int itemprice[100];
    int count;

public:
    void counter()
    {
        count = 0;
    }
    void setprice();
    void display();
};
void shop::setprice()
{
    cout << "set item id for item" << count + 1 << endl;
    cin >> itemid[count];
    cout << "set price for your item id" << endl;
    cin >> itemprice[count];
    count++;
}

void shop::display()
{
    for (int i = 0; i < count; i++)
    {
        cout << "your item id is" << itemid[i] << "its price is" << itemprice[i] << endl;
    }
}
int main()
{
    shop dukaan;
    dukaan.counter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.display();
    return 0;
}

/*
we created a shop class which has, “itemId[100]” and “itemPrice” as integer array 
variable and “counter” variable as private class members; and “initCounter” void 
function, “setPrice” void function, and “displayPrice” void function as public class 
members.

we have created a “setPrice” function. This function will take input for “itemId” and 
“ItemPrice” from the user at runtime. The value of the counter will be incremented by 
one every time this function will run.

the “for” loop inside the “displayPrice” function runs till the length of the counter 
and prints values of the array “itemId” and “ItemPrice”.

 we created an object “dukaan” of the shop data type, and the functions “initCounter” 
 is called. The function “setPrice” is called three times. Loops can also be used to 
 call the function multiple times. The “displayPrice” function is also called in the 
 main function.

*/