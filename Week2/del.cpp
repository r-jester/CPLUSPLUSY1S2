
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
	int size = deleteElement(a, sizeof(a)/sizeof(a[0]), 4);

	std::cout << "size: " << size << "\n";
	for (int i = 0; i < size; i++){
		std::cout << a[i] << std::endl;
	}

	return 0;
}