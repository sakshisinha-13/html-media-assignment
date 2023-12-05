#include<iostream>
using namespace std;
int main(){
    int n=13;
    int lo=1;
    int hi=n;
    while(hi>=lo){
        int k=lo+(hi-lo)/2;
        int m=k*(k+1)/2;
        if(m==n) return k;
        else if(m>n) hi=k-1;
        else lo=k+1;
    }
    cout<< hi;
    
}