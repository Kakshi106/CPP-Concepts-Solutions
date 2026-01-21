#include <iostream>
using namespace std;

class constructor{
public:
    string first_name;
    string last_name;
    int age;


    constructor(string first_name, string last_name , int age){
        this -> first_name = first_name;
        this -> last_name = last_name;
        this -> age = age;
    }


};
int main(){
    constructor person1("Jeff" , "BEFFOZ", 29);
    cout << person1.first_name << "\n";
    cout << person1.last_name << "\n";
    cout << person1.age;


}