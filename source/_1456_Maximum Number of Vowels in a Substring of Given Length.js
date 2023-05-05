/**
 * @param {string} s
 * @param {number} k
 * @return {number}
 */
var maxVowels = function(s, k) {
    let cur_vouls_nums=0;
    let ans=0;
    for(let i=0;i<k;i++) if(is_vowel(s[i]))cur_vouls_nums++;
    ans=cur_vouls_nums;
    for(let i=k;i<s.length;i++){
        if(is_vowel(s[i-k])) cur_vouls_nums--;
        if(is_vowel(s[i])) cur_vouls_nums++;
        ans=Math.max(ans,cur_vouls_nums);
    }
    return ans;
};

function is_vowel(char){
    return (char=='a' || char=='e' || char=='i' ||char=='o' || char=='u');
}