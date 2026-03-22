#include <vector>
#include <iostream>
# include <string>
using namespace std;

class Solution {
public:
    bool judgeCircle(string moves) {

        // int counter for each move
        int cnt_U = 0, cnt_D = 0, cnt_R = 0, cnt_L = 0;

        // count moves
        for (int i = 0; i < moves.size(); i++)
        {
            if (moves[i] == 'U')
                cnt_U++;
            else if (moves[i] == 'D')
                cnt_D++;
            else if (moves[i] == 'R')
                cnt_R++;
            else if (moves[i] == 'L')
                cnt_L++;
        }

        // U = D and R =L => return to origin
        if ((cnt_D == cnt_U) && (cnt_R == cnt_L))
            return true;
        else
            return false;
    }
};

int main()
{
    Solution S;
    string moves = {"LLRR"};

    if (S.judgeCircle(moves))
        cout << "Robot return to Origin!" << endl;
    else
        cout << "Robot don't return to Origin!" << endl;

    return 0;
}