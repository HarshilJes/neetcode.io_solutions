class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char,int>mpp;
        for(auto n:board){
            mpp.clear();
            for(char c:n) if (c!='.') mpp[c]++;
            for(auto [x,f]:mpp) if((f!=1)&&(f!=0)) {
                cout<<"0";
                return false;
                }
        }
/* aut */
        mpp.clear();
        for(int i=0;i<9;i++){
            mpp.clear();
            for(int j=0;j<9;j++){
                if (board[j][i]!='.') mpp[board[j][i]]++;
            }
            for(auto [x,f]:mpp) if((f!=1)&&(f!=0)) {
                cout<<"1";
                return false;
                }
        }
        // box checking
        mpp.clear();
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if (board[i][j]!='.') mpp[board[i][j]]++;
            }
        }
        for(auto [x,f]:mpp) if((f!=1)&&(f!=0)) {
                cout<<"2";
                return false;
                }

        mpp.clear();
        for(int i=0;i<3;i++){
            for(int j=3;j<6;j++){
                if (board[i][j]!='.') mpp[board[i][j]]++;
            }
        }
        for(auto [x,f]:mpp) if((f!=1)&&(f!=0)) {
                cout<<"3";
                return false;
                }

        mpp.clear();
        for(int i=0;i<3;i++){
            for(int j=6;j<9;j++){
                if (board[i][j]!='.') mpp[board[i][j]]++;
            }
        }
        for(auto [x,f]:mpp) if((f!=1)&&(f!=0)) {
                cout<<"4";
                return false;
                }
        //2nd layer
        mpp.clear();
        for(int i=3;i<6;i++){
            for(int j=0;j<3;j++){
                if (board[i][j]!='.') mpp[board[i][j]]++;
            }
        }
        for(auto [x,f]:mpp) if((f!=1)&&(f!=0)) {
                cout<<"5";
                return false;
                }

        mpp.clear();
        for(int i=3;i<6;i++){
            for(int j=3;j<6;j++){
                if (board[i][j]!='.') mpp[board[i][j]]++;
            }
        }
        for(auto [x,f]:mpp) if((f!=1)&&(f!=0)) {
                cout<<"6";
                return false;
                }

        mpp.clear();
        for(int i=3;i<6;i++){
            for(int j=6;j<9;j++){
                if (board[i][j]!='.') mpp[board[i][j]]++;
            }
        }
        for(auto [x,f]:mpp) if((f!=1)&&(f!=0)) {
                cout<<"7";
                return false;
                }

        //3rd layer
        mpp.clear();
        for(int i=6;i<9;i++){
            for(int j=0;j<3;j++){
                if (board[i][j]!='.') mpp[board[i][j]]++;
            }
        }
        for(auto [x,f]:mpp) if((f!=1)&&(f!=0)) {
                cout<<"8";
                return false;
                }

        mpp.clear();
        for(int i=6;i<9;i++){
            for(int j=3;j<6;j++){
                if (board[i][j]!='.') mpp[board[i][j]]++;
            }
        }
        for(auto [x,f]:mpp) if((f!=1)&&(f!=0)) {
                cout<<"9";
                return false;
                }

        mpp.clear();
        for(int i=6;i<9;i++){
            for(int j=6;j<9;j++){
                if (board[i][j]!='.') mpp[board[i][j]]++;
            }
        }
        for(auto [x,f]:mpp) if((f!=1)&&(f!=0)) {
                cout<<"10";
                return false;
                }
        
        return true;

    }
};
