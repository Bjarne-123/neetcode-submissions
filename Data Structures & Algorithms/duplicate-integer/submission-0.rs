use std::collections::HashMap;

impl Solution {
    pub fn has_duplicate(nums: Vec<i32>) -> bool {
        let mut seen = HashMap::new();

        for num in nums{
            if seen.contains_key(&num){
                return true;
            }

            seen.insert(num,());
        }
        false
    }
}
