#include <iostream>
int main(){
    // cout << (insertion operator)
    // cin >> (extraction operator)
    std :: string name;
    int age;
    std :: cout << "Whats your name? : ";
    std :: cin >> name;
    std :: cout << "Whats your age? : ";
    std :: cin >> age;  

    std :: cout << "Your name is " << name << "\n";
    std :: cout << "Your age is " << age;

// -------------------------------------------------------------------->


    //for name with spaces
    std :: cout << "Whats your name? : ";
    std :: getline(std :: cin , name);
    std :: cout << "Whats your age? : ";
    std :: cin >> age;  

    std :: cout << "Your name is " << name << "\n";
    std :: cout << "Your age is " << age;
 

// ----------------------------------------------------------------------------->

// to remove white spaces





   std::cout << "What's your full name?: ";
   std::getline(std::cin >> std::ws, name);      // *****************

   std::cout << "What's your age?: ";
   std::cin >> age;

   std::cout << "Hello " << name << '\n';
   std::cout << "You are " << age << " years old";

   return 0;
}