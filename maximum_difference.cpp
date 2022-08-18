#include "bits/stdc++.h"
#include <iostream>
using namespace std;
int max_diff(int arr[],int n){
    int maxm=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int sum=arr[j]-arr[i];
            if(j>i){
                maxm=max(maxm,sum);
            }
            // cout<<maxm<<" "<<sum<<endl;
        }
    }
    return maxm;
}
int main(){
    cout<<"enter the number of testcases :-  0";
    int t;cin>>t;
    while(t--)
{    
    cout<<endl<<"enter the limit of the array :- ";int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"solution  "<<max_diff(arr,n)<<endl;}
    return 0;
}