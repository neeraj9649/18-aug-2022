#include <iostream>
using namespace std;
int main(){
    int t;cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    for(int i=0;i<t;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int m=0,res=arr[0];
    for(int i=0;i<t-1;i++){
        m=max((m+arr[i]),arr[i]);
        res=max(m,res);
        // cout<<m<<endl;
    }
    cout<<m<<res<<endl;
    // cout<<
    return 0;
}
