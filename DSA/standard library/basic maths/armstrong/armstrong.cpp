#include <iostream>
int main(){
    int num;
    int sum =0;
    std :: cout << "Enter a number";
    std :: cin >> num;
    int duplicate = num;
    while(num!= 0){
        int ld = num%10;
        sum = sum +(ld*ld*ld);
        num /= 10;
    }
    if (sum == duplicate)
        std :: cout << "This is armstrong number";
    else
        std :: cout << "This is not armstrong number";
        

}