#include<iostream>
#include<string>
using namespace std;
string getPermutation(string str, int k , string ans){
    int n = str.length();
    if(n==1){
        ans += str;
        return ans;
    }
    int fact = 1;
    for(int i=2;i<=n-1;i++){
        fact *=i;
    }
    int idx = k/fact;
    if(k%fact == 0) idx--;
    char ch = str[idx];
    string left = str.substr(0,idx);
    string right = str.substr(idx+1);
    int q = 1;
    if(k%fact == 0)  q= fact;
    else q = k - (fact*idx);
    return getPermutation(left+right, q, ans +ch);
}
int main(){
    string str = "1234";
    cout<<getPermutation(str, 18, "");
}