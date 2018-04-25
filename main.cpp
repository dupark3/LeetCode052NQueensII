#include <climits>
#include <iostream>

using namespace std;

const int MAX = 100000;

class Solution {
public:
    

    int totalNQueens(int n) {
        int possibilities = 0;
        int board[n][n] = {};
        
        cout << "Before: " << endl;
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
    cout << "Answer : " << s.totalNQueens(4) << endl;
    return 0;
}