There are n pieces arranged in a line, and each piece is colored either by 'A' or by 'B'. You are given a string colors of length n where colors[i] is the color of the ith piece.

Alice and Bob are playing a game where they take alternating turns removing pieces from the line. In this game, Alice moves first.

Alice is only allowed to remove a piece colored 'A' if both its neighbors are also colored 'A'. She is not allowed to remove pieces that are colored 'B'.
Bob is only allowed to remove a piece colored 'B' if both its neighbors are also colored 'B'. He is not allowed to remove pieces that are colored 'A'.
Alice and Bob cannot remove pieces from the edge of the line.
If a player cannot make a move on their turn, that player loses and the other player wins.
Assuming Alice and Bob play optimally, return true if Alice wins, or return false if Bob wins.

 

Example 1:

Input: colors = "AAABABB"
Output: true
Explanation:
AAABABB -> AABABB
Alice moves first.
She removes the second 'A' from the left since that is the only 'A' whose neighbors are both 'A'.

Now it's Bob's turn.
Bob cannot make a move on his turn since there are no 'B's whose neighbors are both 'B'.
Thus, Alice wins, so return true.
Example 2:

Input: colors = "AA"
Output: false
Explanation:
Alice has her turn first.
There are only two 'A's and both are on the edge of the line, so she cannot move on her turn.
Thus, Bob wins, so return false.





// Approach : Check the total number of successful swaps alice and bob can make. 
class Solution {
public:
    bool winnerOfGame(string s) {

      if(s.length()==0 || s.length()==1 || s.length()==2)
        {
            return false;
        }

        int bob=0;
        int alice=0;

        for(int j=1;j<s.length()-1;j++)
        {
            int i=j-1;
            int k=j+1;

            if(s[i]=='A' && s[j]=='A' && s[k]=='A' )
            {
                    alice++;
            }
            else if(s[i]=='B' && s[j]=='B' && s[k]=='B' )
            {
                bob++;
            }
        }
        return alice>bob;
   
    }
};