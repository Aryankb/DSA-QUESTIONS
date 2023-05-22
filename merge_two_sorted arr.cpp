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
    vector<int>nums1,nums2;
    vect_input(nums1,6);
    vect_input(nums2,5);
//    vect_output(nums1);
//    vect_output(nums2);
    int i=0,j=0,k=0;
    vector<int> nums3(11);
    while(i<6 || j<5){
        if(i==6){
        while(j<5){
            nums3[k]=nums2[j];
            
            j++;
        }
        }
    else if(j==5){
        while(i<6){
        nums3[k]=nums1[i];
        i++;    
        }
        }
        else if(nums2[j]<nums1[i]){
            nums3[k]=nums2[j];
            j++;
            

        }
        else{
            nums3[k]=nums1[i];
            i++;
            

        }
        k++;
    }
    
    vect_output(nums3);
}
