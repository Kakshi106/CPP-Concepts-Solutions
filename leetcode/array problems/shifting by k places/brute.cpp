#include <iostream>
using namespace std;

int leftrotate(int arr[] , int n, int k){
    k = k % n; //if k is 12 k%n = 5 so it will need to rotate 5 places 
    int temp[k];
    for(int i = 0 ; i< k; i++){
        temp [i] = arr[i]; //shifting early numbers to temp
    }

    for(int i = k ; i<n ; i++){
        arr[i-k] = arr[i];  //suppose k =3 so loop will start from 3
    }

    for(int i = n-k; i < n ; i++){
        arr[i] = temp[i - (n-k)];  //n = 7 in temp = temp(0 - 7-3) = 4; places at 4th place
    }

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