#include <iostream>
#include <unordered_map>
using namespace std;

bool containsNearbyDuplicate(int nums[], int n, int k)
{
    unordered_map<int, int> mp;

    for(int i = 0; i < n; i++)
    {
        if(mp.find(nums[i]) != mp.end())
        {
            if(i - mp[nums[i]] <= k)
            {
                return true;
            }
        }

        mp[nums[i]] = i;
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