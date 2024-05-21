//Prefix Sum
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
int prefixSum(int arr[],int n,int i)
{
    int sum = 0;
    for(int j = 0; j <= i;j++)
    {
          sum += arr[j];
    }
    return sum;
}
int main(){
int arr[] = {1,2,3,4,5,6,7,8};
int n = sizeof(arr)/sizeof(arr[0]);
cout << "Enter Index:";
int i;
cin >> i;
cout << "Prefix Sum for index " << i << " is " << prefixSum(arr,n,i);
return 0;
}