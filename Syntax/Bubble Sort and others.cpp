#include <iostream>
#include <vector>

/*
    #include <algorithm>
    ? std::sort (Introsort) – Fastest general-purpose
    int main() {
        int arr[] = {5, 3, 1, 4, 2};
        int n = sizeof(arr) / sizeof(arr[0]);

        std::sort(arr, arr + n);

        for (int i = 0; i < n; ++i)
            std::cout << arr[i] << " ";
    }

    ? std::stable_sort (Merge Sort) – Stable but slightly slower
    int main() {
        int arr[] = {5, 3, 1, 4, 2};
        int n = sizeof(arr) / sizeof(arr[0]);

        std::stable_sort(arr, arr + n);

        for (int i = 0; i < n; ++i)
            std::cout << arr[i] << " ";
    }
*/


using namespace std;

void bubbleSort(vector<int>& v) {
    int n = v.size();

    // Outer loop that corresponds to the number of
    // elements to be sorted
    for (int i = 0; i < n - 1; i++) {

        // Last i elements are already
        // in place
        for (int j = 0; j < n - i - 1; j++) {
          
          	// Comparing adjacent elements
            if (v[j] > v[j + 1])
              
              	// Swapping if in the wrong order
                swap(v[j], v[j + 1]);
        }
    }
}

int main() {
    vector<int> v = {5, 1, 4, 2, 8};

    // Sorting the vector v
    bubbleSort(v);
    for (auto i : v)
        cout << i << " ";
    return 0;
}
