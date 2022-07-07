class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
	    unordered_set<string> iset{bank.begin(),bank.end()};
	    if(!iset.count(end)) return -1;
	    queue<string> Queue;
	    Queue.push(start);
	    int steps=0,s;
	    string curr,temp;
	    while(!Queue.empty()){
	    	s=Queue.size();
	    	while(s--){
	    		curr=Queue.front();
	    		Queue.pop();
	    		if(curr==end) return steps;
	    		iset.erase(curr);
	    		for(int i=0;i<8;i++){
	    			temp=curr;
	    			temp[i]='A';
	    			if(iset.count(temp)) Queue.push(temp);
	    			temp[i]='C';
	    			if(iset.count(temp)) Queue.push(temp);
	    			temp[i]='G';
	    			if(iset.count(temp)) Queue.push(temp);
	    			temp[i]='T';
	    			if(iset.count(temp)) Queue.push(temp);
	    		}
	    	}
	    	steps++;
	    }
	    return -1;
    }
};