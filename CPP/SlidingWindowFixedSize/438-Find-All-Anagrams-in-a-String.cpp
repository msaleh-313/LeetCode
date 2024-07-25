class Solution {
public:
    bool isSmallerOrEqualToZero(vector<int> &hashArray)
    {
        for(int &i:hashArray)
        {
            if(i>0)
            {
                return false;
            }
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) 
    {
        std::ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        int start=0;
        int end=0;
        int k=p.length();
        int n=s.length();
        vector<int> result;
        vector<int> hashArray(26,0);

        for(char &i:p)
        {
            ++hashArray[i-'a'];
        }


        while(end<n)
        {
            --hashArray[s[end]-'a'];

            if(end-start+1<k)
            {
                ++end;
            }
            else
            {                
                if(isSmallerOrEqualToZero(hashArray))
                {
                    result.push_back(start);
                }
                ++hashArray[s[start]-'a'];
                ++start;
                ++end;

            }
        }

        return result;


        
    }
};
