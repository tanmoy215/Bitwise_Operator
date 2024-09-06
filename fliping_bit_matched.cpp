#include<bits/stdc++.h>
using namespace std;
string fun(string s, int n){
    while(n>0){
        if(n%2==0){
            s+='0';
        }
        else{
            s+='1';
        }
        n = n>>1;
    }
    return s;
}
int main(){
    int n,m;
    cout<<"enter two number : ";
    cin>>n>>m;
    string  str = "";
    int count =0;
     while(n>0 && m>0){
        if(fun(str,n)!=fun(str,m)){
            count++;
        }
        n = n>>1;
        m=m>>1;
     }
     cout<<"Final ans is : "<<count<<endl;
    return 0;
}