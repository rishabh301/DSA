class Solution {
public:
    bool canMakeEqual(vector<int>& nums, int k) {
        // for +1 
        vector<int> temp = nums;
        bool flag = false;
        int bob=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==-1)
            {
                bob++;
                nums[i]=nums[i]*-1;
                nums[i+1]=nums[i+1]*-1;
            }
        }
        if(nums[nums.size()-1]==-1)
        {
            // No
        }
        else
        {
           // cout<<"bob for +1 is "<<bob<<endl;
            if(bob<=k)
            {
                return true;
            }
            
        }
        
        bob =0;
        nums = temp;
        // for -1

        for(int i=0;i<nums.size()-1;i++)
        {
            
            if(nums[i]==1)
            {
                bob++;
                nums[i]=nums[i]*-1;
                nums[i+1]=nums[i+1]*-1;
            }
        }

        if(nums[nums.size()-1]==1)
        {
            //No
        }
        else
        {
            //cout<<"bob for -1 is "<<bob<<endl;
            if(bob<=k)
            {
                return true;
            }
        }
        return false;
    }
};