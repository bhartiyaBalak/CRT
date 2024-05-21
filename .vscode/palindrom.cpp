#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
bool isPalindrom(string s,int i,int j)
{
    if(i >= j)
    {
        return true;
    }
    if(s[i] == s[j])
    {
      i++;
      j--;
      return isPalindrom(s,i,j);
    }
    else
    {
        return false;
    }
}
int main(){
string w;
cout << "Enter String:";
cin >> w;
if(isPalindrom(w,0,w.length()-1))
{
    cout << "The string " << w << " is a Palindrom." << endl;
}
else{
    cout << "The string " << w << " is not a Palindrom." << endl;
}
return 0;
}