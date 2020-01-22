#include<iostream>
using namespace std;
void mergeArray(int arr[],int first,int mid,int m,int last){
    int arr3[100];
    int i=first;
    int j=m;
    int k=0;
    while(i<=mid && j<=last){
        if(arr[i]<arr[j]){
            arr3[k++] = arr[i++];
            //i++;
            //k++;
        }else{
            arr3[k++] = arr[j++];
        }
    }
    while(i<=mid){
        arr3[k++] = arr[i++];
    }
    while(j<=last){
        arr3[k++] = arr[j++];
    }
    for(int i=0;i<k;i++){
        arr[first+i] = arr3[i];
    }
}
/*void merge(int arr1[],int arr2[],int n,int m){
    int arr3[100];
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++] = arr1[i++];
            //i++;
            //k++;
        }else{
            arr3[k++] = arr2[j++];
        }
    }
    while(i<n){
        arr3[k++] = arr1[i++];
    }
    while(j<m){
        arr3[k++] = arr2[j++];
    }
    for(int i=0;i<k;i++){
        cout<<arr3[i]<<" ";
    }
}*/
void mergeSort(int arr[],int first,int last){
    if(first<last){
        int mid = (first + last)/2;
        mergeSort(arr,first,mid);
        mergeSort(arr,mid+1,last);
        mergeArray( arr,first,mid,mid+1,last);

return;
    }
}

int main(){
    int arr[]={2,9,1,6,7,5};
    cout<<"Array before sorting: "<<endl;
     for(int i = 0; i <= 5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Array after sorting: "<<endl;
    mergeSort(arr,0,5);
    for(int i = 0; i <= 5; i++){
        cout<<arr[i]<<" ";
    }
}
