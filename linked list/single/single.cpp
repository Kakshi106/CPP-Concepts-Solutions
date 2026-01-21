#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;

        Node(int data1){
            data = data1;
            next = nullptr;
        }
        Node(int data1, Node* next1){
            data = data1;
            next = next1;
        }
};
Node* convrertArr2LL( vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1;i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
    
}
Node* removeshead(Node*head){
    Node* temp = head;
    head = head-> next;
    delete temp;
    return head;
}

Node* removeK(Node* head , int k){
    if(head == NULL) return nullptr;
    if(k==1){
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    int count = 0;
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        count ++;
        if (count == k){
            prev->next = prev->next->next;  //i.e prev->next->next = temp->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp -> next;
    }
    return head;
}


Node* remove_elemnt(Node* head ,int k) {
    if(head->data == NULL) return nullptr;
    if(head->data == k){
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    } 
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){ 
        if (temp-> data == k){
            prev->next = prev->next->next;  // prev->next->next = temp->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp -> next;
    }
    return head;
}

Node* removestail(Node* head){
    if(head == NULL || head->next == NULL)
        return NULL;
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp ->next;
    }
    delete temp-> next;
    temp->next = nullptr;   
    return head;
}

void printLL_and_count(Node* head){
    int count = 0;
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";                  // ??***** TRAVERSAL *******??-------------->
        temp = temp->next;                            
        count ++ ;
    }
    cout << endl;
    cout << count << endl;
}


void checkifthere (Node *head , int val){
    Node* temp = head;
    while(temp){
    if(temp->data == val)
        cout << "exists";
    temp = temp->next; 
    }
}

Node* insertAtFirst(Node* head , int val){
    Node* temp = new Node(val, head);
    return temp;
}

Node* insertAtLast(Node* head, int val){
    if(head == NULL){
        return new Node(val);
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp-> next;
    }
    Node* newNode = new Node(val);
    temp->next = newNode;
    return head;
}

Node* insertAtK(Node* head , int val , int k){
    if(head==NULL){
        return new Node(val);
    }
    if(k == 1){
        return new Node(val , head);
    }
    int count = 0;
    Node* temp = head;
    while(temp!= NULL){
        count++;
        if(count == k-1){
            Node* x = new Node(val , temp->next);
            temp-> next = x;
            break;
        }
        temp = temp-> next;
    }
    return head;
}


Node* insertAtval(Node* head , int val){
    if(head==NULL){
        return NULL;
    }
    if(head->data==val){
        return new Node(val , head);
    }
    Node* temp = head;
    while(temp->next != NULL){
        if(temp->next->data == val){
            Node* x = new Node(val , temp->next);
            temp-> next = x;
            break;
        }
        temp = temp-> next;
    }
    return head;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    Node* head = convrertArr2LL(arr);
    // checkifthere(head , 4);
    // head = removeshead(head);
    // printLL_and_count(head);
    // head =  remove_elemnt(head , 4);
    // head = insertAtval(head , 2);
    printLL_and_count(head);

}