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

    for(int i = 0; i < n; i++)
    {
        int product = 1;

        for(int j = 0; j < n; j++)
        {
            if(i != j)
            {
                product = product * nums[j];
            }
        }

        answer[i] = product;
    }

    cout << "Output: ";
    for(int i = 0; i < n; i++)
    {
        cout << answer[i] << " ";
    }

    return 0;
}