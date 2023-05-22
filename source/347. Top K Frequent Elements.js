/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number[]}
 */


var  topKFrequent=function(nums, k) {
    let ans = [];
    let m = new Map();
    for(let i=0;i<nums.length;i++)
        m.set(nums[i],m.get(nums[i])+1 || 1);

    let v = Array.from(m);
    v.sort((a,b) => b[1] - a[1]);
    for(let i=0;i<k;i++){
        ans.push(v[i][0]);
    }
    return ans;
};