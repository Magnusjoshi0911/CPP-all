#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
int main()
{
char str[]="I love my self";
vector<char>v,v2(30);
int i;
for(i=0;str[i];i++)
{
v.push_back(str[i]);
}
cout<<"input swquence:\n";
for(i=0;i<v.size();i++)
{
cout<<v[i];
}
cout<<endl;
replace_copy(v.begin(),v.end(),v2.begin(),'I','U');
cout<<"result after removing spaces:\n";
for(i=0;i<v2.size();i++)
{
cout<<v2[i];

}
cout<<endl<<endl;
return 0;

}