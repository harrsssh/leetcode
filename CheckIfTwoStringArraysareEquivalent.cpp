//Given two string arrays word1 and word2, return true if the two arrays represent the same string, and false otherwise.
//A string is represented by an array if the array elements concatenated in order forms the string.

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1 = "";
        string s2 = "";
        
        for(int i=0; i<word1.size(); i++){
            s1 += word1[i];
        }
        
        for(int i=0; i<word2.size(); i++){
            s2 += word2[i];
        }
        
        if(s1.length() != s2.length()){
            return false;
        }
        for(int i=0; i<s1.length(); i++){
            if(s1[i] != s2[i]){
                return false;
            }
        }
        return true;
    }
};
