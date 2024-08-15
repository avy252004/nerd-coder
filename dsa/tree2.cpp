#include<vector>
#include<iostream>
#include<queue>
 using namespace std;

 class NODE{
    public:
    int data;
    vector<NODE*>children;
    
    void addchild(NODE*child)
    {
        children.push_back(child);
    }
   
    NODE(int data):data(data){}
 };
 class tree{
    private:
    //NODE*root;
    NODE*rootb;
    public:
    tree ():rootb(nullptr){};
    /*void setroot(int value){
        root= new NODE(value);
    }*/
    void addchld(NODE*parent,NODE* child){
        parent->addchild(child);
    }
    void printree(NODE*rot){
        if (rot==NULL){
            return;
        }
        cout<<rot->data<<":";
        for(int i=0;i<rot->children.size();i++)
        {
            
            cout<< (rot->children[i])->data<<",";
        }
        cout<<endl;
        for (int i=0;rot->children.size();i++){
            printree(rot->children[i]);
        }
    }



    NODE* userreqinput()
    {
        int datab;
        cout<<"enter the root value"<<endl;
        cin>>datab;
        rootb = new NODE(datab);
        
        treemaker(rootb);
        return rootb;
    }
    
    void treemaker(NODE* parent)
    {    
        if (parent==nullptr){
            return;
        }
        cout<<"enter th eno of children for   "<<parent->data<<endl;
        int n;
        cin>>n;
        if (n<=0){
            return;
        }
        for(int i=0;i<n;i++){
            cout<<"enter the valu of children  "<<i <<"whose parent is   "<<parent->data<<endl;
            int value;
            cin>>value;
            NODE *valuem = new NODE(value);
            addchld(parent,valuem);
            treemaker(valuem);
        }


    }

 };
 int main(){
    tree trei;
    NODE* m =trei.userreqinput();
    trei.printree(m);
    return 0;
 }
