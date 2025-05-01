#include <iostream>
#include <vector>
#include <algorithm> // For std::sort if needed for value search

// --- Template for Binary Searching for a Value ---
// Searches for 'target' in a sorted vector 'arr'.
// Returns the index of the first occurrence found, or -1 if not found.
// Note: Requires the input vector `arr` to be sorted.
int binary_search_value(const std::vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    int result = -1; // Indicates not found

    while (low <= high) {
        // Prevent potential overflow compared to (low + high) / 2
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            result = mid;
            // To find the *very first* occurrence, continue searching left: high = mid - 1;
            // To find the *very last* occurrence, continue searching right: low = mid + 1;
            // For just finding *any* occurrence, we can break:
             break;
        } else if (arr[mid] < target) {
            // Target is in the right half
            low = mid + 1;
        } else {
            // Target is in the left half
            high = mid - 1;
        }
    }
    return result;
}

// --- Template for Binary Search on the Answer ---
// Assumes a monotonic check function `check(mid)` exists.
// `check(x)` returns true if `x` is a feasible or valid answer, false otherwise.

// Example check function (replace with actual problem logic)
// Checks if the potential answer meets some criteria.
// Example: Can we achieve a result <= potential_answer?
// Or: Is it possible to have at least potential_answer items?
bool check(long long potential_answer /*, other parameters needed by check */) {
    // Logic to determine if 'potential_answer' is feasible.
    // Example: Check if array can be split into k segments with max sum <= potential_answer.
    // Return true if feasible, false otherwise.
    return potential_answer >= 42; // Dummy example: feasible if >= 42
}

// Finds the minimum value in the range [low_bound, high_bound] that satisfies check().
// Assumes check(x) is false for x < answer and true for x >= answer.
long long binary_search_on_answer_min(long long low_bound, long long high_bound /*, other params for check */) {
    long long ans = high_bound + 1; // Initialize answer to a value outside the valid range
    long long low = low_bound;
    long long high = high_bound;

    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (check(mid /*, other params */)) {
            // `mid` is a possible answer. Try to find a smaller one.
            ans = mid;
            high = mid - 1;
        } else {
            // `mid` is too small, need a larger potential answer.
            low = mid + 1;
        }
    }
    // If ans remains high_bound + 1, no value in the range satisfied the check.
    return ans;
}


// Finds the maximum value in the range [low_bound, high_bound] that satisfies check().
// Assumes check(x) is true for x <= answer and false for x > answer.
long long binary_search_on_answer_max(long long low_bound, long long high_bound /*, other params for check */) {
    long long ans = low_bound - 1; // Initialize answer to a value outside the valid range
    long long low = low_bound;
    long long high = high_bound;

    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (check(mid /*, other params */)) {
            // `mid` is a possible answer. Try to find a larger one.
            ans = mid;
            low = mid + 1;
        } else {
            // `mid` is too large, need a smaller potential answer.
            high = mid - 1;
        }
    }
    // If ans remains low_bound - 1, no value in the range satisfied the check.
    return ans;
}


// --- Example Usage ---
/*
#include <iostream>
#include <vector>
#include <algorithm> // For std::sort

int main() {
    // --- Example: Binary Search for Value ---
    std::vector<int> sorted_arr = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int target_value = 23;
    // Ensure array is sorted if it's not already
    // std::sort(sorted_arr.begin(), sorted_arr.end());
    int index = binary_search_value(sorted_arr, target_value);
    if (index != -1) {
        std::cout << "Value " << target_value << " found at index " << index << std::endl;
    } else {
        std::cout << "Value " << target_value << " not found." << std::endl;
    }

    // --- Example: Binary Search on Answer (Find Minimum >= 42) ---
    long long min_ans = binary_search_on_answer_min(0, 100); // Search in range [0, 100]
    if (min_ans <= 100) { // Check if an answer was found within the bounds
         std::cout << "Minimum feasible answer (>= 42) is: " << min_ans << std::endl; // Expected: 42
    } else {
         std::cout << "No feasible answer found in range [0, 100]." << std::endl;
    }

    // --- Example: Binary Search on Answer (Find Maximum >= 42) ---
    // We need to adjust the check or use the correct function.
    // Let's assume check(x) means "is x a valid solution?" (returns true if x >= 42)
    // We want the maximum x in [0, 100] for which check(x) is true.
    long long max_ans = binary_search_on_answer_max(0, 100);
     if (max_ans >= 0) { // Check if an answer was found within the bounds
         std::cout << "Maximum feasible answer (>= 42) is: " << max_ans << std::endl; // Expected: 100 (based on dummy check)
    } else {
         std::cout << "No feasible answer found in range [0, 100]." << std::endl;
    }


    return 0;
}
*/