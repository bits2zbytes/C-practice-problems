#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;

    int a = 0;   // 0th fibonacci
    int b = 1;  //1st fibonacci
    int c  = 0; //sum of a and b

    while (a <= N) {

        c = a + b;

        cout<<a<<endl;
        a = b;
        b = c;
    }
return 0;
}
