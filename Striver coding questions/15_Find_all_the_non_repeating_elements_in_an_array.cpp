// // problem link:- https://leetcode.com/problems/single-number/

// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         unordered_map<int, int> mp;
//         // vector<int> v;
//         for(auto i : nums){
//             mp[i]++;
//         }
//         for(auto i : mp){
//             if(i.second <2){
//                 return i.first;
//             }
//         }
//         return -1;
//     }
// };