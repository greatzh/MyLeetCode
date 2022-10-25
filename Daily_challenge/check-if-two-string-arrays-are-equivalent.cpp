/*
 * @Author: greatzh zh.zhang@connect.um.edu.mo
 * @Date: 2022-10-25 23:43:59
 * @LastEditors: greatzh zh.zhang@connect.um.edu.mo
 * @LastEditTime: 2022-10-25 23:45:18
 * @FilePath: \MyLeetCode\Daily_challenge\check-if-two-string-arrays-are-equivalent.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1 = "", s2 = "";
        for(string s : word1) s1 += s;
        for(string s : word2) s2 += s;
        return s1 == s2;
    }
};

int main(int argc, char const *argv[]){
    Solution s;
    vector<string> word1 = {"ab", "c"}, word2 = {"a", "bc"};
    cout << s.arrayStringsAreEqual(word1, word2) << endl;
    return 0;
}