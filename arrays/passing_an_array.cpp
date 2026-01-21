#include <iostream>
double getTotal (double prices[], int size);
int main(){
    double prices[] = {49.45, 13.45, 11.22, 6.99};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);

    std :: cout << "$" << total;

}
double getTotal(double prices[], int size){
    double total = 0;
    
    for( int i =0; i< size ; i++){
        total += prices[i];
    }
    return total;
}
