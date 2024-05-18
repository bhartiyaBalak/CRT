#include <bits/stdc++.h>
using namespace std;

void rotateBy1(int arr[], int n)
{
    int i = 0;
    int element = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = element;
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
    int n;
    cout << "Enter Size of Array:";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter Elements in Array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Before Rotation:";
    print(arr, n);
    rotateBy1(arr, n);
    cout << "After Rotation:";
    print(arr, n);
    return 0;
}