#include<bits/stdc++.h>
using namespace std;
// vector are passed by reference
//time O(n^3)
//space O(1);
void multiply_mat(vector<vector<int>> &mat1, vector<vector<int>> &mat2, vector<vector<int>> &res)
{
    int i, j, k,n=mat1.size();
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            res[i][j] = 0;
            for (k = 0; k < n; k++)
                res[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
}
int main(){

}