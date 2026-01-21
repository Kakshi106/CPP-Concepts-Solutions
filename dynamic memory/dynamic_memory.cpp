#include <iostream>
int main(){
//     int *pNum = NULL;

//     pNum = new int;

//     *pNum = 21;

//     std :: cout << "address:  "<< pNum << "\n";
//     std :: cout << "value:  " << *pNum << "\n"; 


    char *pGrades = NULL;
    int size;

    std :: cout << "How many grades do you want to enter: ";
    std :: cin >> size;

    pGrades = new char[size]; // **************>>>>>>

    for(int i = 0 ; i < size ; i++){
        std :: cout << "Enter grades #" << i+1 << ": ";
        std ::cin >> pGrades[i];
     }

    for(int i = 0; i < size; i++){
        std :: cout << pGrades[i] << " ";
    }

    delete[] pGrades;
}