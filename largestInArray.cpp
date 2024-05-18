//Calculating Largest,Second Largest And Median of The Array Elements
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

pair<int,int> maxAndSecondMax(int arr[],int n)
{
    int max = INT_MIN;
    int second = -1;
    if(n == 1)
    {
        return {arr[0],0};
    }
    for(int i = 0;i < n;i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
        if(arr[i] < max && arr[i] > second)
        {
            second = arr[i];
        }
    }
    return {max,second};
}
int main()
{
    int n;
    cout << "Enter Size of Array:";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter Elements in Array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    pair<int,int> maxAndSecMax = maxAndSecondMax(arr,n);
    cout << "The Maximum Element in Array is " << maxAndSecMax.first << endl;
    cout << "The Second Largest Element in Array is " << maxAndSecMax.second << endl;
    sort(arr,arr+n);
    float median = (n%2 == 0) ? ((arr[n/2-1]+arr[n/2])/2.0) : (arr[n/2]);
    cout << "The Median of the Array is " << median << endl;
    return 0;
}