#include<iostream>
#include<vector>
using namespace std;

class NODE {
    public:
    int data;
    NODE* next;
    NODE( int d){
        this->data=d;
        this->next=NULL;
    }
};
class linkage
{       
    public :

    void append(NODE**head , int data){
        NODE *newn = new NODE(data);
        if (*head == NULL){
             *head = newn;
             return;
        }
        else{
             NODE *temp;
             temp = *head;
             while(temp->next!=NULL){
                temp = temp->next;
             }
             temp->next = newn;

        }
    }
    //
    void display(NODE*head)
    {
        NODE * temp;
        temp=head;
        while(temp!=NULL){
            cout<< temp->data;
            temp=temp->next;
            if(temp != NULL){
                    cout << "->";
                }
        }
    }
    int count(NODE* head){
        int i;
        NODE * temp;
       if (head==NULL){
            return 0;
       }
       else{
        i =1;
       }
        
        //cout<<i<<endl;
        temp=head;
        while(temp->next!=NULL){
            i++;
            temp=temp->next;
        }
    return i; 
    }    
    void addtbeg(NODE **head,int data){
        NODE* nw= new NODE(data);
        if (count(*head) ==0){
            *head = nw;
            return;
        }
        else{
            nw->next = *head;
            *head = nw;
        }
    }
    void addafter(NODE **head,int data,int index){
        if (count(*head)==0){
            cout << "error"<<endl;
            return;
        }
        else{
            NODE* nw= new NODE(data);
            NODE *temp;
            temp = *head;
            while(temp->data!=index){temp = temp->next;
            if (temp == NULL){cout<<"value not found"; return;}}
            nw->next= temp->next;
            temp->next = nw;
            return;
        }
    }
    
};
int main()
{
    NODE* head=new NODE(9) ;
   NODE n1(0);
    NODE n2(3);
    n1.next=&n2;
    n2.next=NULL;
    head->next=&n1;
    /* linkage list;
    list.display(head);
    cout<<"\n"<<endl;//list.count(head);
    list.append(&head,5);
    list.display(head);
    cout<<list.count(head);*/
    linkage list;
    //list.append(&head,71);
   
    list.addtbeg(&head,5);
    
    list.display(head);
    cout<<endl;
    list.addafter(&head,6,7);
     list.display(head);
    
    return 0;
}
