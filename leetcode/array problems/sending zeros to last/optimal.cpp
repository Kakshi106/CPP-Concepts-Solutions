#include <bits/stdc++.h>
using namespace std;

int sending_zeros(int arr[] , int n){
    int j = -1;
    for(int i = 0; i < n ; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }
    if(j == -1) return; 

    for(int i = j+1; i<n ; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
 
}
int main(){
    int n;
    std :: cin >> n;
    int arr[n];
    for(int i =0; i<n; i++){
        std :: cin >> arr[i];
    }
    
    sending_zeros(arr, n );
    for(int i =0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
}