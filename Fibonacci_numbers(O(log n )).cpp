#include <bits/stdc++.h>
using namespace std;
//in log n time
void multiply_mat(vector<vector<int>> &mat1, vector<vector<int>> &mat2, vector<vector<int>> &res)
{
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            res[i][j] = 0;
            for (k = 0; k < 2; k++)
                res[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
}
int fib(int n){
    vector<vector<int>> base = {{1, 1}, {1, 0}};
    n = n - 1;
    vector<vector<int>>ans = {{1, 0}, {0, 1}};
    while(n){
        vector<vector<int>> temp(2, vector<int>(2));
        if(n&1==0){
            multiply_mat(base, base, temp);
            base = temp;
            n = n >> 2;
        }
        else{
            multiply_mat(ans, base, temp);
            ans = temp;
            n = n - 1;
        }
    }
    return ans[0][0];
}

int main(){

}