class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size()-1;

        vector<int> answers;

        while(l<r)
        {
            if(numbers[l]+numbers[r]==target)
            {
                answers.push_back(l+1);
                answers.push_back(r+1);
                return answers;
            }
            else
            {
                if(numbers[l]+numbers[r]>target)
                {
                    r--;
                }
                if(numbers[l]+numbers[r]<target)
                {
                    l++;
                }
            }
        }
        return answers;
    }
};