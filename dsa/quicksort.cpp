#include<iostream>
#include<vector>
using namespace std;
void swapy(int *i,int *j){
    int temp;
    temp = *i;
    *i = *j;
    *j=temp;

}
int partition(int arr[],int low,int high){
    int i,j;
    i =low-1;
    int pivot =arr[high];
    j=low;
    for(j;j<=high-1;j++){
        if (arr[j]<pivot){
            i++;
            swapy(&arr[i],&arr[j]);
        }

    }
    swapy(&arr[i+1],&arr[high]);
    return i+1;


}
int quicksort(int arr[],int low ,int high){
    if (low <high){
        int r = partition(arr,low,high);
        quicksort(arr,low,r-1);
        quicksort(arr,r+1,high);

    }

}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    //printArray(arr, n);
    quicksort(arr, 0, n- 1);
    printArray(arr, n);

    return 0;
}