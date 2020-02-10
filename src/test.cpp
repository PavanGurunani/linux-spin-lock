// C++ program to demonstrate 
// Author: Pavan Gurunani
#include <iostream> 
  
using namespace std; 
  
int main() 
{
    int x =10;

    // ref is a reference to x.
    int& ref = x;

    cout << "value of x="<<x << " and ref=" << ref << endl;

    // Value of x is now changed to 20
    ref = 20;
    cout << "value of x="<<x << " and ref=" << ref << endl;

    // Value of x is now changed to 30
    x =30;
    cout << "value of x="<<x << " and ref=" << ref << endl;

    return 0; 
}
