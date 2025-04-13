#include<iostream>
#include<string>
using namespace std;
void printSubset(string ans, string original,int idx){
    if(idx==original.length()){
        cout<<ans<<endl;
        return;
    }
    char ch = original[idx];
    printSubset(ans,original,idx+1);
    printSubset(ans+ch,original,idx+1);
}
int main(){
    string str = "Vib";
    printSubset("",str,0);
    // for(string ele : v){
    //     cout<<ele<<" ";
    // }
}