// Problem: Remove Duplicates from a Sorted Array
// Approach: Two-Pointer Technique

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) {
        return 0; // Return 0 if the array is empty
    }

    int j = 0; // Pointer for the unique elements

    // Start from the second element
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] != nums[j]) {
            j++; // Move j forward
            nums[j] = nums[i]; // Update the element at j with the unique element
        }
    }

    return j + 1; // Return the length of the array without duplicates
}

void printVector(const vector<int>& nums) {
    for (int i = 0; i < nums.size(); ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {1, 1, 2};
    int length = removeDuplicates(nums);
    cout << "Array length after removing duplicates: " << length << endl;
    cout << "Array elements: ";
    printVector(nums);

    nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    length = removeDuplicates(nums);
    cout << "Array length after removing duplicates: " << length << endl;
    cout << "Array elements: ";
    printVector(nums);

    return 0;
}