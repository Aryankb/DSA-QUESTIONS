#include<iostream>
using namespace std;
int main(){
    int n,prev,curr;
    cout<<"Enter the no of rows :";
    cin>>n;
    for(int i=0;i<=n-1;i++){
        prev=1;
        cout<<prev<<" ";
        for(float j=1;j<=i;j++){
            curr=prev*((i-j+1)/(j));
            cout<<curr<<" ";
            prev=curr;
        }
        cout<<endl;
    }
}

// took only j as float-space complexity
//no need to calculate factorials-time complexity