//Insertion sort
#include <iostream>

int InsertionSort(int arr[], int n){
    int key,j;
    for(int i=1;i<n;i++){
        key = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {2,5,9,1,3,7,12,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    InsertionSort(arr,n);
}