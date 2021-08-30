# Game Server - Area Of Interest(AOI)

Point {
    int id
    int grid_id
}


Cellular Grid {
    int id
    list<int> point_ids
    list<cgrid> surround_grid_ids
}

grid 划分
grid 半径
grid 包围gid根据半径快速查找

point 改变grid的通知  直接通过grid中心圆取grid id 冲突 conflict

云风aoi问题集锦

macos 双击执行脚本

孢子
