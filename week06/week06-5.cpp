class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> ans; //宣告一個放答案的陣列(可變更長度)
        stringstream ss(text); //把 string 轉成像 cin cout 的 stream
        string word1, word2, word3;
        ss >> word1; //像 cin >> word1 的方式讀取資料 
        ss >> word2;
        while(ss>> word3){
            if(word1==first && word2==second) ans.push_back(word3); //放答案
            word1 = word2;
            word2 = word3;
        }
        return ans;
    }
};