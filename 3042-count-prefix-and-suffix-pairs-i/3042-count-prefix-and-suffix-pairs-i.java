class Solution {
    public int countPrefixSuffixPairs(String[] words) {
        int c=0;
        int a=words.length;
        for(int i=0;i<a;i++)
        {
            for(int j=i+1;j<a;j++)
            {
                if(isPrefix(words[i],words[j]))
                {
                    c++;
                }
            }
        }
        return c;
        
    }
    private boolean isPrefix(String str1,String str2)
    {
        int a=str1.length();
        int b=str2.length();
        if(a>b)
        {
            return false;
        }
        for(int i=0;i<a;i++)
        {
            if(str1.charAt(i)!=str2.charAt(i))
            {
                return false;
            }
        }
        for(int i=0;i<a;i++)
        {
            if(str1.charAt(i)!=str2.charAt(b-a+i))
            {
                return false;
            }
               
        }
        return true;
    }
}