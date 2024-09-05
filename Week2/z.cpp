
#include <iostream>
#include <array>

int deleteElement(int a[], int size, int index){
	bool flag = 0;
	int note;

	for (int i = 0; i < size; i++){
		if (a[i] == index){
			note = i;
			flag = 1;
			break;
		}
	}
	if (flag == 1){
		for (int j = note; j < size-1; j++){
			a[j] = a[j+1];
		}
		size -= 1;
	}

	return size;

}
int main(){
	int a[] = {1,2,3,4,5,6};
    int n;
    int size = deleteElement(a, sizeof(a)/sizeof(a[0]), n);

	for (int i = 0; i < size; i++){
		std::cout << a[i] << std::endl;
	}
	
    std::cout << "Enter position to remve: ";
    std::cin >> n;

    std::cout << "After remove Element\n";
    
    for (int i = 0; i < 6; i++){
        std::cout << a[i] << '\n';
    }
	
    return 0;
}