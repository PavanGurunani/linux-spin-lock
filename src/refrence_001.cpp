/* C++ program to demonstrate
   Author: Pavan Gurunani

   Reference Variable : When a variable is declared as reference,
   it becomes an alternative name for an existing variable.
   A variable can be declared as reference by putting ‘&’ in the declaration.

   References are less powerful than pointers
   1) Once a reference is created, it cannot be later made to reference another object; it cannot be reseated. This is often done with pointers.
   2) References cannot be NULL. Pointers are often made NULL to indicate that they are not pointing to any valid thing.
   3) A reference must be initialized when declared. There is no such restriction with pointers

*/
#include <iostream> 
  
using namespace std; 
  
int main() 
{
    int x =10,y=20;

    // ref is a reference to x.
    int& ref = x;

    //int& ref = y;   //Not allowed :  Once a reference is created,
                      //it cannot be later made to reference another object;
                      //it cannot be reseated. This is often done with pointers.
    int& ref1 = x;

    cout << "value of x="<<x << " and ref=" << ref << endl;
    cout << "value of x="<<x << " and ref1=" << ref1 << endl;

    // Value of x is now changed to 20
    ref = 20;
    cout << "value of x="<<x << " and ref=" << ref << endl;

    // Value of x is now changed to 30
    x =30;
    cout << "value of x="<<x << " and ref=" << ref << endl;

    return 0; 
}
