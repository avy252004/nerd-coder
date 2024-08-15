#include<iostream>
using namespace std;
static int respo = 0 ;
void response(){
    int arr[3];
    int i;
    
    int count  = 0;
    for (i = 0 ; i< 3;i++){
        cin>> arr[i];
        cout<< " ";
        if (arr[i]==1){
            count++;
        }
    }

    
    
    if (count>=2){
        respo++;
    }

}
int main(){
    int n;
    cin>> n ;
    for(int i = 0 ;i<n ;i++){
        response();
        cout<< endl;
    }
    cout << respo;
}