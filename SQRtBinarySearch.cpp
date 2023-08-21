#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int l=0, h=n,f=1;
    while(h>=l){
        int m= l + (h-l)/2;
        if(m*m==n){cout<<m;f=0;break;}
        else if(m*m<n)l=m+1;
        else h=m-1;
    }
    if(f==1)cout<<h;


}