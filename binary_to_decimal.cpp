// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a Binary Number : ";
//     cin>>n;
//     int sum =0;
//     int c = 0;
//     while(n!=0){
//         int rer = n%10;
//         sum+=rer*pow(2,c);
//         c++;
//         n=n/10;
//     }
//     cout<<"Final ans is : "<<sum<<endl;
//     return 0;
// }
     //Important Operations
    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        string str = "101011";
        int n = str.length();
        int result  = 0;
        for(int i=n-1;i>=0;i--){
            char ch = str[i];
            int nums = ch-'0';
            result+=nums*(1 <<(n-i-1));
        }
        cout<<result<<endl;
        return 0;
    }