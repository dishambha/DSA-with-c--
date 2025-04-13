#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;  // size not to be mentioned.
    //incerting /input do not use []
    v.push_back(6);
    cout<<"capacity "<<v.capacity()<<endl;
    cout<<"size "<<v.size()<<endl;
    v.push_back(5);
    cout<<"capacity "<<v.capacity()<<endl;
    cout<<"size "<<v.size()<<endl;
    v.push_back(4);
    cout<<"capacity "<<v.capacity()<<endl;
    cout<<"size "<<v.size()<<endl;
    v.push_back(3);
    cout<<"capacity "<<v.capacity()<<endl;
    cout<<"size "<<v.size()<<endl;
    v.push_back(2);
    cout<<"capacity "<<v.capacity()<<endl;
    cout<<"size "<<v.size()<<endl;
    v.push_back(1);
    cout<<"capacity "<<v.capacity()<<endl;
    cout<<"size "<<v.size()<<endl;

    // if you want to update / access
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
    cout<<v[4]<<" ";
    cout<<v[5]<<" "<<endl;
    v.pop_back();
    v.pop_back();
    cout<<"capacity "<<v.capacity()<<endl;
    cout<<"size "<<v.size()<<endl;
    for(int i=0;i<=v.size();i++){
        cout<<v[i]<<" ";
    }
    

}