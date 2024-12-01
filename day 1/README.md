# Second Largest Element in Array

## Problem Description
Given an array of positive integers, find the second largest element. If no second largest element exists, return -1.

**Note:** The second largest element should be strictly less than the largest element.

### Example
Input: `arr[] = [12, 35, 1, 10, 34, 1]`  
Output: `34`

## Code Intuition <span style="font-size: 16px; color: #888;">(for optimal solution)</span>
The solution uses two pointers approach to track both maximum and second maximum elements:

1. **Variable Initialization**:
   - `maxi`: Initialized with first element to track the maximum value
   - `smax`: Initialized with -1 to handle cases where no second largest exists

2. **Two Cases While Iterating**:
   - **Case 1**: When we find a new maximum
     - Current maximum becomes second maximum
     - New element becomes maximum
   - **Case 2**: When element is between maximum and second maximum
     - Update second maximum to current element

3. **Why it Works**:
   - We only need to maintain two variables instead of sorting the entire array
   - The order of conditions ensures we never miss a potential second largest
   - Initial -1 value for `smax` handles edge cases automatically



## Dry Run
Let's trace how the algorithm works with the example: arr[] = [12, 35, 1, 10, 34, 1]

| Step | Current Element | maxi | smax | Explanation |
|------|----------------|------|------|-------------|
| Init | 12 (first)     | 12   | -1   | Initialize maxi with first element |
| 1    | 35            | 35   | 12   | 35 > maxi, so old maxi (12) becomes smax |
| 2    | 1             | 35   | 12   | 1 < smax, no change |
| 3    | 10            | 35   | 12   | 10 < smax, no change |
| 4    | 34            | 35   | 34   | 34 is between maxi and smax, update smax |
| 5    | 1             | 35   | 34   | 1 < smax, no change |

Final Result: smax = 34 (Second largest element)

