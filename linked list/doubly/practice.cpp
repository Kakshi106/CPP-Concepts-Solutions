#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node* back;

    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }

    Node(int data1 , Node*next1 , Node*back1){
        data = data1;
        next = next1;
        back = back1;
    }
};

Node* convertarr2dll(vector <int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1; i<arr.size() ; i++){
        Node* temp = new Node(arr[i]);
        prev -> next = temp;
        prev = temp;
    }
    return head;

}

void printdll(Node* head){
    while(head != NULL){
        cout << head -> data << " ";
        head = head-> next;
    }
}

Node* deletehead(Node* head){
    if(head == NULL || head ->next == NULL) return nullptr;
    
    Node* prev = head;
    head = head-> next;
    head-> back = nullptr;
    prev-> next = nullptr;

    delete prev;
    return (head);

}

Node* deletetail(Node* head){
    Node* tail = head;
    while(tail->next){
        tail = tail->next;
    }
    Node* newtail = tail->back;
    newtail->next = nullptr;
    tail -> back = nullptr;
    delete tail;
    return head;
    
}

Node* deletekthelement(Node* head , int k){
    int count = 0;
    Node* temp = head;
    while(temp){
        count++;
        if(count == k) break;
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* front = temp -> next;

    if(temp->next == NULL && temp->back == NULL) return nullptr;
    else if(temp->next == NULL) return deletetail(head);
    else if(temp->back == NULL) return deletehead(head);
    
    prev -> next = front;
    front -> back = prev;

    temp->next = nullptr;
    temp->back = nullptr;
    delete temp;

    return head;
}

int main(){
    vector <int> arr = {1,2,3,4,5};
    Node* head = convertarr2dll(arr);
    head = deletekthelement(head, 2);
    printdll(head);

}