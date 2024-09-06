// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter Integer number : ";
//     cin>>n;
//     int count = 0;
//     while(n>0){
//         if(n%2!=0){
//             count++;
//         }
        
//         n=n>>1;
//     }
//     cout<<count<<endl<<__builtin_popcount(12);   //__builtin_popcount(val) another important method for count set bits of an integer number
//     return 0;
// }

   ///bitwise Operations
   #include<bits/stdc++.h>
   using namespace std;
   int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;
    int count = 0;
    while(n>0){
        count++;
        n = (n & (n-1));
    }
    cout<<"Final ans is : "<<count<<endl;
    return 0;
   }