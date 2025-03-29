class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int size = matrix.size();

        vector<vector<int>> final;

        for(int i=0;i<size;i++)
        {
            vector<int> f;
            for(int j=size-1;j>=0;j--)
            {
                f.push_back(matrix[j][i]);
            }
            final.push_back(f);
        }

        for(int i=0;i<size;i++)
        {
            for(int j=0;j<size;j++)
            {
                matrix[i][j]=final[i][j];
            }
        }
    }
};