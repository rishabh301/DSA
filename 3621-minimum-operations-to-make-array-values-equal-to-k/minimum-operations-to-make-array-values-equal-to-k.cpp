class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        vector<int> final=nums;
        sort(final.begin(),final.end());
        final.erase(unique(final.begin(),final.end()),final.end());
        if(final.size()==1)
        {
            if(final[0]>k)
            {
                return 1;
            }
            else if(final[0]==k)
            {
                return 0;
            }
            else
            {
                return -1;
            }
        }
        int id = final.size()-2;
        int count=0;
        while(id>=0)
        {
            if(k>final[id])
            {
                return -1;
            }
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]>final[id])
                {
                    nums[i]=final[id];
                }
            }
            id--;
            count++;
        }
        //cout<<"count is : "<<count<<endl;
        bool flag=true;
        bool notallequal = false;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>k)
            {
                flag=false;
                nums[i]=k;
            }
            if(nums[i]!=k)
            {
                notallequal=true;
            }
            if(nums[i]<k)
            {
                return -1;
            }
        }
        if(notallequal==true || flag==false)
        {
            count++;
        }
        return count;
    }
};