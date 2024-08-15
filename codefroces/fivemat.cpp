#include<iostream>
using namespace std;
int main(){
    int r,c,n;
    int arr[5][5];
    for(int k = 0; k<5;k++){
        for(int j =0;j<5;j++){
            cin>>arr[k][j];
            if (arr[k][j]==1){
                r= k;
                c=j;
            }
        }
        cout<<endl;
    }
    if(r>2)
    {
        if (c>2){
            cout<< (c-2 + r-2)<<endl;
        }
        else{
            cout<< (2-c + r-2);
        }
    }
    else{
         if (c>2){
            cout<< (c-2 + 2-r)<<endl;
        }
        else{
            cout<< (2-c + 2-r);
            }

        
    }

    return 0;
}