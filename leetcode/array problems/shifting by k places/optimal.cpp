#include <bits/stdc++.h>
using namespace std;
//reverse func in c = reverse(start , end)
void leftrotate(int arr[] , int n, int k){
    reverse(arr , arr+k);    //time complexity increases but size complexity decreases 
    reverse(arr+k, arr+n);   //i.e O(n)                       O(1)
    reverse(arr ,arr+n);
}

int main(){
    int n;
    std :: cin >> n;
    int arr[n];
    for(int i =0; i<n; i++){
        std :: cin >> arr[i];
    }
    int k; 
    cout << "How many places do you want to rotate" << endl;
    cin >> k;
    leftrotate(arr, n , k);
    for(int i =0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
}