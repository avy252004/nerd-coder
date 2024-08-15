#include<iostream>
using namespace std;
void display(int arr[], int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
void cumlative(int arr[],int n){
    for (int i =1;i<n;i++){
        arr[i]= arr[i]+arr[i-1]; 
    }
}
int max(int arr[],int n){
    int k = arr[0];
    for (int i =1;i<n;i++){
        if (arr[i]>k){
            k = arr[i];
        }
    }
    return k;
}
void counting(int arr[],int n ,int k ){
    
    int *arr1= new int[k+1];
    int *arr2 = new int[n];
    for (int i =0;i<k+1;i++){
        arr1[i]=0;

    }
    for (int i=0; i<n;i++){
        arr1[arr[i]]=arr1[arr[i]]+1;


    }
    cumlative(arr1,k+1);
   
    for (int i=n-1;i>=0;i--){
        arr2[arr1[arr[i]]-1]=arr[i];
        arr1[arr[i]]=arr1[arr[i]]-1;

    }
     display(arr2,n);

}
int main()
{
    int arr[] = {2,1,1,6,2,6};
    int k = max(arr,6);
    counting(arr,6,k);
    
    
    return 0;
}
