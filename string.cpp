#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
string s;
cout << "Enter string:";
cin >> s;
cout << s.length() << endl;
// reverse(s.begin(),s.end());
// cout << s << endl;
// sort(s.begin(),s.end());
// cout << s << endl;
cout << "Enter Addition:";
string a;
cin >> a;
s.append(a);
cout << s << endl;
s.replace(7,13,"Singhal");
cout << s << endl;
return 0;
}