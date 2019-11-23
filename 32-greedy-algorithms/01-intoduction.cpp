/*
There are algorithms like
    -> brute force
    -> divide conquer
    -> greedy algorithms -> most optimal choice at locally(local optimum).
    -> dynamic programming.
E.g.
    Indian currancy: {1,2,5,10,20,50,100,200,2000}
    To choice 73 using smallest number of note.
    -> start from maximul value note near to 73 and repeate the procees for remaining too.
    73 - 50 = 23
    23 - 20 = 3
    3  - 2  = 1
    so notes are 1,2,20,50 -> greedy strategy.
Advantage: fast than dp;
Disadvantage: can't be applied to all problems.

Note: 
    If constraints are small then DP, (10^3, ... 10^18) ND dp or exponential DP.
    If constrants are large the GP(greedy problem).
    Most of the GP required sorting.
    There are some probelms which looks like GP but actually are DP.

E.g Coins {1, 7, 10} to make change of 15.
    15 - 10 = 5
    5 - 1 = 4
    4 - 1 = 3
    3 - 1 = 2
    2 - 1 = 1
    1 - 1 = 1
Taking 6 coins but this problem should take three conins {1, 7, 7}
Brute force approach: DP can also be applied to solved this  problem.
for are each num divide into three parts(1,7,10) and get min{x,y,z}+1

*/