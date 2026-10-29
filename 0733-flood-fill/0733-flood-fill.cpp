class Solution {
public:
void dfs(vector<vector<int>>& image, int r, int c, int color, int old) {
if (r < 0 || c < 0 || r >= image.size() || c >= image[0].size() || image[r][c] != old){
return;}

    image[r][c] = color;

    dfs(image, r + 1, c, color, old);
    dfs(image, r - 1, c, color, old);
    dfs(image, r, c + 1, color, old);
    dfs(image, r, c - 1, color, old);
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    int old = image[sr][sc];
    if (old != color)
        dfs(image, sr, sc, color, old);
    return image;
}


};
