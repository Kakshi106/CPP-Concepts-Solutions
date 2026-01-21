#include <bits/stdc++.h>
using namespace std;
int main(){
    int i, num;
    cout << "Enter a number: ";
    cin >> num;

    // for(i = 1; i <= num ; i++  ){
    //     if(num % i == 0)
    //         cout << i << " ";
    // }

    for(i= 1 ; i< sqrt(num) ; i++){
        if(num % i == 0){
            cout << i << " ";
            if(i != num/i){
                cout << num/i << " ";
            }
        }
    }

}

