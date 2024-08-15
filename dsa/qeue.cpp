#include<iostream>
#include<vector>
using namespace std;
template<typename T>
class QUEUE{
    private:
    int front;
    int endi;
    T *data;
    int size;
    bool isfull(){
        return endi == (size);

    }
    bool isempty(){
        return front == endi;
    }
    public:
    QUEUE(T value=10):size(value), front(-1),endi(-1){
        data = new T[size];
    }
    ~QUEUE(){
        delete[] data;
    }
    // to add the ellemnt;
    void push(T value){
        if (isfull()){

            cout<< "error"<<endl;
            return;
        }
        if (isempty()){
            endi=front=0;
        }
        data[endi++]=value;
    }
    void pop(){
        
        if (isempty()){
            cout<<"error"<<endl;
            return;
        }
        
        else{
    
            int i=front;
            if (front==size-1){
                cout<<data[i]<<endl;
                front=endi=-1;
                return;
            }
            front++;
            cout<<data[i]<<endl;
        }
        
    }
    void display(){
        for (int i=0;i<endi;i++){
            cout<<data[i]<<endl;
        }
    }

};
int main(){
    QUEUE<int> hell(4);
    hell.push(9);
    hell.push(7);
    hell.push(2);
    hell.push(4);
    hell.display();
    cout<<"hell"<<endl;
    hell.pop();
    hell.pop();
    hell.pop();
    hell.pop();
    hell.push(6);
    hell.display();
}