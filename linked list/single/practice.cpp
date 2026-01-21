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

        Node(int data1 , Node* next1){
            data = data1;
            next = next1;
        }
};


// Node* removeshead(Node* head){
//     Node* temp = head;
//     head = head-> next;
//     delete temp;
//     return head;
// }

// Node* removesk(Node* head , int k ){
//     if(head == NULL) return nullptr;
//     if(k==1){
//         return removeshead(head);
//     }
//     int count = 0;
//     Node* temp = head;
//     Node* prev = NULL;
//     while(temp){
//         count++;
//         if(count == k){
//             prev -> next = temp->next;
//             free(temp);
//             break;
//         }
//         prev = temp;
//         temp = temp-> next;    
//     }
//     return head;
//  }

// Node* removestail(Node* head){
//     if(head == NULL || head-> next == NULL){
//         return NULL;
//     }
//     Node* tail = head;
//     while(tail ->next->next != NULL){
//         tail = tail->next;
//     }
//     delete tail -> next;
//     tail->next = nullptr;
//     return head;    
// }

// Node* insertatfirst(Node* head , int val){
//     Node* temp = new Node(val , head);
//     return head;
// }


// Node* insertatlast(Node* head , int val){
//     if(head == NULL){
//         return new Node(val);
//     }
//     Node* temp = head;
//     while(temp -> next){
//         temp = temp-> next;
//     }
//     Node* newNode = new Node(val);
//     temp-> next = newNode;
//     return head;
// }

Node* insertatk(Node* head , int val , int k){
    if(head == NULL)
        return new Node(val);
    if(k==1){
        return new Node(val , head);
    }
    int count = 0;
    Node* temp = head;
    while(temp){
        count++;
        if(count = k-1){
            Node* newNode = new Node(val , temp->next);
            temp -> next = newNode;
            break;
        }
    }
    return head;
}

Node* insertatval(Node* head, int val){
    Node*temp  = head;
    while(temp->next){
        if(temp->next->data == val){
            Node* newNode = new Node(val ,temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

Node* convertarr2ll(vector <int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp; 
    }
    return head;
}

void printllandcount(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
        count++;
    }
    cout << endl;
    cout<< count << endl;    
}


int main(){
    vector <int> arr = {1,2,3,4,5};
    Node* head = convertarr2ll(arr);
    head = insertatk(head , 6 , 2);

    printllandcount(head);
}