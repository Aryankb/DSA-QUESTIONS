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
void swap(int &a,int &b){ 
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
    int n,i=0,j;
    cout<<"enter the size of vecor :";
    cin>>n;
    vect_input(v,n);
    j=n-1;
    while(i<j){
        if(v[i]==0)i++;
        if(v[j]==1)j--;
        else if(v[i]==1 && v[j]==0){    //this else if is important
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
    vect_output(v);
}
