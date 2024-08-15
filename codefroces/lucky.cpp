#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    //long long int num;
    
    string ch ;
    cin>> ch;
   // std::cout<<ch;
    for(int i =0; i<ch.length();i++)
    {
        if(ch[i]=='4')
        {
           
            continue;
        }
        else if(ch[i]=='7'){
            continue;
        }
        else{
            cout<<"NO";
            return 0;
        }

    }
    std::cout<<"YES";
    return 0;
}