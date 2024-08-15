#include<iostream>
using namespace std;
int main(){
 string a;
int x=0;
 int n ; 
   cin>> n;
   for (int i =0 ; i<n; i++){

        cin>> a; 
        //x++;
       // cout<<a[0]<<a[1];
        if ((a[0]=='+'&&a[1]=='+')||(a[1]=='+'&&a[2]=='+') ){
            x++;
            //cout<<a[0]<<a[1];
        }
        else if (a[0]=='-'&&a[1]=='-'||a[1]=='-'&&a[2]=='-' ){
            x--;

        }
   }
   std::cout << x ;
   

    return 0 ;
}