#include<bits/stdc++.h>
using namespace std;
void dup(int *arr,int n){
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                flag=true;
                cout<<"array contains duplicate elements";
                return;
            }
        }
    }
    cout<<"no duplicates";
}
int main() {
    int d[]={2,4,6,5};
    int arr[]={3,4,6,6,8};
    dup(arr,5);
    
}