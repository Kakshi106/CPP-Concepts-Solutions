#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

Node* reverseLL(Node* head){
    if(head == NULL || head ->next == NULL)
        return head;
    Node* newhead = reverseLL(head->next);      /****IMPORTANT **********/
    Node* front = head -> next;
    front-> next= head;
    head->next = NULL;

    return newhead;
}


Node* reverse(Node* head){
    if(head == NULL || head ->next == NULL)
        return head;
    
    stack <Node*> st;
    Node* temp = head;
    while(temp){
        st.push(temp);
        temp = temp->next;
    }

    Node* newhead = st.top();
    st.pop();                            //NOT CONSIDERING DUE TO SPACE COMPLEXITY

    temp = newhead;


    while(!st.empty()){
        temp-> next = st.top();
        st.pop();
        temp -> next;
    }
    return newhead;
}