#include <iostream>
using namespace std;
class superclass_chef{
    public:
    void dish1(){
        cout << "He makes Chicken Salad" << endl;
    }
    void dish2(){
        cout << "He makes Chicken Masala" << endl;
    }
    void dish3(){
        cout << "He makes Fish Curry" << endl;
    }

};
class subclass_chef : public superclass_chef{
    public:
    void dish4(){
        cout << "He makes fish fry" << endl;
    }
};

int main(){
    superclass_chef chef;
    chef.dish2();
    subclass_chef chef2;
    chef2.dish2();
    chef2.dish4();
}