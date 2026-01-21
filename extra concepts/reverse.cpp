#include <iostream>

int reverse(int num){
    int rev=0;
    while(num != 0){
    int digit = num % 10;
    rev = rev*10 + digit;
    num /= 10;
    } 
    return rev;
}
int main(){
    int n;
    std :: cout << "Enter the number to reverse";
    std :: cin >> n;
    int reverse_num = reverse(n);

    std :: cout << reverse_num;


}