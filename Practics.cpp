#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cout<<"enter Decimal Number : ";
   cin>>n;
    int count = 0;
    while(n>0){
        count++;
        n = (n & (n-1));
    }
    cout<<"Final ans is : "<<count<<endl;
    return 0;
}