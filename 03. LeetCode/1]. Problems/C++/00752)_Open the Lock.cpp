class Solution {
public:
    string moveUp(string cur, int location){
        if(cur[location] == '9')
            cur[location] = '0';
        else
            cur[location] += 1;
        
        return cur;
    }
    
    string moveDown(string cur, int location) {
        if(cur[location] == '0')
            cur[location] = '9';
        else
            cur[location] -= 1;
        
        return cur;
    }
    
    int openLock(vector<string>& deadends, string target) {
        queue<string> Queue;
        set<string> visited;
        int steps = 0;
            
        Queue.push("0000");
        visited.insert("0000");
        
        while(!Queue.empty()){
            int len = Queue.size();
            
            for(int i = 0; i < len; i++){
                string cur = Queue.front();
                Queue.pop();
                
                if(find(deadends.begin(), deadends.end(), cur) != deadends.end())
                    continue;
                
                if(cur ==  target)
                    return steps;
                
                for(int j = 0; j < 4; j++){
                    string up = moveUp(cur, j);
                    if(visited.find(up) == visited.end()){
                        Queue.push(up);
                        visited.insert(up);
                    }
                    
                    string down = moveDown(cur, j);
                    if(visited.find(down) == visited.end()){
                        Queue.push(down);
                        visited.insert(down);
                    }
                }
            }
            
            steps++;
        }
        
        return -1;
    }
};