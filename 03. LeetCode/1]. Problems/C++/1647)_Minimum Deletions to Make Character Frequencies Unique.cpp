class Solution {
public:
    int minDeletions(string s) {
        vector<int> frequencies(26);
        for (char ch: s) frequencies[ch - 'a'] += 1;
        sort(frequencies.rbegin(), frequencies.rend());
        
        int total_deletions = 0;
        int next_unused_freq = s.length();
        for (int freq: frequencies) {
            next_unused_freq = min(next_unused_freq, freq);
            total_deletions += freq - next_unused_freq;

            if (next_unused_freq > 0) {
                next_unused_freq -= 1;
            }
        }
        return total_deletions;
    }
};