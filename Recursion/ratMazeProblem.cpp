#include <iostream>
#include <vector>
using namespace std;

/*
 *
 * Rat in a Maze Problems.
 * 
 */
class MazeProblem{

    public:
    int rowValue[4] = {-1, 1, 0, 0};
    int colValue[4] = {0,  0, -1, 1};
    string dir = "UDLR";

    bool valid(int row, int col, int n){
        return row>= 0 && col >= 0 && row < n && col < n;
    }
    
    void ratMaze(vector<vector<int>> &maze, int row, int col, int n, string &path, vector<string>&ans, vector<vector<bool>>&visited){
        // base case. 
        if((row == n - 1)&& (col = n - 1)){
            ans.push_back(path);
            return;
        }
        
        visited[row][col] = 1; 
        
        for(int k = 0; k<4; k++){
            if(valid(row+rowValue[k], col+colValue[k], n)&&maze[row+rowValue[k]][col+colValue[k]]&!visited[row+rowValue[k]][col+colValue]){
                path.push_back(dir[k]);
                ratMaze(maze, row+rowValue, col+colValue, n, path, ans, visited);
                path.pop_back();
            }
        }
        
        visited[row][col] = 0;
        
        // up.
        // if(valid(row-1, col,n)&&matrix[row-1][col]&&!visited[row-1][col]){
        //     path.push_back("U");
        //     totalMaze(maze, row-1, col, n, path, ans, visited);
        // }
        
        // down.
        // if(valid(row+1, col, n)&&matrix[row+1][col]&&!visited[row+1][col]){
        //     path.push_back("D");
        //     totalMaze(maze, row+1, col, n , path, ans, visited);
        // }
        // // left.
        // if(valid(row, col-1, n)&&matrix[row][col-1]&&!visited[row][col-1]){
        //     path.push_back("L");
        //     totalMaze(maze, row, col-1, n, path, ans, visited);
        // }
        // // right.
        // if(valid(row, col+1,n)&&matrix[row][col+1]&&!visited[row][col+1]){
        //     path.push_back("R");
        //     totalMaze(maze, row, col+1, n, path, ans, visited);
        // }
    }
};

int main(){

}