#include<iostream>
using namespace std;
int main(){
    long n1,n2;
    cin>>n1>>n2;
    if(n2>n1){
        long temp = n2;
        n2=n1;
        n1 = temp;
    }
    long r = n1%n2;
    while(r!=0){
        n1=n2;
        n2=r;
        r = n1%n2;
    }

    cout<<n2;

return 0;

}
