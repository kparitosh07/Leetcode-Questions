class Solution {
public:
    long long countValidSubstrings(string s) {
        long long ans = 0;
        int p = -1;
        for(int i=0;i<s.size();i++){
            if(i>=2 && s[i-2]=='a' && s[i-1]=='b' && s[i]=='c'){
                p = i-2;
            }
            ans += i-p;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna