class Solution {
public:
    int minimumRecolors(string blocks, int k)
    {
         std::ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        int start=0;
        int end=0;
        int size=blocks.length();
        int count=0;
        int result=INT_MAX;

        while(end<size)
        {
            if(blocks[end]=='W')
            {
                ++count;
            }
            if(end-start+1==k)
            {
                result=min(count,result);
                if(result>0)
                {
                    if(blocks[start]=='W')
                    --count;
                }
                else
                    break;                               
                ++start;
            }
            ++end;
        }  
        return result;
    }
};
