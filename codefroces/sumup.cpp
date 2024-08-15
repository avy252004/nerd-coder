#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    vector<int> arr1 ;
    vector<int> arr2 ;
    vector<int> arr3 ;
    //int i,j;
    string inpu ;
    string fina;
    cin>> inpu;
    for(int i =0; i<inpu.length(); i++){
        if(inpu[i] =='1'){
            arr1.push_back(1);
        }
        if(inpu[i] =='2'){
            arr2.push_back(2);
        }
        if(inpu[i] =='3'){
            arr3.push_back(3);
        }
    

    }
    for (int i =0;i<arr1.size();i++){
        string j  = to_string(1);
        if(arr2.size()!=0 || arr3.size()!=0){
                j.append("+");
                fina.append(j);
        }
        else{
             if (i!=arr1.size()-1)
             {
                j.append("+");
                fina.append(j);
            }
            else
            {
            fina.append(j);
            }

        }

    }
    for (int i =0;i<arr2.size();i++){
        string j  = to_string(2);
        if(arr3.size()!=0){
                j.append("+");
                fina.append(j);
        }
        else{
             if (i!=arr2.size()-1)
             {
                j.append("+");
                fina.append(j);
            }
            else
            {
            fina.append(j);
            }

        }
        

    }
    for (int i =0;i<arr3.size();i++){
        string j  = to_string(3);
        if (i!=arr3.size()-1){
                j.append("+");
        fina.append(j);
        }
        else{
            fina.append(j);
        }
        

    }
    cout<< fina<<endl;

    return 0 ;
}