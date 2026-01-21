#include <iostream>
namespace first{
    int x = 2; 
}
namespace second
{
    int x=3;
} // namespace second
using namespace std; //** 

int main(){
    cout << :: first :: x;
}