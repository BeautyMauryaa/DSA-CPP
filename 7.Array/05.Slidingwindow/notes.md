# Sliding Window Technique — Notes

## When to use it?
Whenever a problem asks you to optimize some property of a **contiguous subarray/substring** (max/min sum, longest/shortest length, count) — sliding window solves it in O(n) where brute force would take O(n²) or O(n³).

**Signal words:** "contiguous", "subarray", "substring", "window of size k", "longest/shortest without repeating"

---

## Type 1: Fixed-Size Window

Window size `k` stays constant. One element is added, one is removed — both ends are known in advance.

### Template
```cpp
int windowSum = 0;
for (int i = 0; i < k; i++) windowSum += nums[i];   // initial window

int result = windowSum;
for (int i = k; i < n; i++) {
    windowSum += nums[i] - nums[i - k];   // slide: add new, remove old
    result = max(result, windowSum);       // or whatever you're tracking
}
```

**Key idea:** the element at index `i - k` always falls out of the window when the `i`-th element enters.

**Solved:** LeetCode 643 — Maximum Average Subarray I ✅

---

## Type 2: Variable-Size Window (Two Pointers)

Window size is not fixed — keep expanding (`right++`) while the condition holds, shrink (`left++`) when it's violated.

### Template
```cpp
int left = 0, result = 0;
// some tracking structure: set/map/counter

for (int right = 0; right < n; right++) {
    // 1. include nums[right] in window

    while (/* window becomes invalid */) {
        // 2. shrink from left, remove nums[left]
        left++;
    }

    // 3. update result using current valid window [left, right]
    result = max(result, right - left + 1);
}
```

**Key idea:** `right` only moves forward, `left` only moves forward — together they do O(n) + O(n) = O(2n) = **O(n)** (that's why it's also called "two pointer", not brute force).

**Solved:** LeetCode 3 — Longest Substring Without Repeating Characters ✅
(Used `unordered_set` for O(1) duplicate check)

---

## Fixed vs Variable — Quick Comparison

| | Fixed-size | Variable-size |
|---|---|---|
| Window size | Constant `k` | Changes dynamically |
| Pointers | 1 (loop index) + implicit left | 2 explicit (`left`, `right`) |
| Shrink logic | Automatic (`i-k`) | `while` loop, condition-based |
| Common use | Avg/sum of size-k window | Longest/shortest substring with constraint |

---

## Common Data Structures Paired with Sliding Window
- `unordered_set` → duplicate/uniqueness check (O(1) lookup)
- `unordered_map<char/int, int>` → frequency counting (e.g., "at most K distinct chars")
- Simple `int` counter → sum, count of specific condition
- `deque` → sliding window maximum/minimum (monotonic deque)

---

## Mistakes to Avoid
- Miscalculating the `i - k` index in fixed windows (off-by-one)
- Using `if` instead of `while` in variable windows (can miss multiple shrinks)
- Updating result at the wrong point in the loop (usually correct position is after shrinking)
- Forgetting empty string/array edge cases

---

## Next Topics to Try
- Longest Substring with At Most K Distinct Characters (map-based variable window)
- Minimum Window Substring (LC 76) — harder variable window
- Sliding Window Maximum (LC 239) — deque-based
- Fruit Into Baskets (LC 904) — variable window, at most 2 types