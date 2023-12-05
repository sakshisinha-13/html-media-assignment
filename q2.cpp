#include<iostream>
using namespace std;
int main(){
int arr[]={0,0,0,0,1,1};
int n=6;
int hi=n-1;
int lo=0;
int count=0;
while(hi>=lo){
    int mid=lo+(hi-lo)/2;
    if(arr[mid]==1) {
       if(arr[mid-1] != 1) {
        count++;
       
       }
       else{
        hi=mid-1;
       }
      if(arr[mid+1] != 1) break;
    lo=mid+1;
    }
     else if(arr[mid]<1) lo=mid+1;
     else hi=mid-1;
}
cout<<count;
}