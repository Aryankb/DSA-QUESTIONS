#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=n;i>0;i--){
        int f=0;
        for(int j=0;j<i-1;j++){
            if(a[j]>a[j+1]){
                f=1;
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
        if(f==0)break;
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}
