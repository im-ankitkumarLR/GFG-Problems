#include "/Users/ankitkumar/Downloads/razaa/stdc++.h"
using namespace std;

int main(){


    vector<int>v;

 cout<<"Enter the elements in the Vector"<<endl;
//  int size;
    for(int i=0;i<10;i++){

        v.push_back(i);
    }

    // cout<<"Size"<<v.size()<<endl;
 
 for (auto i=v.begin();i !=v.end();i++){

    cout<<*i<<" ";
 }
 
 }