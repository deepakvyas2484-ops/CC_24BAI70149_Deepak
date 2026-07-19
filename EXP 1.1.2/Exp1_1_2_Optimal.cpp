#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int nums[n];
    int answer[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    answer[0] = 1;

    for(int i = 1; i < n; i++)
    {
        answer[i] = answer[i - 1] * nums[i - 1];
    }

    int right = 1;

    for(int i = n - 1; i >= 0; i--)
    {
        answer[i] = answer[i] * right;
        right = right * nums[i];
    }

    cout << "Output: ";
    for(int i = 0; i < n; i++)
    {
        cout << answer[i] << " ";
    }

    return 0;
}