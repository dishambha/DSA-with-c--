#include<iostream>
using namespace std;
int main(){
    long long x;
    cout<<"Enter the number to check : ";
    cin>>x;
    
    int lo = 0;
    int hi = (int)x;
    bool flag = false;
    while(lo<=hi){
        long long mid = lo+(hi-lo)/2;
        if(mid*mid == x ){
            flag = true;
            cout<<x<<" is a perfect square of "<<mid;
            break;
        }
        else if(mid*mid > x){
            hi = mid-1;
        }
        else{
            lo = mid+1;
        }
    }
    if(flag==false) cout<<"The given number is not a perfect square." ;
}