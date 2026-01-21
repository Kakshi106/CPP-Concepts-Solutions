#include <bits./stdc++.h>
using namespace std;
int consecutive_ones(vector <int> &arr){
    int count = 0;
    int maxi = 0;
    for(int i = 0; i<arr.size(); i++){
        if(arr[i] == 0){
            count++;
            maxi = max(maxi, count); //stores maximum consecutive numbers
        }
        else
            count = 0;

        return maxi;
    }
} 