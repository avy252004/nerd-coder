#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void part(int a){
    if(a%2==0 && a>2){
            cout<< "YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
int main(){
    int weight;
    
    cin>>weight;
    part(weight);

    return 0;
}