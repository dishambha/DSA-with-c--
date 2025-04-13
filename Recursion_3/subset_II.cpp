#include<iostream>
#include<string>
#include<vector>
using namespace std;
void StoreSubset(string ans, string original,vector<string>& v,bool flag){
    if(original==""){
        v.push_back(ans);
        return;
    }
    char ch = original[0];
    if(original.length()==1){
        if(flag==true) StoreSubset(ans+ch,original.substr(1),v,true);
        StoreSubset(ans,original.substr(1),v,true);
        return;  //taaki neeche ki 2 calls na chale.
    }
    char dh = original[1];
    if(ch==dh){
        if(flag == true) StoreSubset(ans+ch,original.substr(1),v,true);
        StoreSubset(ans,original.substr(1),v,false);
    }
    else{
        if(flag==true) StoreSubset(ans+ch,original.substr(1),v,true);
        StoreSubset(ans,original.substr(1),v,true);
    }
}
int main(){
    string str = "aaab";
    vector<string> v;
    StoreSubset("",str,v,true);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}