class Solution {
public:
    long long countValidSubstrings(string s) {
        long long ans = 0;

        int x = -1;
        int y = -1;
        int z = -1;

        for(int i=0;i<s.size();i++){
            if(s[i]=='a'){
                x = i;
            }
            else if(s[i]=='b' && x!=-1){
                y = x;
            }
            else if(s[i]=='c' && y!=-1){
                z = max(z,y);
            }
            ans += i - z;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna