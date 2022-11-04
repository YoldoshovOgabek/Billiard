#include <bits/stdc++.h>
using namespace std;

int getNumCount(int arr[], int n)
{
    int counter = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
                counter++;

    return counter;
}

int main()
{
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++) cin>>arr[i];
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << getNumCount(arr, n);
    return 0;
}
