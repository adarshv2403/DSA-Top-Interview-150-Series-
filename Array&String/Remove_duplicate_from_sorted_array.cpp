#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int j = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements (in sorted order):\n";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    Solution sol;
    int newLength = sol.removeDuplicates(nums);

    cout << "Array after removing duplicates:\n";
    for (int i = 0; i < newLength; ++i) {
        cout << nums[i] << " ";
    }
    cout << "\nNew length: " << newLength << endl;

    return 0;
}
