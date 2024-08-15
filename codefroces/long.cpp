#include<iostream>
#include<vector>
using namespace std;
int main(){
    string strng;
    int n;
    vector<string> list;
    cin>>n;
    for(;n>0;n--){
         cin>>strng;
         list.push_back(strng);}
    for(string strng : list){
    if(strng.size()>10){
        cout<<strng[0]<<strng.size()-2<<strng[strng.size()-1]<<endl;

    }
    else{
          cout<<strng<<endl;
    }

    }
   
    return 0;
}