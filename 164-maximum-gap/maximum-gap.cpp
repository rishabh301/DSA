class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()<2)
        {
            return 0;
        }
        else
        {
            int maxx = 0;
            for(int i=0;i<nums.size()-1;i++)
            {
                if(nums[i+1]-nums[i]>maxx)
                {
                    maxx=nums[i+1]-nums[i];
                }
            }
            return maxx;
        }
        return 0;
    }
};