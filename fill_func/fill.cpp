#include <iostream>

    // fill() = Fills a range of elements with a specified value
    //            fill(begin, end, value)
int main(){
    const int size = 99;
    std :: string foods[size];
    fill(foods, foods + size/3, "pizza");
    fill(foods + (size/3) , foods +(size/3)*2, "pasta");
    fill(foods + (size/3)*2 , foods + size, "hamburger");

    
    
    for (std:: string food : foods){
        std :: cout << food << "\n";
    }


    return 0;
}
