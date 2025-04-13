#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str = "123456";
    int x = stoi(str);
    cout<<x+1<<endl;

    string str1 = "123456878532";
    long long y = stoll(str1);
    cout<<y+1;
}
