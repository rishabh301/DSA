class Solution {
public:

    void subsequence(vector<int>& nums,int index,vector<int> &subse,vector<vector<int>> &final)
    {
        //base case 
        if(index>=nums.size())
        {
            final.push_back(subse);
            return;
        }

        // take the element 
        subse.push_back(nums[index]);
        subsequence(nums,index+1,subse,final);
        subse.pop_back();

        // not take this element
        subsequence(nums,index+1,subse,final);
    }

    int subsetXORSum(vector<int>& nums) {
        int index = 0;
        vector<int> subse;
        vector<vector<int>> final;
        subsequence(nums,index,subse,final);   
        int sum = 0;
        for(int i=0;i<final.size();i++)
        {
            vector<int> f = final[i];
            int t=0;
            for(int j=0;j<f.size();j++)
            {
                t = f[j]^t;
            }
            sum+=t;
        }

        return sum;
        

        return sum;
    }
};