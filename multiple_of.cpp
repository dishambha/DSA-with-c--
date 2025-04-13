#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of Inputs:";
    int n;
    cin>>n;
    int arr[n] = {0};
    int ans[n] = {0};
    float answ = 0;

    cout<<"Enter the Limits : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        int last_term=0;
        int number_of_terms = 0;
        int currentlimit = arr[i]-1;   //10-1=9

        if(currentlimit%3 == 0) last_term = currentlimit;// 9%3 ==0  -> lt = 9
        else last_term = currentlimit - (currentlimit%3);
        number_of_terms = last_term/3;// n = 9/3 = 3
        answ += number_of_terms * (3 + last_term) / 2.0;  // 3 * (3+9)/2= 3 * 12/2 = 3*6 = 18

        if(currentlimit%5 == 0) last_term = currentlimit;// 9%5 != 0 
        else last_term = currentlimit - (currentlimit%5); //last term = 9 -(4) = 5
        number_of_terms = last_term/5;// n = 5/5 = 1
        answ += number_of_terms * (5 + last_term) / 2.0;  // 18 += 1*( 5+5)/2 = 18+5 = 23

        // Substracting the multiples of 15 because they are getting added twice. 
        if(currentlimit%15 == 0) last_term = currentlimit;
        else last_term = currentlimit - (currentlimit%15);
        number_of_terms = last_term/15;
        answ -= number_of_terms * (15 + last_term) / 2.0; 

        ans[i] = answ; 
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<endl;
    }
}