#include <iostream>
#include <vector>
// #include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        vector<int> temp(len);
        for(int i = 0; i < len; i++) {
            temp[(i + k) % len] = nums[i];
        }
        nums = temp;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {1, 2, 3, 4, 5, 6, 7};
    int k1 = 3;
    sol.rotate(nums1, k1);
    cout << "Rotated array by " << k1 << " positions: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> nums2 = {-1, -100, 3, 99};
    int k2 = 2;
    sol.rotate(nums2, k2);
    cout << "Rotated array by " << k2 << " positions: ";
    for (int num : nums2) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> nums3 = {1, 2};
    int k3 = 3;
    sol.rotate(nums3, k3);
    cout << "Rotated array by " << k3 << " positions: ";
    for (int num : nums3) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
