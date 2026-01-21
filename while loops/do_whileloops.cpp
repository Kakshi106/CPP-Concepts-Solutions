#include <iostream>
int main(){
    int number;
    do{
        std :: cout << "Enter a +ve number:";
        std :: cin >> number;
    }while(number < 0);
        
    std :: cout << "You entered " << number;
}
// for loops works same like c language------------------------------------------>