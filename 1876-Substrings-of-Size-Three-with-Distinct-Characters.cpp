class Solution {
public:
    bool isSmallerOrEqualToOne(vector<int> &hashArray)
    {
        for(int &i:hashArray)
        {
            if(i>1)
                return false;
        }
        return true;
    }
    int countGoodSubstrings(string s) {       
        
        int start=0;
        int end=0;
        int length =s.size();
        int result=0;
        vector<int> hashArray(26,0);
        int k=3;
        while(end<length)
        {
            ++hashArray[s[end]-'a'];
            if(end-start+1==k)
            {
                if(isSmallerOrEqualToOne(hashArray))
                {
                    ++result;
                }
                --hashArray[s[start]-'a'];
                ++start;
            }
            ++end;
        }
        return result;
    }
};