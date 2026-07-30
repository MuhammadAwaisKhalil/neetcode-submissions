class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_map<char, int>> boxMap(9);
        for(int i=0;i<board.size();i++){

            unordered_map<char, int> rowMap;
            unordered_map<char, int> colMap;

            for(int j=0;j<board.size();j++){
                if(board[i][j]!='.'){
                    rowMap[board[i][j]]++;
                    if(rowMap[board[i][j]]>1){
                        return false;
                    }


                    int boxNumber = (i/3) * 3 + j/3;
                    char val = board[i][j];
                    boxMap[boxNumber][val]++;
                    if(boxMap[boxNumber][val]>1){
                        return false;
                    }

                }
                if(board[j][i]!='.'){
                    colMap[board[j][i]]++;
                    if(colMap[board[j][i]]>1){
                        return false;
                }
            }
                
                              
            }
        }
        return true;
    }
};
