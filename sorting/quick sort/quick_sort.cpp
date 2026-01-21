#include <bits/stdc++.h>
using namespace std;

int partition(vector <int> &arr, int low , int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i]<=pivot && i<high ){
            i++;
        }
        while(arr[j]> pivot && j >= low){
            j--;
        }
        if(i<j) 
            swap(arr[i] , arr[j]);
    swap(arr[low], arr[j]);
    }
    return j;
}
void quicksort(vector <int> &arr, int low , int high){
    if(low<high){
        int pIndex = partition(arr, low , high);
        quicksort(arr, low , pIndex -1);
        quicksort(arr, pIndex+1, high);
    }
}


int main() {
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    int n = arr.size();

    quicksort(arr, 0 , n);

    cout << "Sorted array: ";
    for(int x : arr) cout << x << " ";
    cout << endl;

    return 0; // success
}