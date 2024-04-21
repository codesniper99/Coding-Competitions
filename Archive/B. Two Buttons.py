from collections import defaultdict

dp = defaultdict(lambda: -1)

def ans(n, m):
    if n == m:
        dp[n] = 0
        return 0
    if dp[n]!=-1:
        return dp[n]
    
    dp[n] = 1 + min(ans(2*n, m), ans(n-1,m))
    return dp[n]
    

def main():
    n, m = input().split()
    m = int(m)
    n = int(n)
    print(ans(n,m))
        
if __name__ == "main":
    main()