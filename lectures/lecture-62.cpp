#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class node {
    public:
        int data;
        node* left;
        node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root){
    cout << "Enter the data: " << endl;
    int data;
    cin>>data;


    if(data == -1){
        return NULL;
    }
    
    root = new node(data);

    cout << "Enter data for inserting in left : " << data << endl;
    root->left = buildTree(root->left);

    cout << "Enter data for inserting in right  : " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(node* root){ 

    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;

            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << temp -> data << " ";
            if(temp -> left){
                q.push(temp->left);
            }
            if(temp -> right){
                q.push(temp->right);
            } 
        }
    }
}

void reverseLevelOrderTraversal(node* root){

    if(root == NULL){
        return;
    }
    
    queue<node*> q;
    stack<node*> s;

    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        s.push(temp);
        

        if(temp != NULL){
            if(temp -> left){
                    q.push(temp->left);
                }
            if(temp -> right){
                    q.push(temp->right);
            }
        }          
        else{
            if(!q.empty()){
                q.push(NULL);
            }
        }
        
    }

    while(!s.empty()){
        node* temp = s.top();
        s.pop();
        
        if(temp == NULL){
            cout << endl;
        }
        else{
            cout << temp -> data << " ";
        }
    }

}

int main(){
    node* root = NULL;

    //creting a tree
    root = buildTree(root);

    //level order traversal
    cout << "Level order traversal is: " << endl;
    levelOrderTraversal(root);

    //reverse level order traversal
    cout << "Reverse level order traversal is: " << endl;
    reverseLevelOrderTraversal(root);

    return 0;
}