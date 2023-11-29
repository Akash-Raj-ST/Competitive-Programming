func hammingWeight(num uint32) int {
    var ans int = 0;

    for num!=0{
        ans += int(num&1);
        num = num>>1;
    }
    return ans;
}