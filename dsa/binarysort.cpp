#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int value;
    Node * left;
    Node* right;
    Node(int v):value(v){
        this->left=NULL;
        this->right=NULL;}

};
void print (Node* nody){
    if(nody!=NULL){
        print(nody->left);
        cout<< nody->value<<endl;
        print( nody->right);
    }}

    




int main()
{
    return 0;
}