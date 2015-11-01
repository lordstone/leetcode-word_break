class Solution {
public:

    bool wordBreak(string s, unordered_set<string>& wordDict) {
        string s1 = '#' + s;
        vector<bool> mybool (s1.length(), false);
        mybool[0] = true;
        for(int i = 1; i < s1.length(); i ++){
            for(int j = 0; j < i; j ++){
                mybool[i] = mybool[j] && wordDict.find(s1.substr(j + 1, i - j)) != wordDict.end();
                if(mybool[i]) break;
            }//end for j
        }//end for i
        return mybool[s1.length() - 1];
    }
};
