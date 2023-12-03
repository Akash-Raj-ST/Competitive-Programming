func abs(a int) int{
    if a<0{
        return a*-1;
    }

    return a;
}

func max(a int,b int) int{
    if a>b{
        return a;
    }

    return b;
}

func minTimeToVisitAllPoints(points [][]int) int {
    time_req := 0;

    curr_x := points[0][0];
    curr_y := points[0][1];

    size := len(points);

    var new_x int;
    var new_y int;

    for i:=1;i<size;i++{
        new_x = points[i][0];
        new_y = points[i][1];

        time_req += max(abs(curr_x-new_x),abs(curr_y-new_y));

        curr_x = new_x;
        curr_y = new_y;
    }

    return time_req;
}