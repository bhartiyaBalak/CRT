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
cout << "Enter Number:";
cin >> n;
cout << "The Fibonacci Number for position " << n << " is " << fib(n) << endl;
return 0;
}