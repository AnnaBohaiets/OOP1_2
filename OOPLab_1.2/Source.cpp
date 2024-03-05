
//Source.cpp
#include <iostream>
#include "List.h"
using namespace std;

List makeList(int arr[], int size)
{
    List newList;

    // Додаємо кожен елемент масиву arr до нового списку
    for (int i = 0; i < size; ++i)
    {
        newList.add_begin(arr[i]);
    }

    return newList;
}

int main()
{
    List myList;

    myList.Init();  // Ініціалізуємо список

    myList.Read();  // Зчитуємо елементи списку з консолі

    myList.Display();  // Виводимо елементи списку на екран

    int numElements;
    std::cout << "Enter the number of elements: ";
    std::cin >> numElements;

    // Зчитуємо введені користувачем елементи та додаємо їх до списку
    for (int i = 0; i < numElements; ++i)
    {
        int element;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> element;
        myList.add_begin(element);
    }

    // Відображаємо елементи списку від початку
    std::cout << "Elements in forward order: ";
    myList.displayForward();

    // Сортуємо список вручну
    myList.bubbleSort();

    // Відображаємо відсортовані елементи списку від початку
    std::cout << "Sorted elements in forward order: ";
    myList.displayForward();

    myList.del_begin();
    std::cout << "Elements after removal in forward order: ";
    myList.displayForward();

    // Шукаємо заданий елемент у списку вручну
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



