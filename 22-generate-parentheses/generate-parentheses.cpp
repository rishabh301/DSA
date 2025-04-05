class Solution {
public:

    void subsequence(int n,vector<string> &subse,int &R,int &L,string &final)
    {
        if(R>n || L>n)
        {
            return;
        } 
        if(R<L)
        {
            return;
        }
        if(final.length()==n*2)
        {
            subse.push_back(final);
            return;
        }
        
        // '(' liya 
        final+='(';
        R++;
        subsequence(n,subse,R,L,final);
        final.pop_back();
        R--;
        // ')' liya 
        final+=')';
        L++;
        subsequence(n,subse,R,L,final);
        final.pop_back();
        L--;
    }

    vector<string> generateParenthesis(int n) {
        int R=1;
        int L=0;
        string final="(";
        vector<string> subse;
        subsequence(n,subse,R,L,final);
        return subse;
    }
};