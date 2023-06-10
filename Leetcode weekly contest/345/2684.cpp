class Solution {
public:
    int max_val = 0;
    
    void traverse(vector<vector<int>>& arr, vector<vector<bool>>& visited, int x, int y, int count) {
        if (x >= arr.size() || y >= arr[0].size())
            return;
        
        if (arr[x][y] <= arr[0][0] || visited[x][y])
            return;
        
        visited[x][y] = true;
        max_val = max(max_val, count);
        
        traverse(arr, visited, x + 1, y + 1, count + 1);
        traverse(arr, visited, x, y + 1, count + 1);
        traverse(arr, visited, x - 1, y + 1, count + 1);
        
        visited[x][y] = false;
    }
    
    int maxMoves(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        vector<vector<bool>> visited(rows, vector<bool>(cols, false));
        
        for (int i = 0; i < cols; i++) {
            traverse(grid, visited, 0, i, 0);
            visited = vector<vector<bool>>(grid.size(), vector<bool>(grid[0].size(), false));
        }
        
        return max_val;
    }
};
