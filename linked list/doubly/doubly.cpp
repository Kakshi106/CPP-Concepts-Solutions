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
        Node(int data1, Node* next1 , Node* back1){
            data = data1;
            next = next1;
            back = back1;
        }
};
Node* convertArr2DLL(vector <int> &arr){
    Node*head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1 ; i<arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr , prev);
        prev ->next = temp;
        prev = temp;
    }
    return head;
}
Node* deleteHead(Node* head){
    if(head== NULL || head->next ==NULL)
        return NULL;

    Node* prev = head;
    head = head->next;

    head->back = nullptr;
    prev-> next = nullptr;

    return(head);
    free(prev);
}
Node* deletetail(Node* head){
    if(head== NULL || head->next ==NULL)
        return NULL;
    Node* tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    Node* newtail = tail->back;
    newtail->next = nullptr;
    tail->back = nullptr;
    delete tail;
    return head;
}
Node* deleteKthElement(Node* head , int k){
    if(head==NULL){
        return NULL;
    }
    int count = 0;
    Node* temp = head;
    while(temp != NULL){
        count ++;
        if(count == k) break;
        temp = temp ->next;
     }
    Node* prev = temp->back;
    Node* front = temp->next;

    if(prev == NULL && front == NULL){
        return NULL;
    }
    else if(prev == NULL){
        return deleteHead(head);
    }
    else if(front == NULL)
        return deletetail(head);
    
    prev->next = front;
    front->back = prev;

    temp->next = nullptr;
    temp->back = nullptr;
    free(temp);

    return (head);
}
void deleteNode(Node* temp){
    Node* front = temp->next;
    Node* prev = temp->back;

    if(front == NULL){
        prev->next = nullptr;
        temp->back = nullptr;
        free(temp);
        return;
    }

    prev -> next = front;
    prev -> back = prev;

    temp->next = temp->back = nullptr;
    free(temp);
}

Node* insertBeforeHead(Node* head , int val){
    Node* newNode = new Node(val , head , nullptr);
    head->back = newNode;

    return newNode;
}
Node* insertBeforeTail(Node* head , int val){
    if(head-> next == NULL)
        return insertBeforeHead(head , val);
    Node* tail = head;
    while(tail-> next != NULL){
        tail = tail-> next ;
    }
    Node* prev = tail->back;
    Node* newNode = new Node(val, tail , prev);
    prev ->next = newNode;
    tail -> back = newNode;

    return head;
}
Node* insertBeforeK(Node* head , int k , int val ){
    if(k == 1){
        insertBeforeHead(head , val);
    }
    Node* temp = head;
    int count = 0 ;
    while(temp != NULL){
        count ++;
        if(count == k)
            break;
        temp  = temp->next;
    }
    Node* prev = temp->back;
    Node* newNode = new Node(val, temp , prev);
    temp->back = newNode;
    prev->next = newNode;

    return head;

}


void insertBeforeNode(Node* temp , int val){
    Node* prev = temp->back;
    Node* newNode = new Node(val , temp , prev);
    temp->back = newNode;
    prev->next = newNode;


}
void print2DLL(Node* head){
    while(head != NULL){
        cout << head -> data << " ";
        head = head -> next;
    }
}


int main(){
    vector <int> arr = {1,2,3,4,5};
    Node* head = convertArr2DLL(arr);
    insertBeforeNode(head->next, 10);
    print2DLL(head);
 } 