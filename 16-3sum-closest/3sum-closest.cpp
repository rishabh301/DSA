class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans = INT_MAX;
        int min_diff = INT_MAX;
        
        for(int i=0;i<nums.size()-2;i++)
        {
            int f = nums[i];
            int l = i+1;
            int r = nums.size()-1;

            while(l<r)
            {
                int sum = f+nums[l]+nums[r];
                if(sum==target)
                {
                    return sum;
                }
                else
                {
                    int diff = abs(target-sum);
                    if(diff<min_diff)
                    {
                        min_diff=diff;
                        ans = sum;
                    }
                    if(sum>target)
                    {
                        r--;
                    }
                    else
                    {
                        l++;
                    }
                }
            }
        }
        return ans;
        
    }
};