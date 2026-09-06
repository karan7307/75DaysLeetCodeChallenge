int numDistinct(char* s, char* t) {
    int m = strlen(s), n = strlen(t);
    if (m < n) {
        return 0;
    }
    unsigned long long dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[n] = 1;
    
    for (int i = m - 1; i >= 0; i--) {
        char sChar = s[i];
        for (int j = 0; j < n; j++) {
            char tChar = t[j];
            if (sChar == tChar) {
                dp[j] = dp[j + 1] + dp[j];
            }
        }
    }
    
    return dp[0];
}