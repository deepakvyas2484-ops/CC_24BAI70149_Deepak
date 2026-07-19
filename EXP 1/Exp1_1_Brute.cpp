#include <iostream>
using namespace std;

bool containsNearbyDuplicate(int nums[], int n, int k)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(nums[i] == nums[j] && j - i <= k)
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    int n, k;

    cout << "Enter size of array: ";
    cin >> n;

    int nums[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << "Enter value of k: ";
    cin >> k;

    if(containsNearbyDuplicate(nums, n, k))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}