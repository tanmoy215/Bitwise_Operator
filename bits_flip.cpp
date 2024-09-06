#include<bits/stdc++.h>
using namespace std;
int fun(int n){
    int temp =0;
    while(n>0){
        temp = n;
        n = n & (n-1);
    }
    return (temp*2)-1; //(temp<<1)-1
}
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    int temp = fun(n);
    int ans = n ^ temp;
    cout<<"Final ans is : "<<ans<<endl;
    return 0;
}