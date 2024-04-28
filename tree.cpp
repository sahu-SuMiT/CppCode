// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
struct Root{
   int key;
   struct Root *left;
   struct Root *right;
};

void post(struct Root *root){
    if(root->left){
        post(root->left);
    }
    if(root->right){
        post(root->right);
    }
    cout<<root->key<<" ";
}

void pre(struct Root *root){
    cout<<root->key<<" ";
    if(root->left){
        pre(root->left);
    }
    if(root->right){
        pre(root->right);
    }
    
}

void in(struct Root *root){
    
    if(root->left){
        in(root->left);
    }
    cout<<root->key<<" ";
    if(root->right){
        in(root->right);
    }
    
}

int count(struct Root *root){
    static int c=0;
    if(!root->left && ! root->right){
        c++;
        cout<<root->key<<" ";
    }
    if(root->left){
        count(root->left);}
    if(root->right){
        count(root->right);}
        return c;
}
int main() {
    
    struct Root *root = new Root;
    root->key=18;
    root->left=new Root;
    root->left->key=12;
    root->left->left=NULL;
    root->left->right=new Root;
    root->left->right->key=15;
    root->left->right->left=NULL;
    root->left->right->right=NULL;
    
    root->right=new Root;
    root->right->key=20;
    root->right->left=new Root;
    root->right->left->key=19;
    root->right->left->left=NULL;
    root->right->left->right=NULL;
    
    root->right->right=new Root;
    root->right->right->key=25;
    root->right->right->left=NULL;
    root->right->right->right=NULL;
    
    cout<<root->right->left->key<<endl;
    post(root);
    cout<<"\n";
    in(root);
    cout<<endl;
    pre(root);
    
    cout<<"\nleaf nodes: "<<count(root)<<endl;
    return 0;
}
