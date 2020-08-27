#include<iostream>
#include<vector>
using namespace std; 

/*
给你一个整数 n 和一个整数数组 rounds 。有一条圆形赛道由 n 个扇区组成，扇区编号从 1 到 n 。现将在这条赛道上举办一场马拉松比赛，该马拉松全程由 m 个阶段组成。其中，第 i 个阶段将会从扇区 rounds[i - 1] 开始，到扇区 rounds[i] 结束。举例来说，第 1 阶段从 rounds[0] 开始，到 rounds[1] 结束。

请你以数组形式返回经过次数最多的那几个扇区，按扇区编号 升序 排列。

注意，赛道按扇区编号升序逆时针形成一个圆（请参见第一个示例）。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/most-visited-sector-in-a-circular-track
*/

class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& rounds) {
        vector<int> ans;
        int start = rounds.front(),end = rounds.back();

        if(start == end){
            ans.push_back(start);
        }
        else if (start < end){
            for(int num = start;num <= end; ++num){
                ans.push_back(num);
            }
        }
        else{
            for(int num=1;num<=end;++num){
                ans.push_back(num);
            }
            for(int num=start;num<=n;++num){
                ans.push_back(num);
            }
        }
        return ans;
    }
};