#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* back;

    Node(int data1 , Node* next1 , Node* back1 ){
        data =data1;
        next = next1;
        back = back1;
    }
    
};

Node* reverseNode(Node* head){
    Node* temp = head;
    Node* prev = NULL;
    
    while(temp){
        Node* front = temp -> next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;

}