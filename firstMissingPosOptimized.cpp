#include<iostream>
using namespace std;
int main(){
    int a[]={0,1,2,3,4,5,6,7};
    int l=0,h=7,ans=-1;
    while(h>=l){
        int m=(h+l)/2;
        if(a[m]==m)l=m+1;
        else {
            ans=m;
            h=m-1;
        }
    }
    cout<<ans;
}