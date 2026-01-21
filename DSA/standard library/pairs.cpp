#include <bits/stdc++.h>
using namespace std;
void pairs(){
    pair <int,int> p = {3,4};
    cout << p.first << " " << p.second;
    pair <int , pair<int , int>> p2 = {1 , {2 ,3}};
    cout << "\n" << p2.first << " " << p2.second.first << " " << p2.second.second;


    pair <int , int> arr[] = {{1,2} , {3,4}, {5,6}};
    cout << arr[1].first  << "\n" <<  arr[0].second;
}
int main(){
    pairs(); 
}