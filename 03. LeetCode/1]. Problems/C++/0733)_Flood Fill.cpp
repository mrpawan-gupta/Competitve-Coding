class Solution {
public:
    void Helper(vector<vector<int>>& image, int sr, int sc, int color) {
        int r = image.size(), c = image[0].size();
        int currColor = image[sr][sc];
        image[sr][sc] = color;
        if(sr > 0 && image[sr-1][sc] == currColor) Helper(image, sr-1, sc, color);   
        if(sc > 0 && image[sr][sc-1] == currColor) Helper(image, sr, sc-1, color);  
        if(sr < r-1 && image[sr+1][sc] == currColor) Helper(image, sr+1, sc, color);
        if(sc < c-1 && image[sr][sc+1] == currColor) Helper(image, sr, sc+1, color);
        return;
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc] == color) return image;
        Helper(image, sr, sc, color);
        return image;
    }
};