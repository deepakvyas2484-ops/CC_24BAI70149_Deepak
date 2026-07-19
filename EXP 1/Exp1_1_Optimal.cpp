#include <iostream>
#include <unordered_set>
using namespace std;

bool containsNearbyDuplicate(int nums[], int n, int k)
{
    unordered_set<int> s;

    for(int i = 0; i < n; i++)
    {
        if(s.find(nums[i]) != s.end())
        {
            return true;
        }

        s.insert(nums[i]);

        if(i >= k)
        {
            s.erase(nums[i - k]);
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