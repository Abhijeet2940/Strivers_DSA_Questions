#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(12);
    s.insert(13);
    s.insert(15);
    s.insert(290);
    for(auto x=s.begin();x !=s.end();x++){
        cout<< *x<<" ";
        cout<<endl;}
        cout<<s.size()<<" ";
    
s.clear();
cout<<s.size();
return 0;
}