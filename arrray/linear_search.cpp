/*   LINEAR SEARCH
Q) Find the element x in the array. Take array and x as input.
*/
#include<iostream>
using namespace std;
int main(){
    int n ,x;
    cout<<"Enter the length of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element you want to check: ";
    cin>>x;

    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i]==x){
         cout<<"YES,the element is present in the array.👍";
        break;
        }
        else {
            cout<<"N0,the element is not present in tne array 👎 ";
            break;
    }
    }
    return 0;
}