#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
int main() {
    int s[]={2,4,6,5};
    int max1=INT_MIN;
    int max2=INT_MIN;
    for(int i=0;i<6;i++){
        if(s[i]>max1){
            max2=max1;
            max1=s[i];
        }
        else if(s[i]>max2 && s[i]<max1) max2=s[i];
    }
    cout<<max1<<endl<<max2;
}