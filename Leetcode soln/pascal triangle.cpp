#include <stdio.h>
#include <vector>

using namespace std;


using std::vector;

class Solution {
public:
    vector <vector<int>> generate(int numRows) {
        vector<vector<int>> r(numRows);

        for (int i = 0; i < numRows; i++) {
            r[i].resize(i + 1); //making a dynamic 2d array with every row. a[1] then a[2]
            r[i][0] = r[i][i] = 1; //making first and last element of each row as 1, as they wont add
  
            for (int j = 1; j < i; j++) //for loop will work from 3rd 2d array;
                r[i][j] = r[i - 1][j - 1] + r[i - 1][j];
        }
        
        return r;
    }
};