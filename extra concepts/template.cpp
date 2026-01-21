#include <iostream>
template <typename integer, typename decimal>

auto max(integer x , decimal y){
    return (x>y) ? x :y;
}
int main(){
    std :: cout << max(1, 2.1) << "\n";

    return 0;
}