#include<iostream>
using namespace std;

//rotates array of size n by d elements
//takes auxillary space = d
void arrRotation(int arr[],int n,int d){
    int tempArr[10000];

    for(int i=0;i<d;i++){
        tempArr[i]=arr[i];
    }

    for(int i=0;i<n-d;i++){
        arr[i] = arr[i+d];
    }

    for(int i=n-d,j=0;i<n;i++,j++){
        arr[i] = tempArr[j];
    }

return;

}

//rotates array of size n by d elements
//using one temp variable
void arrRotation1(int arr[],int n,int d){
    int temp;

    for(int i=0;i<d;i++){
        temp = arr[0];

        for(int i=0;i<n-1;i++){
            arr[i] = arr[i+1];
        }

        arr[n-1] = temp;
    }

return;

}

//juggling algorithm of array rotation
int GCD(int n,int d){
    if(d==0){
        return n;
    }
    GCD(d,n%d);
}
void arrRotation2(int arr[],int n,int d){

    int temp;
    int f = GCD(n,d);

    for(int i=0;i<f;i++){
        temp = arr[i];
        int j=i;

        while(((j+d)%n)!= i){
            arr[j] = arr[(j+d)%n];
            j = j+d;
        }

        arr[j]=temp;


    }

return;

}

int main(){
    int arr[1000];
    int n,d;

    cin>>n>>d;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    arrRotation2(arr,n,d);

     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}
