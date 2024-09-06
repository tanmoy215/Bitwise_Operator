#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2,1,3,6,3,2,1,9,8,0,8,0,6};
    int n = sizeof(arr)/sizeof(int);
     int result = 0;
     for(int i=0;i<n;i++){
        result = result ^ arr[i];
     }
     cout<<"Final ans is : "<<result<<endl;
    return 0;
}