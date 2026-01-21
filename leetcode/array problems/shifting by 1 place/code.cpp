#include <iostream>
using namespace std;
int shiftbyone(int arr[], int n){
    int temp = arr[0]; 
    for(int i = 1 ; i<n ; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    
}
int main(){
    int n;
    std :: cin >> n;
    int arr[n];
    for(int i =0; i<n; i++){
        std :: cin >> arr[i];
    }
    shiftbyone(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
