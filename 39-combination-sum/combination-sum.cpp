class Solution {
public:

    void recur(vector<int> &candidates,int &target,int &sum,int index,vector<int> &subse,
    vector<vector<int>> &final)
    {
        if(index>=candidates.size())
        {   
            if(sum==target)
            {
                final.push_back(subse);
            }
            return;
        }

        if(sum>target)
        {
            return;
        }

        // take it yr 
        sum+=candidates[index];
        subse.push_back(candidates[index]);
        recur(candidates,target,sum,index,subse,final);
        sum-=candidates[index];
        subse.pop_back();

        // don't take it yr 
        recur(candidates,target,sum,index+1,subse,final);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<vector<int>> final;
        vector<int> subse;
        int sum = 0;
        int index = 0;
        recur(candidates,target,sum,index,subse,final);
        return final;
    }
};