#include<bits/stdc++.h>

using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};


class Solution {
public:
    Node* connect(Node* root) {
        if(!root){
            return NULL;
        }
        
        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        
        while(!q.empty()){
            Node *node=q.front();
            q.pop();
            
            if(node){
                node->next = q.front();
                
                if(node->left){
                    q.push(node->left);
                }
                
                if(node->right){
                    q.push(node->right);
                }
                
            }
            
            else if(!q.empty()){
                q.push(NULL);
            }
        }
        
        return root;

    }
};