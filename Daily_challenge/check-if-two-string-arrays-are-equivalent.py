'''
Author: greatzh zh.zhang@connect.um.edu.mo
Date: 2022-10-25 23:48:33
LastEditors: greatzh zh.zhang@connect.um.edu.mo
LastEditTime: 2022-10-25 23:49:42
FilePath: \MyLeetCode\Daily_challenge\check-if-two-string-arrays-are-equivalent.py
Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
'''
class solution:
    def arrayStringsAreEqual(self, word1, word2):
        return ''.join(word1) == ''.join(word2)

if __name__ == "__main__":
    word1 = ["ab", "c"]
    word2 = ["a", "bc"]
    print(solution().arrayStringsAreEqual(word1, word2))