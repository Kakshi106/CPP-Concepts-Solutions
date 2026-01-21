#include <bits/stdc++.h>
using namespace std;
void vectors(){
    vector<int> v;
    v.push_back(1); //declaring and changing values
    v.emplace_back(2); //same as push_back but faster
    
    vector <pair<int,int>> vec;

    // v.push_back({1,2});
    // v.emplace_back(1,2);

    vector<int> v(5,100);  // v = {100,100,100,100,100}

    vector <int> v(5); //resets value i.e v = {0,0,0,0,0}

    vector <int> v1(5,20);
    vector <int> v2(v1); //copies vector
    

    vector <int> :: iterator it = v.begin(); //defines address of value works like pointer
    it++; //incrementing by 1  
    cout << *(it) << " " ;//prints value not address
    
    it = it + 2;
    cout << *(it) << " "; //samajhne vale ko ishara coffee

    vector<int> :: iterator it = v.end(); //gives end/last value
    cout << v[0]; //decaration and prints like array
    
    cout << v.back() << " ";

    for(vector<int> :: iterator it = v.begin(); it != v.end(); it++ ){ //works like for(i =0; i<num ; i++)
        cout << *(it) << " "; 
    }

    // using auto
    for(auto it = v.begin() ; it != v.end(); it++){ //automatically defines
        cout << *(it) << " ";
    }
    for(auto it : v){
        cout << it << " ";
    }


    // suppose array = {10,20,12,24}
    v.erase(v.begin()+1);  // prints {10,12,24}
    v.erase(v.begin()+1 , v.begin()+2);

    vector<int> v(2,100); //{100,100}
    v.insert(v.begin(), 300); // {300,100,100}
    v.insert(v.begin()+1, 2, 200); //{300,200,200,100,100}

    vector<int> copy(3,300); // {300,300,300}
    v.insert(v.begin(), copy.begin(), copy.end()); //{300,300,300,300,200,200,100,100}

    cout << v.size();

    v.pop_back();

    v1.swap(v2); //swaps elemets of two arrays

    v.clear();

    cout<< v.empty();

    


}

