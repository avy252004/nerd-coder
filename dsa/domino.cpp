#include<iostream>
using namespace std;
int main(){
    int M,N,r,q,i=0;
    cin>> M;
    cin>> N;
    r= N%2;
    q=N/2;
    if (r==1){
        i = M/2; 
    }
    cout<< i+M*q ;

     return 0;
}