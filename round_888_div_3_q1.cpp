// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s,a;
//     cin>>s;
//     sort(s.begin(),s.end());
//     int m=0;
//     vector<int>b;
//     int max=INT_MIN;
//     char c;
//     for(int i=0;i<s.size()-1;i++){
//         if(i==s.size()-2){
//                 for(int j=b.size()-1;j>=0;j--){
//                     if(max==b[j])cout<<a[j]<<" "<<max+1<<endl;
//                 }
//         }
//         if(s[i]==s[i+1]){
//             m++;
            
//                 if( m>=max && i==s.size()-2 )
//                 cout<<s[i]<<" "<<m+1;
//             }
        
//         else{
//             if( m>=max && i==s.size()-2 )
//                 cout<<s[i]<<" "<<m+1;
//             if(max<=m){a.push_back(s[i]);b.push_back(m);max=m;}
            
//             m=0;
//         }
//     }
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int m=0;
    int a[26];
    int max=INT_MIN;
    for(int i=0;i<s.size()-1;i++){
        
        if(s[i]==s[i+1]){
            m++;
            if(m>=max && i==s.size()-2)a[(int)s[i]-97]=m;
                
            }
        
        else{
           
            if(max<=m){a[(int)s[i]-97]=m;max=m;}
            
            m=0;
        }
    }
    
                for(int j=0;j<26;j++){
                    if(max==a[j])cout<<(char)(j+97)<<" "<<max+1<<endl;
                }
        
}