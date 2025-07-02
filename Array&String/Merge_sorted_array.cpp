#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (j >= 0) {
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }
    }
};

int main() {
    int m, n;

    cout << "Enter the number of initialized elements in nums1 (m): ";
    cin >> m;
    cout << "Enter the number of elements in nums2 (n): ";
    cin >> n;

    vector<int> nums1(m + n); // Allocate space for merged array
    vector<int> nums2(n);

    cout << "Enter " << m << " elements of nums1 (in sorted order):\n";
    for (int i = 0; i < m; ++i) {
        cin >> nums1[i];
    }

    cout << "Enter " << n << " elements of nums2 (in sorted order):\n";
    for (int i = 0; i < n; ++i) {
        cin >> nums2[i];
    }

    Solution sol;
    sol.merge(nums1, m, nums2, n);

    cout << "Merged array:\n";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
