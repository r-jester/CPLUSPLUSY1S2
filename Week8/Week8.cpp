#include <iostream>

// pointer

int main()
{

    system("cls");

    int *id;
    int ptr = 15;
    
    //&(Address of Operator), *(Dereference of Operator)
    
    id = &ptr;
    std::cout<<"\tValue of ptr  = "<< ptr <<std::endl;
    std::cout<<"\tValue of *id  = "<< *id <<std::endl;
    std::cout<<"\tValue of id   = "<< id <<std::endl;
    std::cout<<"\tValue of &ptr = "<< &ptr <<std::endl;

    return 0;
}
