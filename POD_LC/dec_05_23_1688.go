func numberOfMatches(n int) int {
    var ans int = 0;

    for n>1{
        ans += n/2;
        n = (n/2)+n%2;
    }

    return ans;
}