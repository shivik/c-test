int mid = low + (high - low) / 2;

// the mid variable is calculated using the safe formula low + (high - low) / 2 to prevent overflow, 
// ensuring the binary search works correctly even with large values of low and high.


// Sample Code to evaluate the above statement

#include <iostream>

int testShivi(int arr[], int low, int high, int target)
{
    // Base case
    if (low > high)
    {
        return -1; // Element not found
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] == target)
    {
        return mid; // Element found at index mid
    }
    else if (arr[mid] < target)
    {
        return testShivi(arr, mid + 1, high, target); // Search in the right half
    }
    else
    {
        return testShivi(arr, low, mid - 1, target); // Search in the left half
    }
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int target = 13;
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = testShivi(arr, 0, size - 1, target);

    if (result != -1)
    {
        std::cout << "Element found at index: " << result << std::endl;
    }
    else
    {
        std::cout << "Element not found in the array." << std::endl;
    }

    return 0;
}
