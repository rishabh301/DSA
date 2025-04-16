class Solution {
public:


    bool check(int index,int j,vector<string> final,int size)
    {
        int i=index;
        int k=j;
        while(i>=0 && k>=0)
        {
            if(final[i][k]=='Q')
            {
                return 0;
            }
            i--;
            k--;
        }
        i=index;
        k=j;
        while(i>=0 && k<size)
        {
            if(final[i][k]=='Q')
            {
                return 0;
            }
            i--;
            k++;
        }
        return 1;
    }

    void nqueen(int index,int size,vector<string>& final,vector<bool>& visit,vector<vector<string>>& ans)
    {
        // base condition 
        if(index==size)
        {
            ans.push_back(final);
            return;
        }
        for(int j=0;j<size;j++)
        {
            if(visit[j]==0 && check(index,j,final,size))
            {
                visit[j]=1;
                final[index][j]='Q';
                nqueen(index+1,size,final,visit,ans);
                visit[j]=0;
                final[index][j]='.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> final;
        vector<vector<string>> ans;
        vector<bool> visit(n,0);
        for(int i=0;i<n;i++)
        {
            string st="";
            for(int j=0;j<n;j++)
            {
                st+='.';
            }
            final.push_back(st);
        }
        nqueen(0,n,final,visit,ans);
        return ans;
        
    }
};