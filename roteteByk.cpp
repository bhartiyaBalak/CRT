//Double Reversal
#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int i, int j)
{
    while(i <= j)
    {
        swap(arr[i], arr[j]);
        j--;
        i++;
    }
}

void rotateByk(int arr[], int n, int k)
{
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    reverse(arr, 0, n - 1);
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