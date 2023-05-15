#include <iostream>
using namespace std;
int main(){
/*string str1, str2;
getline(cin,str1);
getline(cin,str2);
cout<<str1<<endl;
cout<<str2<<endl;*/

/*int t;
cin>>t;
while(t--){
string s;
getline(cin,s);
cout<<s<<endl;}*/
//to print reverse of a string...

string str;
cin>>str;
string str_rev;
/*for (int i=str.size()-1; i >=0;--i)
{
    str_rev = str_rev + str[i];

}
cout<<str_rev<<endl;*/

for (int i=str.size()-1; i >=0;--i)
{
    str_rev.push_back(str[i]);

}
cout<<str_rev<<endl;
if (str == str_rev){cout<<"yes";}
else{cout<<"no";}


return 0;
}