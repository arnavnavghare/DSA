//Problem: Merge Two Sorted Arrays
//Approach: Two-Pointer Technique

#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeSortedArrays(vector<int>& arr1, vector<int>& arr2) {
    vector<int> result;
    int i = 0, j = 0;

    // Merge elements from both arrays
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            result.push_back(arr1[i]);
            i++;
        } else {
            result.push_back(arr2[j]);
            j++;
        }
    }

    // Add remaining elements from arr1
    while (i < arr1.size()) {
        result.push_back(arr1[i]);
        i++;
    }

    // Add remaining elements from arr2
    while (j < arr2.size()) {
        result.push_back(arr2[j]);
        j++;
    }

    return result;
}

int main() {
    vector<int> arr1 = {1, 3, 5};
    vector<int> arr2 = {2, 4, 6};
    vector<int> merged = mergeSortedArrays(arr1, arr2);

    cout << "Merged Array: ";
    for (int num : merged) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}