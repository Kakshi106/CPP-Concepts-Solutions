#include <bits/stdc++.h>
using namespace std;

class parent {
    public :
    virtual void display() = 0;
};
class Float : public parent{
    float value;
    public:
    Float(float v) : value(v) {}
    void display() override {
        float value;
    }
};

class Dept : public parent{
    int id;
    public : Dept(int i , const char* n , const char* g){ }
    void display() override {
        department details; 
    }
};
class stack{
    parent *arr[4];
    int top;
    public:
    stack() : top(-1) {}
    void push(parent * data){
        arr[++top] = data;      
    }
    parent* pop(){
        return arr[top--];
    }
};
int main(){
    stack s;
    s.push (new Float (15.19));
    s.push(new Dept(10 , "CS" , "COMP"));
    s.pop() -> display();
}