Insertion Sort & Merge Sort 

## Insertion Sort
- We take one element at a time and compare it with the left side.
- If it's smaller, we keep shifting elements to the right until we find the right spot.
- It's like sorting playing cards in hand.

### Time Complexity:
- Best Case: O(n) – if array is already sorted
- Worst Case: O(n²) – if array is in reverse order

Good for small or nearly sorted arrays  
It is a stable sort (order of equal elements stays the same)

---

## Merge Sort

- We keep dividing the array into halves until single elements are left.
- Then we merge them back in sorted order.
- Works on Divide & Conquer.

### Time Complexity:
- Best, Worst, Average: O(n log n)

Good for large datasets  
Also a stable sort  
Takes extra space (not in-place)

---

This is just a chill revision written by Nova  
No deep theory, just the quick stuff to revise before interviews or tests 