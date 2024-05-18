#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int fib(int n)
{
    if(n == 0 || n == 1)
    {
        return n;
    }
    return fib(n-1) + fib(n-2);
}
int main(){
int n;
cout << "Enter Posistion:";
cin >> n;
cout << "The Fibonacci Number at "<< n << "th Position is " << fib(n-1) << endl;
return 0;
}