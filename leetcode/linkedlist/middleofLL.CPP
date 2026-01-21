#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

Node* middle(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast && fast->next){
        slow = slow-> next;
        fast = fast-> next -> next;  // #Note: if slow moves 1 step and fast moves 2 step it obvious that 
                                     // slow will fast/2 times since fast moves till the end it gives mid**
    }
    return slow;
    
}