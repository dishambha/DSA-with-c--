#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s= "AZYZXBYDXJK";
    string str = "";
    for(int i=0;i<s.size();i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }
    int n = str.length();
    for(int i=0;i<n-1;i++){
        bool flag = true;
        for(int j=0;j<n-1-i;j++){
            if(str[j]>str[j+1]){
                swap(str[j],str[j+1]);
                flag = false;
            }
        }
        if(flag == true){
            break;
        }
    }
    int m = str.length();
    for(int i=m-1;i>=0;i--){
        cout<<str[i];
    }
}