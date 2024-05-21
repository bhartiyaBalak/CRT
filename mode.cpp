#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int mode(int arr[],int n)
{
     unordered_map<int,int> m;
     int maxi = 0;
     int maxEle = 0;
     for(int i = 0;i < n;i++)
     { 
         m[arr[i]]++;
        if(m[arr[i]] > maxi)
        {
            maxi = m[arr[i]];
            maxEle = arr[i];
        }
     }
    //  for(auto it:m)
    //  {
    //     if(it.second == maxi)
    //     {
    //         return it.first;
    //     }
    //  }
     return maxEle;
}

int main(){
int n;
cout << "Enter size of Array:";
cin>>n;
int *arr = new int[n];
cout << "Enter Element in Array:";
for(int i = 0;i < n;i++)
{
    cin>>arr[i];
}
int highestFrequent = mode(arr,n);
cout << "The Mode of Array is " << highestFrequent << endl;
return 0;
}