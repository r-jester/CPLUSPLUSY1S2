//Delete Element in array #1
#include <iostream>

int main(){
    system("cls");
    int arr[5] = {1, 2, 3, 4, 5};
    int x, i, j;
    const int SIZE = 5;
    
    for(i = 0; i < SIZE; i++){
        std::cout << "\tValue of index[" << i << "]: " << arr[i] << "\n";
    }

    std::cout << "\tEnter position to remove (0 to 4): ";
    std::cin >> x;

    // Check if the position is within the bounds of the array
    if (x < 0 || x >= SIZE) {
        std::cout << "Invalid position!\n";
        return 1;
    }

    // Create a new array with one less element
    int newArr[SIZE - 1];

    // Copy elements to the new array, skipping the one to be deleted
    for(i = 0, j = 0; i < SIZE; i++){
        if (i == x) continue; // Skip the element to be deleted
        newArr[j++] = arr[i];
    }

    // Output the new array
    for(i = 0; i < SIZE - 1; i++){
        std::cout << "\tValue of newArr[" << i << "]: " << newArr[i] << "\n";
    }

    return 0;
}
//Delete Element in array #2
#include <iostream>

int main() {
    int n = 5; // Initial size of the array
    int* arr = new int[n]{1, 2, 3, 4, 5}; // Dynamically allocated array
    int x, i;

    std::cout << "Initial array contents:\n";
    for (i = 0; i < n; ++i) {
        std::cout << "\tValue of index[" << i << "]: " << arr[i] << "\n";
    }

    std::cout << "\tEnter position to remove: ";
    std::cin >> x;

    if (x < 0 || x >= n) {
        std::cout << "Invalid position.\n";
        delete[] arr;
        return 1;
    }

    // Shift elements to the left to remove the element at position x
    for (i = x; i < n - 1; ++i) {
        arr[i] = arr[i + 1];
    }

    // Decrease the size of the array
    n--;

    // Display the updated array
    std::cout << "Array after removal:\n";
    for (i = 0; i < n; ++i) {
        std::cout << "\tValue of index[" << i << "]: " << arr[i] << "\n";
    }

    delete[] arr;
    return 0;
}
//Credit ChatGPT(OpenAI)