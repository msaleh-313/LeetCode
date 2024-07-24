class Solution {
public:


    int divisorSubstrings(int num, int k) {
        string number= to_string(num);    
        int length=number.length();
        int start=0;
        int end=0;
        int result=0;
        string calculation;
        while(end<length)
        {
            calculation.push_back(number[end]);          
            if(end-start+1==k)
            {
                int calculations=stoi(calculation);
                if (calculations!=0 && num%calculations==0)
                {
                    ++result;
                }
                calculation.erase(0,1);
                ++start;             
            }
            ++end;
        }
        return result;  
    }   
};