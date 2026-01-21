#include <iostream>
#include <vector>
#include <algorithm>

// Function to find the union of two sorted arrays
std::vector<int> sortedArrayUnion(std::vector<int>& a, std::vector<int>& b) {
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    std::vector<int> unionArr;

    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) {
            if (unionArr.empty() || unionArr.back() != a[i]) {
                unionArr.push_back(a[i]);
            }
            i++;
        } else {
            if (unionArr.empty() || unionArr.back() != b[j]) {
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }

    // Append remaining elements of array 'a'
    while (i < n1) {
        if (unionArr.empty() || unionArr.back() != a[i]) {
            unionArr.push_back(a[i]);
        }
        i++;
    }

    // Append remaining elements of array 'b'
    while (j < n2) {
        if (unionArr.empty() || unionArr.back() != b[j]) {
            unionArr.push_back(b[j]);
        }
        j++;
    }

    return unionArr;
}

int main() {
    // Example 1
    std::vector<int> arr1 = {1, 2, 3, 4, 5};
    std::vector<int> arr2 = {3, 4, 5, 6, 7};
    std::vector<int> union_result1 = sortedArrayUnion(arr1, arr2);

    std::cout << "Union of {1, 2, 3, 4, 5} and {3, 4, 5, 6, 7} is: ";
    for (int num : union_result1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Example 2
    std::vector<int> arr3 = {1, 1, 2, 3, 3, 4};
    std::vector<int> arr4 = {2, 3, 3, 4, 5};
    std::vector<int> union_result2 = sortedArrayUnion(arr3, arr4);

    std::cout << "Union of {1, 1, 2, 3, 3, 4} and {2, 3, 3, 4, 5} is: ";
    for (int num : union_result2) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}







#include <iostream>
#include <vector>

// Function to find the intersection of two sorted arrays
std::vector<int> sortedArrayIntersection(std::vector<int>& a, std::vector<int>& b) {
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    std::vector<int> intersectionArr;

    while (i < n1 && j < n2) {
        // Skip duplicate elements in array 'a'
        if (i > 0 && a[i] == a[i - 1]) {
            i++;
            continue;
        }

        // Compare elements
        if (a[i] < b[j]) {
            i++;
        } else if (b[j] < a[i]) {
            j++;
        } else {
            // Elements are equal, so it's an intersection
            intersectionArr.push_back(a[i]);
            i++;
            j++;
        }
    }

    return intersectionArr;
}

int main() {
    // Example 1
    std::vector<int> arr1 = {1, 2, 3, 4, 5};
    std::vector<int> arr2 = {3, 4, 5, 6, 7};
    std::vector<int> intersection_result1 = sortedArrayIntersection(arr1, arr2);

    std::cout << "Intersection of {1, 2, 3, 4, 5} and {3, 4, 5, 6, 7} is: ";
    for (int num : intersection_result1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Example 2
    std::vector<int> arr3 = {1, 1, 2, 3, 3, 4};
    std::vector<int> arr4 = {2, 3, 3, 4, 5};
    std::vector<int> intersection_result2 = sortedArrayIntersection(arr3, arr4);

    std::cout << "Intersection of {1, 1, 2, 3, 3, 4} and {2, 3, 3, 4, 5} is: ";
    for (int num : intersection_result2) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}


