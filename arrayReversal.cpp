#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{
    int i = 0;
    for (int i = 0; i <= (n / 2.0) - 1; i++)
    {
        swap(arr[i], arr[n - 1 - i]);
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
    int n;
    cout << "Enter Size of Array:";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter Elements in Array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Before Reversal:";
    print(arr, n);
    reverse(arr, n);
    cout << "After Reversal:";
    print(arr, n);
    return 0;
}