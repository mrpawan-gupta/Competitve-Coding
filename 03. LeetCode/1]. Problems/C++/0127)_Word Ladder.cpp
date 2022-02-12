class Solution{
    void createGraph(unordered_map<string, vector<string>> &G, vector<string> &wordList, string word, int i, int n){
        for (int j = i; j < n; j++){
            int set = 0, ans = 0;

            for (int k = 0; k < word.length(); k++){
                if (!set && word[k] != wordList[j][k]){
                    set = 1, ans = 1;
                }
               
                else if (set && word[k] != wordList[j][k]){
                    ans = 0;
                    break;
                }
            }
        
            if (ans){
                G[word].push_back(wordList[j]);
                G[wordList[j]].push_back(word);
            }
        }
    }
    int shortestPath(unordered_map<string, vector<string>> &G, string source, string sink, vector<string> &wordList){
        unordered_map<string, int> dist;
        for (auto c : wordList)
            dist[c] = INT_MAX;

        queue<string> Q;
        Q.push(source);
        dist[source] = 0;

        while (!Q.empty()){
            string s = Q.front();
            Q.pop();
            for (auto u : G[s]){
                if (dist[u] > dist[s] + 1){
                    dist[u] = dist[s] + 1;
                    Q.push(u);
                }
            }
        }
        return dist[sink];
    }

public:
    int ladderLength(string beginWord, string endWord, vector<string> &wordList){
        bool isPresent = 0;
        int n = wordList.size();

        for (auto it : wordList)
            if (it == endWord)
                isPresent = 1;
        if (!isPresent)
            return 0;

        unordered_map<string, vector<string>> G;

        createGraph(G, wordList, beginWord, 0, n);

        for (int i = 0; i < n; i++)
            createGraph(G, wordList, wordList[i], i + 1, n);

        int a = shortestPath(G, beginWord, endWord, wordList);

        if (a == INT_MAX)
            a = -1;
        return a + 1;
    }
};