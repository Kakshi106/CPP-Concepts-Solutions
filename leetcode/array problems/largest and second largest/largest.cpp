#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    int largest;
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i<n; i++){
        largest = arr[0];
        if(arr[i]> largest)
            largest = arr[i];
    }
    cout << largest;
}