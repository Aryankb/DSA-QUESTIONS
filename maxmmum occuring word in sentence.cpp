

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,temp;
    getline(cin,s);
    stringstream ss(s);
    vector<string>v;
    while(ss>>temp){
        v.push_back(temp);

    }
    sort(v.begin(),v.end());
    int m=INT_MIN,c=1;
    for(int i=0;i<v.size();i++){
        if(v[i]==v[i+1])c++;
        else {c=1;}
        m=max(m,c);
    }
    c=1;    
    for(int i=0;i<v.size();i++){
        
        if(v[i]==v[i+1])c++;
        else c=1;
        if(c==m)cout<<v[i]<<" "<<m<<endl;
    }
    
}
