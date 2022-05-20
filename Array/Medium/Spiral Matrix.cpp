class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int rows = matrix.size(), cols = matrix[0].size();
        int left = 0, right = cols - 1, top = 0, bottom = rows - 1;
        int direction = 1;
        
        vector<int> spiral;
        
        while(left <= right && top <= bottom){
            
            if(direction == 1){
                // left -> right
                
                for(int i = left; i <= right; ++i){
                    spiral.push_back(matrix[top][i]);
                }    
                direction = 2;
                top++;
            }
            
            else if(direction == 2){
                // top -> bottom
                
                for(int i = top; i <= bottom; ++i){
                    spiral.push_back(matrix[i][right]);
                }
                direction = 3;
                right--;
            }
            
            else if (direction == 3){
                // right -> left
                
                for(int i = right; i >= left; --i){
                    spiral.push_back(matrix[bottom][i]);
                }
                direction = 4;
                bottom --;
            }
            else if(direction == 4){
                //  bottom -> top
                
                for(int i = bottom; i >= top; --i){
                    spiral.push_back(matrix[i][left]);
                }
                direction = 1;
                left++;
            }
        }
        return spiral;
        
    }
};
