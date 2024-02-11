/**
 *Programmer: Alisha Zaidi
 *Date: 10 February, 2024
*/

#include <iostream>
include namespace std;

//Making function for sum of subset
bool SubsetSum(int arr[], int size, int targetSum, int currentSum = 0) {
    if (size == 0) {
        return currentSum == targetSum;
    }//endingif

    //Add element in the subset sum
    bool include = SubsetSum(arr, size - 1, targetSum, currentSum + arr[size - 1]);

    //Subtract element from the subset sum
    bool exclude = SubsetSum(arr, size - 1, targetSum, currentSum);

    return include || exclude;
}//ending function

int main() {
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int targetSum = 8;

    if (hasSubsetSum(arr, size, targetSum)) {
        std::cout << "Subset with sum " << targetSum << " exists.\n";
    }//ending if

    else {
        std::cout << "Subset with sum " << targetSum << " does not exist.\n";
    }//ending else

    return 0;
}//end main