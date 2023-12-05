#include<iostream>
using namespace std;
int main(){
   


 int arr[]={1,2,3,3,4,4,4,5};
    int n=8;
    int x=4;
    int idx=-1;
    int hi=n-1;
    int lo=0;
    while(hi>=lo){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            if(arr[mid+1]==x) lo=mid+1;
            else {
                idx=mid;
                break;
            }
        
        }
        else if(arr[mid]>x) hi=mid-1;
        else lo=mid+1;
    }
    cout<<idx;




}