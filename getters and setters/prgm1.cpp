#include <iostream>
using namespace std;
class student{
    private:
        int gpa;
    public:
    string name;
    int roll;

    student(string Aname, int Aroll, int Agpa){
        Aname = name;
        Aroll = roll;
        setgpa(Agpa);
    }
    void setgpa(int Agpa){
        if (Agpa > 0 && Agpa < 10)
            gpa = Agpa; 
        else{ 
            cout << "Wrong Value" << endl;
            gpa = 0;
        }
    }
    int getgpa(){
        return gpa;
    }

    
};

int main(){
    student student1("Khushal", 35 , 20 );

    cout << student1.getgpa();


}