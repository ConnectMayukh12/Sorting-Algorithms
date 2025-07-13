# Sorting Algorithms: Detailed Analysis

This document explains five fundamental sorting algorithms in detail, including their **best**, **average**, and **worst-case** time complexities, along with simple examples.

---

## ✨ Bubble Sort

### How it works
- Repeatedly compares adjacent elements and swaps them if they are in the wrong order.
- After each full pass, the largest element "bubbles up" to the end.

### Time complexities
| Case       | Time Complexity |
|-------------|-----------------|
| Best        | O(n)            |
| Average     | O(n²)           |
| Worst       | O(n²)           |

#### Best case example
Array: `[1, 2, 3, 4, 5]` (Already sorted)

- Only one pass is needed (with no swaps). Hence, **O(n)**.

#### Worst case example
Array: `[5, 4, 3, 2, 1]` (Completely reversed)

- Maximum number of swaps and passes needed. Hence, **O(n²)**.

---

## 🔥 Selection Sort

### How it works
- Finds the minimum element and swaps it with the first unsorted element.
- Repeats for the remaining subarray.

### Time complexities
| Case       | Time Complexity |
|-------------|-----------------|
| Best        | O(n²)           |
| Average     | O(n²)           |
| Worst       | O(n²)           |

#### Example
Array: `[64, 25, 12, 22, 11]`

- After first pass: `[11, 25, 12, 22, 64]`
- After second pass: `[11, 12, 25, 22, 64]`
- After third pass: `[11, 12, 22, 25, 64]`
- And so on.

> **Note:** Selection Sort does not change its time complexity even if the array is sorted, since it always looks for the minimum in the unsorted part.

---

## ⚡ Insertion Sort

### How it works
- Builds the sorted array one element at a time by inserting each element into its correct position.

### Time complexities
| Case       | Time Complexity |
|-------------|-----------------|
| Best        | O(n)            |
| Average     | O(n²)           |
| Worst       | O(n²)           |

#### Best case example
Array: `[1, 2, 3, 4, 5]` (Already sorted)

- Only comparisons needed, no shifting. Hence, **O(n)**.

#### Worst case example
Array: `[5, 4, 3, 2, 1]`

- Every new element has to be compared and shifted. Hence, **O(n²)**.

---

## ⚔️ Quick Sort

### How it works
- Picks a **pivot** element, partitions the array into two subarrays (elements less than pivot and greater than pivot), then recursively sorts the subarrays.

### Time complexities
| Case       | Time Complexity |
|-------------|-----------------|
| Best        | O(n log n)      |
| Average     | O(n log n)      |
| Worst       | O(n²)           |

#### Best case example
Pivot always divides array into two equal halves.

- Example: Random shuffled array with good pivot choices.

#### Worst case example
Already sorted or reverse sorted array if the first element is always chosen as pivot.

- Example: `[1, 2, 3, 4, 5]` when always picking first element as pivot. Then each partition is size n-1, leading to **O(n²)**.

---

## 💎 Merge Sort

### How it works
- Divides the array into halves recursively, then merges sorted halves.

### Time complexities
| Case       | Time Complexity |
|-------------|-----------------|
| Best        | O(n log n)      |
| Average     | O(n log n)      |
| Worst       | O(n log n)      |

#### Example
Array: `[38, 27, 43, 3, 9, 82, 10]`

- Divide into `[38, 27, 43, 3]` and `[9, 82, 10]`
- Keep dividing until single elements, then merge back in sorted order.

> **Note:** Merge Sort always has O(n log n) time complexity regardless of input arrangement, but it uses additional space.

---

## 🟢 Summary Table

| Algorithm      | Best Case | Average Case | Worst Case | Space Complexity | Stability    |
|----------------|-----------|--------------|------------|------------------|--------------|
| Bubble Sort    | O(n)      | O(n²)       | O(n²)    | O(1)           | Stable       |
| Selection Sort | O(n²)     | O(n²)       | O(n²)    | O(1)           | Not stable   |
| Insertion Sort | O(n)      | O(n²)       | O(n²)    | O(1)           | Stable       |
| Quick Sort     | O(n log n)| O(n log n) | O(n²)   | O(log n)      | Not stable   |
| Merge Sort     | O(n log n)| O(n log n) | O(n log n) | O(n)        | Stable       |

---



