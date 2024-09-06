#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {3,2,3,5,7,9,0};
    int n = sizeof(arr)/sizeof(int);
    int m = arr[0];
    int idx = -1;
    for(int i =1;i<n;i++){
      if(m<arr[i]){
        m = arr[i];
        idx = i;
      }
    }
    int j=idx+1;
    int i = idx;
    while(true){
        if(arr[j]==m){
            j++;
        }
        else{
            break;
        }
    }
    cout<<idx<<endl;
    cout<<(j-i)<<endl;
    return 0;
}