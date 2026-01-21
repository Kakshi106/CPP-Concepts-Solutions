#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data1){
        data = data1;
        left= nullptr;
        right = nullptr;

    }
    
};

vector <vector<int>> levelorder(Node* root){
    vector<vector<int>> result;
    if(!root) return result;
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
            int size = q.size();
            vector <int> level;

            for(int i = 0; i<size; i++){
                Node* root = q.front();
                q.pop();

                level.push_back(root->data);
                if(root->left) q.push(root->left);
                if(root->right) q.push(root->right);
            }
            result.push_back(level);
        }
        return result;
    }

/*
    in first section declaring result for answer
    declaring q as queue since levelorder works in queue
    also pushing first node 

*/

/*
    in second section , we are running the queue as if queue is not empty
    declaring level to print store numbers in result through level
    since q.front is first node since we declared q.push(root) in first section
    poping the root going to the next node
    storing data in level also checking if root have children on left or right
    pushing level in result 
    and returning result
*/