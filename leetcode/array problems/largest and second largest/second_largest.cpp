#include <iostream>
using namespace std;
int second_largest(int arr[], int n){
    int largest = arr[0];
    int Slargest = -1;
    for(int i =0; i<n ; i++){
        if(largest < arr[i]){
            Slargest = largest;
            largest = arr[i];
        
        }
        else if(arr[i] < largest && arr[i] > Slargest){
            return Slargest;
        }
    }
    return Slargest;
}

int second_smallest(int arr[], int n){
    int smallest = arr[0];
    int Ssmallest;
    for(int i = 0; i<n ; i++){
        if(arr[i] < smallest){
            Ssmallest = smallest;
            smallest = arr[i];
        }
    else if (arr[i] != smallest && arr[i] <Ssmallest){
        return Ssmallest = arr[i];
    }
}
return Ssmallest;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Second Largest is" << second_largest(arr, n) << endl;
    cout << "Second Smallest is " << second_smallest(arr , n);
}