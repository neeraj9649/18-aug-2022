#include <iostream>
using namespace std;
int main()
{
    int arr[]={0,0,0,1,2,0,3};
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){
        for(int j=1;j<size;j++){
            if(arr[j-1]==0){
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    // cout<<size<<endl;
    return 0;
}