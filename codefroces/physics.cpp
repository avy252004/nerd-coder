#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    std::vector<int> x;
    std::vector<int> y;
    std:: vector<int> z;
    int n ;
    cin>>n;
    for(int m=0;m<n;m++){
        int i,j,k;
        cin>>i;
        cin>>j;
        cin>>k;
        x.push_back(i);
        y.push_back(j);
        z.push_back(k);
        
    }
    int a=0,b=0,c=0;
    for (int m=0;m<n;m++)
    {
        a = a+x[m];
        b= b+y[m];
        c=c+z[m];
    }
    if(a==0&&b==0&&c==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }



    return 0;
}