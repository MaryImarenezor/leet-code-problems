/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    
    var result = [0, 0];
    
    for (let i = 0; i < nums.length; i++) { // outer loop
        for (let j = i+1; j < nums.length; j++) { // inner loop
            //iteration

            let sum = nums[i] + nums[j];
            if (Object.is(sum, target)) {
                result[0] = i;
                result[1] = j;
            }

        }
    }

    return result;
};