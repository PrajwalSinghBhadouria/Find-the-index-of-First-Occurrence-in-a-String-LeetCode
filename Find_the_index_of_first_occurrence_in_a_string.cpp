class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = haystack.size();
        int n = needle.size();
        int p;
        if(n>h){
            return -1;
        }
        int count = 0,ans;
        for(int i=0; i<h; i++){
            p = i;
            count = 0;
            for(int j=0; j<n; j++){
                if(haystack[p]==needle[j]){
                    if (j==0){
                        ans = p;
                    }
                    count++;
                    if(count == n){
                        return ans;
                    }
                    
                }
                else{
                        break;
                    }
                p++;
            }
        }
        return -1;
    }
};
