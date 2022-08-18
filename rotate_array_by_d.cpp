#include <iostream>
using namespace std;
int main()
{
    int n,d;cin>>n>>d;
    int ar[n];
    int arr[d];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    for(int i=0;i<d;i++){
        arr[i]=ar[i];
    }
    // for(int i=0;i<d;i++){
    //     cout<<arr[i];
    // }
    
    for(int i=0;i<d;i++){
        for(int j=1;j<n;j++){
            ar[j-1]=ar[j];
        }
    }
    for(int i=0;i<n;i++){
        cout<<ar[i]<<"  "  ;
    }
    cout<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<ar[i];
    // }
    int p=0;
    for(int i=d+1;i<n;i++){
        ar[i]=arr[p];
        p++;
    }
    cout<<endl;

    return 0;
}
