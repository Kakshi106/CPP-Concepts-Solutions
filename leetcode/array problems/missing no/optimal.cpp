#include <bits/stdc++.h>
using namespace std;
int missing_Number(vector <int> &arr, int N){
    int xor1 = 0 , xor2 = 0;
    int n = N-1;
    for(int i = 0; i<n; i++){
        xor2 = xor2^arr[i];
        xor1 = xor1 ^ (i+1);
    }
    xor1 = xor1 ^ N;
    return xor1 ^ xor2;
}

int main() {
    // Example input
    int N = 5; // numbers should be 1..5
    vector<int> arr = {1, 2, 4, 5}; // 3 is missing

    cout << "Missing number is: " << missing_Number(arr, N) << endl;

    return 0;
}
