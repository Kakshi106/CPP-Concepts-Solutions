#include <bits/stdc++.h>

int count(int n){
    int count =0;
    while(n>0){
        count = count +1;
        n /= 10;
    }
    return count;
}

int count(int n){
    int count = (int)(log10(n) + 1);
    return count;
}
