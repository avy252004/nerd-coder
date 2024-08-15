#include<iostream>
#include<vector>
using namespace std;


// class with function
class STACK{
   private:
   int top;
   int *data;
   int size;
   public:
   STACK(int stack_size): size(stack_size), top(-1){
    data =new int[size];
   }
   ~STACK(){
    delete[] data;
   }

   // to check stack is emmty;
   // 
    bool empty(){
        return top ==(-1);
    }
    int push(int value){
        if(top==(size-1)){
            cout << "ERROR!! Overflow" << endl;
            
        }
        else{
            data[++top]= value;
        }
    }

    // to delete an element;
    void pop(){
        if (empty()){
            cout<< "ERRROR!!  the under flow condition"<<endl;
        }
        else{
           cout<<"hkl"<<endl;
           top--;
        }
    }
    void display(){
        for(int i =top;i>=0 && top>-1; i--){
            cout<<"elemnt ara   "<<data[i]<<"\n"<<endl;
        }

    }
    int ttop(){
        return data[top];
    }

};
int main(){
    STACK stacky(3);
    stacky.push(6);
    stacky.push(4);
    stacky.push(5);
    stacky.display();
    stacky.pop();
    stacky.display();
    stacky.push(90);
    
    cout<<stacky.ttop()<<endl;
    return 0;
}
