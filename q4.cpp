#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,5,6,7};
    int n=8;
    int lo=0;
    int hi=n-1;
    while(hi>=lo){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==arr[mid-1]){
            cout<<arr[mid];
            break;
        }
        lo++;
    }

}