class Solution{
public:
  bool hasAllCodes(string s, int k){
    std::unordered_set<std::string> found;
    for (std::size_t i = 0; i + k <= s.length(); ++i){
      found.emplace(s.substr(i, k));
    }
    return found.size() == std::pow(2, k);
  }
};