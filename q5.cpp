#include<iostream>
using namespace std;
int main(){
    int n=36;
    int lo=0;
    int hi=n;
    bool flag=false;
    while(hi>=lo){
        int mid=lo+(hi-lo)/2;
        if(mid*mid==n){
            flag=true;
            break;
        }
        else if(mid*mid<n) lo=mid+1;
        else hi=mid-1;
    }
    if(flag==true) cout<<1;
    else cout<<0;
}