class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        
        // not possible to place n queens
        if(n == 0 || n == 2 || n == 3) return ans;
        
        // initialize board with all '.'
        vector<string> board(n, string(n, '.'));
        
        placeQueen(board, 0, ans);
        
        return ans;
    }
    
    // places queens in board based on feasibility
    void placeQueen(vector<string>& board, int row, vector<vector<string>>& ans){
        
        // already filled all the rows, we got one of the answer
        if(row == board.size()){
            // save board position to ans
            ans.push_back(board);
            return;
        }
        
        // iterate over all the columns to look for safe cells
        for(int col = 0; col < board.size(); ++col){
            
            if(isSafe(board, row, col)){
                
                board[row][col] = 'Q';
                
                // place queen in the next row
                placeQueen(board, row + 1, ans);
                
                // back to normal to find other safe places
                board[row][col] = '.';
            }
        }
    }
    
    
    // if particular position is safe or not
    bool isSafe(vector<string>& board, int row, int col){
        
        // is there already any queen on any row  in the same column
        for(int i = row; i >= 0; --i){
            // yes, this cell is not safe.
            if(board[i][col] == 'Q') return false;
        }
        
        // check diagonally left-up
        for(int i = row, j = col; i >= 0 && j >= 0; --i, --j){
            if(board[i][j] == 'Q') return false;
        }
        
        // check diagonally right-up
        for(int i = row, j = col; i >= 0 && j < board.size(); --i, ++j){
            if(board[i][j] == 'Q') return false;
        }
        
        return true;
    }
};
