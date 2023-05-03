/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[][]}
 */
var findDifference = function(nums1, nums2) {
    let ans=[[],[]];  
        for(var i=0;i<nums1.length;i++){
            let flag=false;
            for(var j=0;j<nums2.length;j++){
                if(nums1[i]===nums2[j]){
                    j=nums2.length;
                    flag=true;
                }   
            }
             if(flag!=true &&!ans[0].includes(nums1[i]))ans[0].push(nums1[i]);
        }
        for(var i=0;i<nums2.length;i++){
            let flag=false;
            for(var j=0;j<nums1.length;j++){
                if(nums2[i]===nums1[j]){
                    j=nums1.length;
                    flag=true;
                } 
            }
            if(flag===false && !ans[1].includes(nums2[i]))ans[1].push(nums2[i]);
            else continue;
        }
   return ans;
};