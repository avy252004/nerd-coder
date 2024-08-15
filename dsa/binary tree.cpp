#include<iostream>
#include<vector>
using namespace std;
class NODE{
    public :
    int data;
    NODE* left;
    NODE *right;
    NODE(int v):data(v){
        this->left=NULL;
        this->right=NULL;
    }
};
class tree{
    private:
    NODE* root;
    public:
    tree():root(nullptr){}
    void setroot(int d)
    {
        root = new NODE(d);
    }
    void printree(NODE*head){
        if (head=NULL){
            return;
        }
        cout<<head->data<<":";
        if(head->left!=NULL){
            cout<<"L."<<head->left;
        }
        if(head->right!=NULL){
            cout<<"R."<<head->right;
        }
        printree(head->left);
        printree(head->right);

    }
    
};