class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int count = 0; 
        int index=-1;
        vector<int> final;
        bool flag=true;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                count++;
                index = i;
            }
            if(count==1 && flag)
            {
                final.push_back(i);
                flag=false;
            }   
        }
        if(count==0)
        {
            final.push_back(-1);
            final.push_back(-1);
        }
        else
        {
            final.push_back(index);
        }
        return final;
    }
};