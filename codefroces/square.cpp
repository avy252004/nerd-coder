#include<iostream>
using namespace std;
int main(){
    long int n,m,a;
    long long int q,r;
    cin>> n;
    cin>> m;
    cin>>a;
    q = n/a;
    r=n%a;
    if(r!=0){
        q++;
    }
    long long int i = m/a;
    if(m%a!=0){
        i++;
    }
    cout<< i*q;

    return 0 ;
}