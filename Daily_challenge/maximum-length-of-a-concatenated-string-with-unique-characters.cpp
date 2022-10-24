/*
 * @Author: greatzh zh.zhang@connect.um.edu.mo
 * @Date: 2022-10-25 00:01:13
 * @LastEditors: greatzh zh.zhang@connect.um.edu.mo
 * @LastEditTime: 2022-10-25 01:04:01
 * @FilePath: \MyLeetCode\Daily_challenge\maximum-length-of-a-concatenated-string-with-unique-characters.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
#include<vector>
#include<string>
#include<unordered_set>
using namespace std;

class Solution {
public:
    int res = 0;
    
    void generate(string s, vector<string>& arr, int cnt){
        if(unordered_set(s.begin(),s.end()).size() != s.size()) return ;
        if(res < s.size()) res = s.size();
        for(int i = cnt; i < arr.size(); i++) generate(s+arr[i], arr, i+1);
    }
    
    int maxLength(vector<string>& arr) {
        vector<string> new_arr;
        for(string s : arr){
            if(unordered_set(s.begin(),s.end()).size() == s.size()) new_arr.push_back(s);
        }
        generate("", new_arr, 0);
        return res;
    }
};

int main(int argc, char const *argv[]){
    Solution s;
    vector<string> arr = {"un","iq","ue"};
    cout << s.maxLength(arr) << endl;
    return 0;
}