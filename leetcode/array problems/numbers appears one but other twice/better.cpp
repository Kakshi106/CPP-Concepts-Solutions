#include <bits/stdc++.h>
using namespace std;
int appears_twice(vector <int> &nums){
    int n = nums.size();
    int i;
    int hash[n+1] ={0};
    for(i =1 ; i <n; i++){
        hash[nums[i]]++;
    }

    if (hash[i] == 1);
        return i;
}