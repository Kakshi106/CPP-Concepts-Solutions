#include <iostream>
int main(){
    std ::string cars[][3] = {
        {"Suzuki" , "TATA", "Mahindra"},
        {"Chevrolet", "Dodge", "Cadillac"}, 
        {"Ferrari", "Lamborgini", "Pagani"}
    };
    int size_of_rows = sizeof(cars)/ sizeof(cars[0]);
    int size_of_columns = sizeof(cars[0])/sizeof(cars[0][0]);

    for(int i =0 ; i< size_of_rows; i++){
        for(int j = 0 ; j< size_of_columns; j++){
            std :: cout << cars[i][j] << " ";
        }
        std ::cout << "\n";
    }
}