  #include<iostream>
using namespace std;

void insertheap(int arr[],int s){
        for (int i=1;i<s;i++){
            int childindex = i;
            
            while(childindex>0){
                    int parent_index = (childindex-1)/2 ;
                    if (arr[childindex]<arr[parent_index]){
                        int temp = arr[childindex];
                        arr[childindex]=arr[parent_index];
                        arr[parent_index]=temp;
                    }
                    else{
                        break;
                    }
                    childindex = parent_index;

            }
        }
}
void remove(int arr[],int s){
    int size = s;
    while(size >1){
        int min =arr[0];
        arr[0]=arr[size-1];
        arr[size-1]=min;
        size--;
        int parentindex =0;
        while (parentindex<size)
        {
            int left=2*parentindex +1;
            int right =2*parentindex +2;
            int minimal = -1;
            if (left<size&& right<size)
            {
                if (arr[left]<arr[right]){
                    minimal= left;
                }
                else
                {
                    minimal= right;
                }
            
            }
            else if(left<size){
                minimal = left;
            }
            else if (right<size){
                minimal = right;
            }
        if(minimal!=-1&&arr[parentindex]>arr[minimal]){
                swap(arr[parentindex],arr[minimal]);
                parentindex = minimal;
        }
        else{
            break;
        }
            
        }
        

    }
}

void heapshort(int arr[],int s)
{
    insertheap(arr,s);
    remove(arr,s);

}
int main(){
    int arrays[] = {4,2,9,5,1,0};
    heapshort(arrays,6);
    for (int i : arrays){
        cout<< i<<"\n"<<endl;
    }
}
