
//Source.cpp
#include <iostream>
#include "List.h"
using namespace std;

List makeList(int arr[], int size)
{
    List newList;

    // ������ ����� ������� ������ arr �� ������ ������
    for (int i = 0; i < size; ++i)
    {
        newList.add_begin(arr[i]);
    }

    return newList;
}

int main()
{
    List myList;

    myList.Init();  // ���������� ������

    myList.Read();  // ������� �������� ������ � ������

    myList.Display();  // �������� �������� ������ �� �����

    int numElements;
    std::cout << "Enter the number of elements: ";
    std::cin >> numElements;

    // ������� ������ ������������ �������� �� ������ �� �� ������
    for (int i = 0; i < numElements; ++i)
    {
        int element;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> element;
        myList.add_begin(element);
    }

    // ³��������� �������� ������ �� �������
    std::cout << "Elements in forward order: ";
    myList.displayForward();

    // ������� ������ ������
    myList.bubbleSort();

    // ³��������� ���������� �������� ������ �� �������
    std::cout << "Sorted elements in forward order: ";
    myList.displayForward();

    myList.del_begin();
    std::cout << "Elements after removal in forward order: ";
    myList.displayForward();

    // ������ ������� ������� � ������ ������
    int searchValue;
    std::cout << "Enter element to search: ";
    std::cin >> searchValue;
    if (myList.del_mid(searchValue)) {
        std::cout << "Element " << searchValue << " found in the list." << std::endl;
        std::cout << "Elements after removal in forward order: ";
        myList.displayForward();
    }
    else
        std::cout << "Element " << searchValue << " not found in the list." << std::endl;

    return 0;
}



