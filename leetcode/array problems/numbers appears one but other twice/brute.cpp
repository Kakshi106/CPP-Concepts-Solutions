#include <bits/stdc++.h>
using namespace std;
int appears_onetime(vector <int> arr){
    int n = arr.size();
    for(int i = 0; i<n; i++){
        int num = arr[i];
        int count = 0 ;
        for(int j =1; j<n ; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if (count == 1)
        return num;
    }
}