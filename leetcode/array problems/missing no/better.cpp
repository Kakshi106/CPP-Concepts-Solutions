#include <iostream>
int missingno(int arr[], int n){
    int hash[n+1];
    int i;
    for(i =0; i<n; i++){
        hash[arr[i]]++;
    }

    if(hash[i] == 0)
        return hash[i];
}