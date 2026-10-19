# Sorting Recap – Counting Sort & Radix Sort (by Nova)

## Counting Sort

- Only works with *non-negative integers* (limited range).
- Create a *count array* to store frequency of each number.
- Use it to calculate the *position* of each element in the final sorted array.

### When to Use:
- When range of input is small (like 0 to 100).
- Not comparison-based, so it can beat O(n log n) sorts sometimes.

### Time Complexity:
- O(n + k) → where k is the range of input.
- Space: O(k)

Super fast for limited range  
Not good for large range or negative numbers  
Not stable unless modified

---

## Radix Sort

- Sorts numbers *digit by digit, from **least significant to most*.
- Uses *Counting Sort* as a subroutine to sort digits.

### Example:
- For 3-digit numbers: sort by units, then tens, then hundreds.

### Time Complexity:
- O(n * k) → n is number of elements, k is max digit length  
- Works best when digit length is small

Great for sorting long lists of numbers  
Only works with integers  
Stable (if counting sort used stably)

---
