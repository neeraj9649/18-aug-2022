#include <iostream>
using namespace std;
int main(){
    int t;cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    int c=0,sum=0;
    for(int i=0;i<t;i++){
        if(arr[i]==1){c++;}
        else{sum=max(sum,c);c=0;}
    }
    sum=max(sum,c);
    cout<<sum<<endl;
    return 0;
}