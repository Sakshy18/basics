Input: strs = ["flower","flow","flight"]
Output: "fl"
 string longestCommonPrefix(vector<string>& strs) {
        string result="";
        int n=strs.size();
        sort(strs.begin(),strs.end());
        string first = strs[0];
        string last= strs[n-1];
        for(int i=0;i<min(first.size(),last.size());i++)
        {
            if(first[i]!=last[i])
            {
                return result;
            }
            result=result+first[i];
        }
        return result;
    }
