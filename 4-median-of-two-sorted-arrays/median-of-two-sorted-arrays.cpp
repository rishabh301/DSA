#include<algorithm>
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums2.size();i++)
        {
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        if(nums1.size()%2==0)
        {
            int k=nums1.size()/2;
            double t=(nums1[k]+nums1[k-1])/2.0;
            return t;
        }
        else
        {
            int k=nums1.size()/2;
            return nums1[k] ;
        }
    }
};