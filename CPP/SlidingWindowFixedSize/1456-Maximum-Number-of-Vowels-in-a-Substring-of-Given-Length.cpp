class Solution {
public:
    int maxVowels(string s, int k){
        std::ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        int count=0;
        int result=0;
        int start=0;
        int end=0;
        int size=s.length();
        while(end<size){            
            if(s[end]=='a' ||s[end]=='e' ||s[end]=='i' ||s[end]=='o' ||s[end]=='u' )
            {
                ++count;
            }
            if(end-start+1==k)
            {
                result=max(count,result);   
                if(s[start]=='a' ||s[start]=='e' ||s[start]=='i' ||s[start]=='o' ||s[start]=='u' )
                {
                    --count;
                }
                ++start;              
            }            
            ++end;                      
        }
        return result;
    }
};
