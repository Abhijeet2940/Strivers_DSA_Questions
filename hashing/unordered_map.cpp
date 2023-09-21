// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// unordered_map<string ,int> m;
// m["gfg"]=20;
// m["ide"]=30;
// m.insert({"courses",153});
// for(auto it=m.begin(); it!= m.end();it++){
// cout<<(it->first)<<" "<<(it->second)<<endl;
// }
// return 0;
// }

//searching
#include<bits/stdc++.h>
using namespace std;
int main(){
unordered_map<string,int>m;
m["gfg"]=20;
m["ide"]=45;
m.insert({"courses",13});
if(m.find("ide")!=m.end())
cout<<"found \n";
return 0;
}