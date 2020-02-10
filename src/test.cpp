// C++ program to demonstrate 
// Author: Pavan Gurunani
#include <iostream> 
  
using namespace std; 
  
int main() 
{
    int x =10;
    int& ref = x;

    cout << "value of x="<<x << " and ref=" << ref << endl;
    ref = 20;
    cout << "value of x="<<x << " and ref=" << ref << endl;
    x =30;
    cout << "value of x="<<x << " and ref=" << ref << endl;

    return 0; 
}
