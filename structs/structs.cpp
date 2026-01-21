#include <iostream>
struct players_data{
    std :: string name;
    int age;
    std :: string position;
    double avg_rating;
};

int main(){
    players_data player1;
    player1.name = "Messi";
    player1.age = 35;
    player1.position = "RWF";
    player1.avg_rating = 9.1;

    players_data player2;
    player2.name = "Ronaldo";
    player2.age = 37;
    player2.position = "LWF";
    player2.avg_rating = 9.5;
    
    players_data player3;
    player3.name = "Neymar Jr";
    player3.age = 30;
    player3.position = "CAM";
    player3.avg_rating = 9.4;


    std :: cout << "Name:" << player1.name << "\n";
    std :: cout << "age: "<< player1.age << "\n";
    std :: cout << "position :"<< player1.position << "\n";
    std :: cout << "average rating " << player1.avg_rating << "\n";

    std :: cout << "Name : "<< player2.name << "\n";
    std :: cout << "age :" << player2.age << "\n";
    std :: cout << "position:"<< player2.position << "\n";
    std :: cout << "average rating " << player2.avg_rating << "\n";

    std :: cout << "Name: " << player3.name << "\n";
    std :: cout << "age :" << player3.age << "\n";
    std :: cout << "position: "<< player3.position << "\n";
    std :: cout << "average rating " << player3.avg_rating << "\n";

}