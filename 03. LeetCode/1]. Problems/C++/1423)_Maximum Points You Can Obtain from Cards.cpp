class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        vector<int>prefixsumleft;
        int ans=0;
		
        int leftsum=0;
        int leftcnt=1;
        for(int i=0;i<cardPoints.size();i++){
            leftsum+=cardPoints[i];
            prefixsumleft.push_back(leftsum); 
            if(leftcnt==k){
                ans=max(ans,leftsum);
				break;   
            }
            leftcnt++;
        }
		
        int rightcnt=k;
		int rightsum=0;
		 
        for(int i=cardPoints.size()-1;i>=0;i--) {
            rightsum+=cardPoints[i];
            if((rightcnt-2)>=0) ans=max(ans,(rightsum+prefixsumleft[rightcnt-2]));
            if(rightcnt==1) {
                ans=max(ans,rightsum);
                break;
            }
            rightcnt--;
        }
        
        return ans;
    }
};