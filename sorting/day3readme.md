# Sorting Recap – Quick Sort

## Quick Sort

- Pick a *pivot* (usually first, last, or middle element).
- Rearrange (partition) the array so that:
  - All smaller elements go to the left of the pivot.
  - All bigger elements go to the right.
- Then repeat the same steps (recursively) on both sides.

It also follows *Divide & Conquer* like Merge Sort.

### Time Complexity:
- Best Case: O(n log n)
- Average Case: O(n log n)
- Worst Case: O(n²) → happens if bad pivot is chosen (like always picking smallest/largest in sorted array)

Super fast in practice  
In-place (no extra space)  
 Not a stable sort (equal elements’ order might change)

-