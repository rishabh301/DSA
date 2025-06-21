class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> final;
        final.push_back(0);
        int m1 = height[0];
        vector<int> high;
        high.insert(high.begin(),0);
        int m2 = height[height.size()-1];
        for(int j=height.size()-1;j>=0;j--)
        {
            if(height[j]>m2)
            {
                m2=height[j];
            }
            high.insert(high.begin(),m2);
        }
       // cout<<"size of high is : "<<high.size()<<endl;
        for(int i=1;i<height.size()-1;i++)
        {
            if(height[i]>m1)
            {
                m1=height[i];
            }
            int h = high[i];
            int t = min(m1,h);
            if(t<height[i])
            {
                final.push_back(0);
            }
            else
            {
                final.push_back(t-height[i]);
            }
        }
        final.push_back(0);
        int sum = 0;
        for(int i=0;i<final.size();i++)
        {
            sum+=final[i];
        }
        return sum;
    }
};