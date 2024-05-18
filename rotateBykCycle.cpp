#include <bits/stdc++.h>
using namespace std;

void rotateByk(int arr[], int n, int k)
{
    int cycles = __gcd(n,k);
    for(int i = 0;i < cycles;i++)
    {
          int ele = arr[i];
          int j = 0;
          do
          {
              arr[(i+j*k)%n] = arr[(i+(j+1)*k)%n];
              j++;
          }while((i+((j+1)*k) % n) != i);
         arr[(i+(j*k))%n] = ele;
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n, k;
    cout << "Enter Size of Array:";
    cin >> n;
    cout << "Enter Rotation Order:";
    cin >> k;
    int *arr = new int[n];
    cout << "Enter Elements in Array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Before Rotation:";
    print(arr, n);
    rotateByk(arr, n, k);
    cout << "After Rotation:";
    print(arr, n);
    return 0;
}