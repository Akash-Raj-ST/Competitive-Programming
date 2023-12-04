func largestGoodInteger(num string) string {
    var n int = len(num);
    
    arr := make([]int,n);


    for i:=1;i<n;i++{
        if num[i]==num[i-1]{
            arr[i] = arr[i-1]+1;
        }
    }

    high := 0;
    var value byte;

    for i:=0;i<n;i++{
        if arr[i]>=high && arr[i]==2{
            if num[i]>value{
                high = arr[i];
                value = num[i];
            }
        }
    }

    if value!=0{
        return strings.Repeat(string(value),3);
    }

    return "";
}