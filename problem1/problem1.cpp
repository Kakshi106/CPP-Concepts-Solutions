#include <iostream>
using namespace std;
int main (){
    int sales = 25000;
    int state_tax = sales*0.05;
    int country_tax = sales*0.02;
    cout << "The total sales is $"<< sales << endl 
         << "The total state tax is $"<< state_tax << endl
         << "The total country tax is $"<< country_tax;
    return 0;  
}