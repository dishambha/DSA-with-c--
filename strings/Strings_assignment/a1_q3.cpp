#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    int i = 0;
    int j=str.length()-1;
    while(i<j){
        if(str[i]==str[j]){
            i++;
            j--;
        }
        else{
            cout<<"NO";
            break;
        }
    }
    cout<<"YES";
}