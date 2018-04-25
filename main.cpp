#include <climits>
#include <iostream>

using namespace std;

const int MAX = 100000;

class Solution {
public:
    

    int totalNQueens(int n) {
        if (int <= 0) return 0;
        
        int possibilities = 0;
        int numOfQueens = 0;
        int board[n][n] = {};
        int *queen;
        
        cout << "Before: " << endl;
        for (int i = 0; i != n; ++i){
            for (int j = 0; j != n; ++j){
                cout << board[i][j];
            }
            cout << endl;
        }

        for (int i = 0; i != n; ++i){
            
            for (int j = 0; j != n; ++j){
                // check if spot open
                // place queen if open
                // if not open, advance to next column
                // if on the last column and still not possible, advance previous row's column
                // if first row is on the last column, done
                // should i use pointers to keep a track of where the queens are?
                board[i][j] = 1;
                ++numOfQueens;
            }

            if (numOfQueens == n) ++possibilities;
        }

        cout << endl << "After: " << endl;
        for (int i = 0; i != n; ++i){
            for (int j = 0; j != n; ++j){
                cout << board[i][j];
            }
            cout << endl;
        }

        return possibilities;
    }
};

int main(){
    Solution s;
    cout << endl << "Answer : " << s.totalNQueens(4) << endl;
    return 0;
}