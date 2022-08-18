#include "bits/stdc++.h"
#include<iostream>
using namespace std;
#define ll long long int
class student{
   private:
   ll mobile_no;
   public:
   string name;
   ll roll;
   void getdata(string name1, ll mob ,ll rol){
      name=name1;
      mobile_no=mob;
      roll=rol;
   }
   void check_data(){
      cout<<name<<" "<<roll<<" "<<mobile_no<<endl;
   }
};
int main(){
   // int t;cin>>t;
   student neeraj;
   student jaswant;
   student ankita;
   student anshul;
   neeraj.getdata("neeraj",9649863213,1);
   jaswant.getdata("jaswant",9024341098,2);
   ankita.getdata("ankita",1234567897,3);
   anshul.getdata("anshul",1234567897,4);

   neeraj.check_data();
   jaswant.check_data();
   ankita.check_data();
   anshul.check_data();
   return 0;
} 