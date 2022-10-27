#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution{
    public:
    int largestOverlap(vector<vector<int>>& A, vector<vector<int>>& B) {
        int len = A.size();
        vector<pair<int, int>> a, b;
        for(int i = 0; i < len; i++){
            for(int j = 0; j < len; j++){
                if(A[i][j]) a.push_back({i, j});
                if(B[i][j]) b.push_back({i, j});
            }
        }
        unordered_map<int, int> mp;
        for(auto& x: a){
            for(auto& y: b){
                mp[(x.first - y.first) * 100 + (x.second - y.second)]++;
            }
        }
        int res = 0;
        for(auto& x: mp) res = max(res, x.second);
        return res;
    }
};

int main(){
    vector<vector<int>> A = {{1, 1, 0}, {0, 1, 0}, {0, 1, 0}};
    vector<vector<int>> B = {{0, 0, 0}, {0, 1, 1}, {0, 0, 1}};
    Solution s;
    cout << s.largestOverlap(A, B) << endl;
    return 0;
}