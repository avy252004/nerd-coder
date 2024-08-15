#include<iostream>
using namespace std;
int main(){
    int  k ,n;
    cin>> n;
    cin>> k;
    int *arr = new int[n];
    
    int people = 0 ;
    
    for (int i = 0 ;i<n;i++){
        cin >> arr[i];
    }
    int min = arr[k-1];
    for (int i=0;i<n;i++){
        if ((arr[i]>=min) && (arr[i]!=0)){
            people++;
           
        }

    }
    cout<< people<<endl;
    return 0;
}