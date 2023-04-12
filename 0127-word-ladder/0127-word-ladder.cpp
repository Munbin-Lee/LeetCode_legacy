class Solution {
public:
    bool isAdjacent(string a, string b) {
        int n = a.size();
        bool res = false;
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                res ^= true;
                if (!res) return false;
            }
        }
        return res;
    }
    
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> reachable(wordList.begin(), wordList.end());
        queue<pair<string, int>> q;
        q.emplace(beginWord, 1);
        
        while (!q.empty()) {
            auto [ cur, cnt ] = q.front();
            q.pop();
            if (cur == endWord) return cnt;
            
            for (const string &s : wordList) {
                if (reachable.find(s) == reachable.end()) continue;
                if (!isAdjacent(cur, s)) continue;
                reachable.erase(s);
                q.emplace(s, cnt + 1);
            }
        }
        return 0;
    }
};