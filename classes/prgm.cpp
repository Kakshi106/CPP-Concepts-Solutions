#include <iostream>
class human{
    public:
        std :: string name;
        int age;
        
        void hello(){
            std :: cout << "Hello everyone!";
        }

};
int main(){
    human human1;
    human1.name = "Jeff\n";
    human1.age = 19;
    std :: cout << human1.name;
    std :: cout << human1.age<< "\n";

    human1.hello();

}