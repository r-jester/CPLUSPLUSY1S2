#include <iostream>

//datatype arrayname[];

int main(){
    system("cls");
    int list1[5] = {10,20,30,40,50};
    int list2[5][3] = {{10,20,30},
                       {40,50,60},
                       {70,80,90},
                       {100,110,120},
                       {130,140,150}
                       };

    int sum = 0;
    for (int i = 0; i < 5; i++){                   
    std::cout << "Value of array[" << i << "] = " << list1[i] << std::endl;
    sum += list1[i];
    }
    std::cout << "Value of Sum = " << sum << std::endl;
    float avg = sum/5;
    std::cout << "Value of Average = " << avg << std::endl;

    system("cls");

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
        std::cout << "Value of array index[" << i << "][" << j << "]= " << list2[i][j] << "\n";
        }
    }

    return 0;
}