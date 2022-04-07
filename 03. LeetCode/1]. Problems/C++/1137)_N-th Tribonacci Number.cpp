class Solution{
public:
    int tribonacci(int n){
        vector<int> gl;
        gl.push_back(0);
        gl.push_back(1);
        gl.push_back(1);
        if (n <= 2)
        {
            return gl[n];
        }
        else
        {
            for (int i = 3; i <= n; i++)
            {
                gl.push_back(gl[i - 3] + gl[i - 2] + gl[i - 1]);
            }

            return gl[n];
        }
    }
};