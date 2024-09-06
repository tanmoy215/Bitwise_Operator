// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//      int n;
//      cout<<"enter number : ";
//      cin>>n;
//       int sum =0;
//       int c = 0;
//      while(true){
//        if((1<<c) <= n){
//          sum = 1<<c;
//        }  
//        else{
//         break;
//        }
//        c++;
//      }
//      cout<<"Final ans is : "<<sum<<endl;
//     return 0;
// }

    //Brian kernighans algorithm

    #include<bits/stdc++.h>
    using namespace std;
    int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;
    int temp = 0;
    while(n>0){
      temp = n;
      n = n & (n-1);
    }
    cout<<"Final ans is : "<<temp<<endl;
        return 0;
    }