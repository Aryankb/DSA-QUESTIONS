#include<bits/stdc++.h>
using namespace std;
void vect_input(vector<int>&a,int n){
    cout<<"enter elements :"<<endl;
    for(int i=0;i<n;i++){
        int e;
        cin>>e;
        a.push_back(e);
    }
}
void vect_output(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
void swap(int &a,int &b){   //IF A==B THEN DONT PERFORM SWAP. IT TAKES 0
    if(a==b){
        return;
    }
    else{
    a=a+b;
    b=a-b;
    a=a-b;
    }
}
void vect_rev(vector<int>&a){
    for(int i=0;i<a.size()/2;i++){
        swap(a[i],a[a.size()-i-1]);
    }
}
void vect_rev_part(vector<int>&a,int x,int y){
    if(x>=a.size() || y>=a.size())return;
    else{
    for(int i=min(x,y),j=0;i<=(max(x,y)+min(x,y))/2;i++,j++){
        swap(a[i],a[max(x,y)-j]);
    }
    }
}
int main(){
    vector<int>v;
    int n,k;
    cout<<"enter the size of vecor :";
    cin>>n;
    cout<<"enter k:";
    cin>>k;
    vect_input(v,n);
    k=k%v.size();
    vect_rev_part(v,0,n-k-1);
    vect_rev_part(v,n-k,n-1);
    vect_rev(v);
    vect_output(v);
}
