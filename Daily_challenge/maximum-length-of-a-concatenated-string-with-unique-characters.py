class solution(object):
    def maxLength(self, arr):
        """
        :type arr: List[str]
        :rtype: int
        """
        def dfs(i, s):
            if i == len(arr):
                return len(s)
            if len(set(arr[i]) & set(s)) > 0:
                return dfs(i + 1, s)
            else:
                return max(dfs(i + 1, s), dfs(i + 1, s + arr[i]))
        return dfs(0, "")
        
if __name__ == '__main__':
    arr = ["un","iq","ue"]
    print(solution().maxLength(arr))