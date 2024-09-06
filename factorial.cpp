#include<bits/stdc++.h>
using namespace std;
vector<long long int> factorial(int n){
    vector<long long int> fact(n+1,1);
     long long mod = 1000000000 +7;
     for(int i=2;i<=n;i++){
        fact[i] = (i%mod * fact[i-1]%mod)%mod;
     }
     return fact;
}
int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;
    vector<long long int> res = factorial(n);
    for(int i=0;i<n;i++){
        cout<<i<<"! = "<<res[i]<<endl;
    }
    return 0;
}