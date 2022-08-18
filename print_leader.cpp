#include <iostream>
using namespace std;

void print(int arr[],int s){
    int lidr;
    lidr=arr[s-1];
    cout<<lidr<<" ";
    for(int i=s-2;i>0;i--){
        if(lidr<arr[i]){
            lidr=arr[i];
            cout<<lidr<<" ";
        }
    }
}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    print(arr,n);
    return 0;
}