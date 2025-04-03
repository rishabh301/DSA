class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        vector<int> prefix;
        vector<int> sufix;
        map<int,int> pre;
        map<int,int> post;
        for(int i=0;i<nums.size();i++)
        {
            pre[nums[i]]++;
            prefix.push_back(pre[nums[i]]);
        }

        for(int i=nums.size()-1;i>=0;i--)
        {
            post[nums[i]]++;
            sufix.insert(sufix.begin()+0,(post[nums[i]]));
        }

        // for(int i=0;i<prefix.size();i++)
        // {
        //     cout<<prefix[i]<<" ";
        // }

        // cout<<endl;

        // for(int i=0;i<sufix.size();i++)
        // {
        //     cout<<sufix[i]<<" ";
        // }

        for(int i=0;i<nums.size();i++)
        {
            int s = nums.size()-i-1;
            int t = i+1;
            bool f1 = false;
            bool f2 = false;
            if(prefix[i]>(t/2))
            {
                f1=true;
            }
            if(sufix[i]-1>(s/2))
            {
                f2=true;
            }
            if(f1==true && f2==true)
            {
                return i;
            }
        }
        return -1;
    }
};