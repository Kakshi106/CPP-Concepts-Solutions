#include <iostream>
int main(){
    std :: string name;
    std :: cout << "Enter your name: ";
    std :: cin >> name;
    if(name.length()>12){
        std :: cout << "Your name is too long";
    }
    else if (name.empty()){
        std :: cout << "You didnt enter your name.";
    }
    else{
        std :: cout << "Hello " << name;
    }
}