class Solution {
    bool check(string word,int indx, int i, int j, vector<vector<char>>& board, int m, int n){
        if (indx == word.length()){
            return true;
            }
        if(i<0 || j<0 || i>=m || j>=n || word[indx] != board[i][j] || board[i][j] == '0'){
            return false;
        }
        char c= board[i][j];
        board[i][j]= '0';

        bool left= check(word, indx+1, i, j-1,board,m, n);
        bool right= check(word, indx+1, i, j+1,board,m, n);
        bool down= check(word, indx+1, i+1, j,board,m, n);
        bool up= check(word, indx+1, i-1, j,board,m, n);
        board[i][j]= c;
        return left || right || down || up;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m= board.size(), n= board[0].size();
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(word[0] == board[i][j]){
                    if(check(word,0, i, j, board, m, n)){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};