#include <iostream>
std :: string concatenate(std :: string string1, std :: string string2);
int main(){
    std :: string firstnaame = "Khushal";
    std :: string lastname = "Nagpure";
    std :: string fullname = concatenate(firstnaame, lastname);
    std :: cout << fullname;
}
std :: string concatenate(std :: string string1, std :: string string2){
    return string1 + " " + string2; //---------------------------------------------->
    
}
