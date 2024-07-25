class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) 
    {
        int length=colors.size();
        int count=0;
        for (int i=0;i<length;++i)
        {
            if(colors[i]!=colors[(i+1)%length] && colors[i]==colors[(i+2)%length])
            ++count;
        }
        return count;
    }  
};
