class Solution {
public:
    bool wordBreak(string s, unordered_set<string>& wordDict) {
        if(s.length() == 1) return wordDict.find(s)!= wordDict.end();
        for(int i = 0; i < s.length(); i ++){
            if(wordDict.find(s.substr(0, i + 1)) != wordDict.end()){
                if(i == s.length() - 1) return true;
                if(wordBreak(s.substr(i + 1, s.length() - i - 1), wordDict)){
                    return true;
                }
            }//end if found the word, continue with longer
        }
        return false;
    }
};
