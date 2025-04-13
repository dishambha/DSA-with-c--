 #include<iostream>
 using namespace std;
    int symbol(int n , int k){
    if(n==1) return 0;
    if(k%2==0){
        int prevAns = symbol(n-1,k/2);
        if(prevAns==0) return 1;
        else return 0;
    }
    else {
        int prevAns = symbol(n-1,(k/2)+1);
        return prevAns;
    }
 }
 int main(){
    int n = 5;
    int k = 1;
    cout<<symbol(n,k);
 }