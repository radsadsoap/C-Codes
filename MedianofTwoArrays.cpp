#include <algorithm>
#include <vector>
#include<iostream>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> s;
        int n = nums1.size();
        int m = nums2.size();
        for(int i = 0; i < n; i++)
            s.push_back(nums1[i]);
        
        for(int i = 0; i < m; i++)
            s.push_back(nums2[i]);

        sort(s.begin(), s.end());
        int x = s.size();

        if(x % 2 != 0)
            return (double)s[x/2];
        else
            return (double)(s[(x - 1)/2] + s[x/2])/2.0;
    }
};

int main(void){

    Solution arr;

    vector<int> nums1 = {1,3,4};
    vector<int> nums2 = {2,5};
    cout << arr.findMedianSortedArrays(nums1, nums2);

}