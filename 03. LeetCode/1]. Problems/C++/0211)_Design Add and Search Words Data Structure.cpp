class WordDictionary
{
public:
    map<size_t, vector<string>> words;
    WordDictionary()
    {
    }
    bool my_find(string word)
    {
        vector<string> cand = words[word.size()];
        for (int i = 0; i < cand.size(); i++)
        {
            int j = 0;
            while (j < word.size())
            {
                if (word[j] == cand[i][j] || word[j] == '.' || cand[i][j] == '.')
                {
                    j++;
                }
                else
                {
                    break;
                }
            }
            if (j == word.size())
            {
                return true;
            }
        }

        return false;
    }
    void addWord(string word)
    {
        words[word.size()].push_back(word);
    }

    bool search(string word)
    {
        return my_find(word);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */