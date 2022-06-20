struct Node{
    Node* trie[26];
    bool flag;
    
    bool containsKey(char c){
        return (trie[c-'a']!=NULL);
    }
    
    bool containsKey(int c){
        return trie[c]!=NULL;
    }
    
    Node* next(int c){
        return trie[c];
    }
    
    void addKey(char c){
        trie[c-'a'] = new Node();
    }
    
    Node* next(char c){
        return trie[c-'a'];
    }
    
    void setFlag(){
        flag= true;
    }
    
};

class Trie{

    public:
    Node* root;
    
    void trie(){
        root = new Node();
    }
    
    void insert(string& word){
        Node* node = root;
        char x ;
        for(int i = word.size()-1;i>=0;i--){
            x=word[i];
            if(!node->containsKey(x)){
                node->addKey(x);
            }
            node = node->next(x);
        }
        
        node->setFlag();   
    }
    
    void encode(int& ans,Node* node,int c){
        
        bool b = false;
        for(int i =0;i<26;i++){
            if(node->trie[i]!=NULL){
                encode(ans,node->next(i),c+1);
                b=true;
            }
        }
        if(!b){
            ans+=c+1;
        }
    }   
};


class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        Trie t;
        t.trie();
        
        for(auto x:words){
            t.insert(x);
        }
        int ans=0;
        t.encode(ans,t.root,0);
        return ans;
    }
};