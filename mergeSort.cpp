#include<bits/stdc++.h>

using namespace std;
//merge in O(n)
void merge(vector<int> &arr, int l, int m, int r)
{
    int left = l;
    int right = m + 1;
    vector<int> temp;
    while (left <= m && right <= r)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= m)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= r)
    {
        temp.push_back(arr[right]);
        right++;
    }
    // changine the original arr
    for (int i = l; i <= r; i++)
    {
        arr[i] = temp[i - l];
    }
}
//mergeSort O(n*log n)
void mergeSort(vector<int> &arr, int l, int r)
{
    //code here
    if (l == r)
        return;
    int mid = (l + r) >> 1;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}
int main(){

}