#include<bits/stdc++.h>
using namespace std;
void findunique(int *arr, int n){
     int res =0;
     for(int i=0;i<n;i++){
        res^=arr[i];
     }
      int temp =res;
      int k = 0;
      while(true){
        if((temp & 1) == 1){
            break;
        }
        k++;
        temp = temp>>1;
      }                                     //Using bit manupulation 
      int retval = 0;
      for(int i=0;i<n;i++){
        int nums = arr[i];
        if(((nums >> k) & 1)==1){
            retval^=nums;
        }
      }
      cout<<retval<<endl;
      res = retval ^ res;
      cout<<res<<endl;
}
int main(){
    int arr[] = {2,1,4,3,4,3,7,6,7,2,1,10};
    int n = sizeof(arr)/sizeof(arr[0]);
     findunique(arr,n);
    return 0;
}