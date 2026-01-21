#include <iostream>
int main(){
    std :: string name = "Khushal";
    int age = 19;
    std :: string freepizza[5] = {"pizza1","pizza2","pizza3","pizza4","pizza5",};

    std :: string *pname = &name;
    int *pAge = &age;
    std :: string *pfreepizza = freepizza;
    // std :: string *pfreepizza = &freepizza[4];

    std :: cout << *pname << "\n";
    std :: cout << *pAge << "\n";
    std :: cout << *pfreepizza << "\n";


}