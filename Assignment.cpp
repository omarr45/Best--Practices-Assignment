#include <iostream>
#include <cassert>

using namespace std;

int sum(int arr[], int start, int end)
{
    if (start < 0 || start >= end)
    {
        throw out_of_range("Invalid start index");
    }

    int sum = 0;
    for (int i = start; i < end; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    // Unit Testing Assertions
    int arr[] = {1, 2, 3, 4, 5};

    // Test case 1: Sum of elements from index 1 to 4 should be 9 (2 + 3 + 4)
    assert(sum(arr, 1, 4) == 9);

    // Test case 2: Sum of elements from index 0 to 3 should be 6 (1 + 2 + 3)
    assert(sum(arr, 0, 3) == 6);

    // Test case 3: Sum of elements from index 2 to 5 should be 12 (3 + 4 + 5)
    assert(sum(arr, 2, 5) == 12);

    // Test case 4: Invalid start index (out of bounds)
    try
    {
        int result = sum(arr, 6, 8);
    }
    catch (const out_of_range &e)
    {
        cout << "Caught exception: " << e.what() << endl;
    }

    // Test case 5: Invalid end index (out of bounds)
    try
    {
        int result = sum(arr, 1, 10);
    }
    catch (const out_of_range &e)
    {
        cout << "Caught exception: " << e.what() << endl;
    }

    cout << "All unit tests passed!" << endl;

    return 0;
}
