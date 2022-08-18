// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
void create() { cout << "create"; }
int search(vector<int> num, int s, int f)
{
    for (int i = 0; i < s; i++)
    {
        if (num[i] == f)
        {
            return i;
        }
    }
    return -1;
}
void delet() { cout << "create"; }
void prin(vector<int> num, int s)
{
    cout << endl
         << "printing elements of array" << endl;
    for (int i = 0; i < s; i++)
    {
        cout << num[i] << " ";
    }
}
int main()
{
    // declaring veriable to store size of array
    int s;
    // define a vector to store value
    vector<int> num;
    // declaring variable which take choice of user
    int choice;
start:
    cout << endl
         << "press 1 for create array";
second:
    cout << endl
         << "press 2 for search element";
    cout << endl
         << "press 3 for insert element"
         << endl
         << "press 4 for delete element"
         << endl
         << "press 5 for print"
         << endl
         << "press 6 for go to main menu"
         << endl
         << "press 7 for EXIT" << endl;
    //    taking choice input
    cin >> choice;
    if (choice == 1)
    {
        //  taking size of array
        cout << "enter the size of array :- ";
        cin >> s;
        // cout<<s;
        // declaring array of size s

        // // taking elements of array using for loop
        for (int i = 0; i < s; i++)
        {
            // define a veriale n to take value of different element
            int n;
            cin >> n;
            num.push_back(n);
        }
        goto second;
    }
    // cout<<s;
    // writing switch case statement to call different function
    // according to choice
    switch (choice)
    {
    case 2:
        // taking the element which you want to search
        int find;
        cout << "enter the element which you want to search:- ";
        cin >> find;
        // declaring an temprory veriable to store the index of element
        int ind;
        ind = search(num, s, find);
        if (ind != -1)
        {
            cout << "element found at " << ind << " index" << endl;
        }
        else
        {
            cout << endl
                 << "sorry!!!!" << endl
                 << "element not found" << endl;
        }
        goto second;
        break;

    case 3:
        cout << "enter the element which you want to insert :- ";
        int ele;
        cin >> ele;
        num.push_back(ele);
        s++;
        goto second;
        break;
    case 4:
        cout<<"enter the element which you want to delete : - ";
        int nm;cin>>nm;
        int indz;
        indz=search(num,s,nm);
        for(int i=indz;i<s-1;i++){
            num[i]=num[i+1];
        }
        s--;
        goto second;
        break;
    case 5:
        prin(num, s);
        goto second;
        break;
    case 6:
        goto start;
    case 7:
    cout<<endl<<"THENK'S for using NEERAJ's PROGRAME"<<endl;
    break;
    }
    return 0;
}