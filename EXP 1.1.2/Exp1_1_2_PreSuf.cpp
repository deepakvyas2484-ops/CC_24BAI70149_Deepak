#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int nums[n];
    int prefix[n];
    int suffix[n];
    int answer[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    prefix[0] = 1;

    for(int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }

    suffix[n - 1] = 1;

    for(int i = n - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }

    for(int i = 0; i < n; i++)
    {
        answer[i] = prefix[i] * suffix[i];
    }

    cout << "Output: ";
    for(int i = 0; i < n; i++)
    {
        cout << answer[i] << " ";
    }

    return 0;
}