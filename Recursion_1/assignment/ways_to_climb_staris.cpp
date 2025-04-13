#include<iostream>
using namespace std;
int Ways(int n){
    if(n<0) return 0;
    if(n==0) return 1;
    return Ways(n-1) + Ways(n-2) + Ways(n-3);
}
int main(){
    int n;
    cout<<"Enter the number of stairs: ";
    cin>>n;
    cout<<Ways(n);
}


// #include <bits/stdc++.h>
// using namespace std;
// int findNumberOfWays(int n) {
// if(n < 0) return 0;
// if(n == 0)return 1;
// return findNumberOfWays(n-1) + findNumberOfWays(n-2) + findNumberOfWays(n-3);
// }
// int main() {
// int n;
// cin >> n;
// cout << findNumberOfWays(n) << endl;
// return 0;
// }