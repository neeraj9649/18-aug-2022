#include <iostream>
using namespace std;
class st{
    public:
    float c,total;
    char name[20];
    int marks[5];
    void getname();
    void getmarks();
    void print();
    void tota();
    void intl();
    void per();
};
void st::intl(){c=0;total=0;}
void st:: getname(){
    cout<<"enter name :- ";cin>>name;
}
void st:: getmarks(){
    cout<<endl<<"taking marks"<<endl;
    for(int i=0;i<5;i++){
        cin>>marks[i];
        total+=marks[i];
    }
}
void st::tota(){cout<<endl<<"total marks :- "<<total;}
void st:: print(){
    cout<<"printing marks "<<endl;
    for(int i=0;i<5;i++){
        cout<<marks[i]<<" ";
    }
}
void st:: per(){
    float perc=total/5;
    cout<<endl<<"percentage :- "<<perc;
}
int main(){
    st neer;
    neer.getname();
    neer.intl();
    neer.getmarks();
    neer.print();
    neer.tota();
    neer.per();
    return 0;
}