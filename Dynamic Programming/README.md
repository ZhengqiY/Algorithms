## 动态规划 DP

- 构造选与不选树 (Construct choose or no choose tree)

## 什么是动态规划？

例如机器人从一个角走到另一个角，问哪一个问题可以用动态规划解。

A：求多少种方式走到另一个角 -> 动态规划

B：输出所有走到了另一个角的路径 -> 递归

## 动态规划题目特点

- 计数问题：有多少种方式
- 求最大最小值：最长上升子序列长度
- 求存在性：取石子游戏/能不能选出...

## 动态规划组成部分

- 确定状态
  - 最后一步->例如硬币问题：最优策略中最后一枚硬币选什么
  - 化成子问题 最少的硬币拼出 x-last_coin
 - 转移方程：f(x) = min(f(x-coin_a)+1 + f(x-coin_b)+1)
 - 初试情况和边界条件
  - f(0) = 0, if cannot -> max_value or min_value
 - 计算顺序
