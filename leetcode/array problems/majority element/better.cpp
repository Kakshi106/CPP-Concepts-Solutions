#include <bits/stdc++.h>
using  namespace std;
int majority_element(vector <int> &arr){

    map <int , int> hash;
    for(int i = 0 ; i< arr.size(); i++){
        hash[arr[i]]++;
    }
    for(auto it : hash){
        if (it.second > arr.size()/2){
            return it.first;
        }
    }
    return -1;
}