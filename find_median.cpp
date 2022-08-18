#include <iostream>
#include <vector>
using namespace std;
int main(){
    int s;cin>>s;
    int arr1[s];
    for(int i=0;i<s;i++){cin>>arr1[i];}
    int s2;cin>>s2;
    int arr2[s2];
    for(int i=0;i<s2;i++){cin>>arr2[i];}
    vector<int> num;
    if(arr1[0]>arr2[0]){
        for(int i=0;i<s2;i++){
            num.push_back(arr2[i]);
        }
        for(int j=0;j<s;j++){
            num.push_back(arr1[j]);
        }
    }
    else{
        for(int i=0;i<s;i++){
            num.push_back(arr1[i]);
        }
        for(int j=0;j<s2;j++){
            num.push_back(arr2[j]);
        }
    }
        for(int p=0;p<(s+s2);p++){
            cout<<num[p]<<" ";
        }
    int sum=s+s2;
    if(sum%2!=0){cout<<endl<<num[sum/2];}
    else{
        cout<<endl<<float(num[sum/2]+num[(sum/2)-1])/2;
    }
    return 0;
}