#include <bits/stdc++.h>
using namespace std;
void sending_zeros(int arr[], int n){
    vector <int> temp;
    for(int i = 0; i<n ; i++){
        if(arr[i] != 0)
            temp.push_back(arr[i]);
    }
    int new_size = temp.size();
    for(int i = 0 ; i < new_size; i++ ){
        arr[i] = temp[i];
    }

    for(int i = new_size; i< n; i++){
        arr[i] = 0;
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