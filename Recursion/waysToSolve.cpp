#include <iostream>
#include <vector>
using namespace std;

/*
 * Count Ways to sum the number.
 */

int countWaysToSolve(int arr[], int size, int sum)
{
    // base case.
    if (sum == 0)
    {
        return 1;
    }
    if (sum < 0)
    {
        return 0;
    }

    long long ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans += countWaysToSolve(arr, size, sum - arr[i]);
    }
}

int main()
{
}