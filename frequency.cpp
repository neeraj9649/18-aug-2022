#include <iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--)
    {int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int c=1;
        
            if(arr[i]!=0){for(int j=1;j<n;j++){
            if(arr[j]==arr[i] && i!=j){
                c++;
                arr[j]=0;
            }
            }
            cout<<arr[i]<<" "<<c<<endl;
            }        
    }}
    return 0;
}