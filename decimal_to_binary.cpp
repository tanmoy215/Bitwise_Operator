// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter value : ";
//     cin>>n;
//     int m = n%2;
//     int b = n/2;
//     vector<int> ans;
//     while(n!=0){
//         int rer = n%2;
//          ans.push_back(rer);
//         n/=2;
//     }
//   reverse(ans.begin(),ans.end());
//   for(int i : ans){
//     cout<<i<<" ";
//   }
//     return 0;
// }
            //bitwise Operation
        #include<bits/stdc++.h>
        using namespace std;
        int main(){
            int n;
            cout<<"enter Decimal Number : ";
            cin>>n;
            string str = "";
            while(n>0){
                if(n%2==0){
                        //even LSB
                        str = "0"+str;
                }
                else{
                    //odd LSB
                    str="1"+str;
                }
                n = n>>1;
            }
            cout<<"Binary form is :: "<<str<<endl;
        }