#include <iostream>

int main(){
    system("cls");
    int n,i,x;
    std::cout << "Enter amount of array: ";
    std::cin >> n;
    int arr[n];
    for(i = 0; i < n; i++){
        std::cout << "Number: " << i + 1 << " Enter Value: ";
        std::cin >> arr[i];
    }

    for(i = 0; i < n; i++){
        std::cout << "Number: " << i + 1 << " Value of index[" << i << "]: " << arr[i] << '\n';
    }

    std::cout << "Enter position to delete: ";
    std::cin >> x;

    for(i = x; i < n; i++){
        arr[i-1] = arr[i];

    }

    n -= 1;

    for(i = 0; i < n; i++){
        std::cout << "Number: " << i+1 << " Value of index[" << i << "]: " << arr[i] << '\n';
    }
    return 0;
}