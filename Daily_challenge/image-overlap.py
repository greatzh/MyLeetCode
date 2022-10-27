import numpy as np

class List:
    def __init__(self, x, y):
        self.x = x
        self.y = y

class Solution:
    def largestOverlap(self, A: List[List[int]], B: List[List[int]]) -> int:
        A = np.array(A)
        B = np.array(B)
        n = len(A)
        max_overlap = 0
        for i in range(n):
            for j in range(n):
                max_overlap = max(max_overlap, np.sum(A[i:, j:] * B[:n-i, :n-j]))
                max_overlap = max(max_overlap, np.sum(A[:n-i, j:] * B[i:, :n-j]))
                max_overlap = max(max_overlap, np.sum(A[i:, :n-j] * B[:n-i, j:]))
                max_overlap = max(max_overlap, np.sum(A[:n-i, :n-j] * B[i:, j:]))
        return max_overlap

if __name__ == '__main__':
    A = [[1,1,0],[0,1,0],[0,1,0]]
    B = [[0,0,0],[0,1,1],[0,0,1]]
    solution = Solution()
    print(solution.largestOverlap(A, B))