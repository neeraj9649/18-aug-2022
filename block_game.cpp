#include <iostream>
using namespace std;
#include <string.h>
bool check(string n,int s){
    for(int i=0;i<s/2;i++){
        if(n[i]!=n[s-(i+1)]){return false;break;}
    }
    return true;
}
int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    string n;cin>>n;
	    int s=n.length();
        if(check(n,s)){
            cout<<"WIN"<<endl;
        }
        else{cout<<"LOOSE"<<endl;}
        
	}
	return 0;
}
