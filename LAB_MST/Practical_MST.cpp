//problem 34

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1, last = -1;

        int low = 0, high = nums.size() - 1;

        // First occurrence
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                first = mid;
                high = mid - 1;
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        // Last occurrence
        low = 0;
        high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                last = mid;
                low = mid + 1;
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return {first, last};
    }
};

int main() {
    Solution obj;

    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    vector<int> result = obj.searchRange(nums, target);

    cout << result[0] << " " << result[1] << endl;

    return 0;
}