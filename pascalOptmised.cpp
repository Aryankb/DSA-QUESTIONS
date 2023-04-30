#include<iostream>
using namespace std;
int main(){
    int n,prev;
    cout<<"Enter the no of rows :";
    cin>>n;
    for(int i=0;i<=n-1;i++){
        prev=1;
        cout<<prev<<" ";
        for(int j=1;j<=i;j++){
            cout<<prev*(i-j+1)/j<<" ";
            prev=prev*(i-j+1)/j;
        }
        cout<<endl;
    }
}

// no need to take anything as float
//no need to calculate factorials-time complexity
