#include "List.h"
#include <iostream>
using namespace std;

void List::add_begin(int data)
{
    Node* temp = new Node;
    temp->key = data;
    temp->next = first;
    first = temp;
}

void List::del_begin()
{
    if (ListEmpty()) {
        cout << "List is empty" << endl;
        return;
    }
    Node* temp = first;
    first = temp->next;
    delete temp;
    return;
}

void List::add_end(int data)
{
    Node* temp = new Node;
    temp->key = data;
    temp->next = NULL;

    if (first == NULL) {
        first = temp;
        return;
    }

    Node* current = first;
    while (current->next != NULL) current = current->next;
    current->next = temp;
    return;
}



void List::del_end()
{
    if (ListEmpty()) {
        cout << "List is empty" << endl;
        return;
    }
    Node* temp = first;
    Node* prev = NULL;

    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    if (prev == NULL) {
        delete temp;
        first = NULL;
        return;
    }

    prev->next = NULL;
    delete temp;
    return;
}

void List::Init()
{
    first = nullptr;
}

void List::Read()
{
    Init();  // Ініціалізуємо список перед введенням нових даних
    int numElements;
    std::cout << "Enter the number of elements: ";
    std::cin >> numElements;

    int i = 0;
    while (i < numElements)
    {
        int element;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> element;
        add_begin(element);  // Додаємо елемент до списку
        ++i;
    }
}


void List::Display()
{
    Node* temp = first;
    while (temp != NULL)
    {
        cout << temp->key << " ";
        temp = temp->next;
    }
    cout << endl;
}
bool List::ListEmpty()
{
    if (first == NULL) return true;
    else return false;
}

void List::swap(Node* a, Node* b) {
    int temp = a->key;
    a->key = b->key;
    b->key = temp;
}

void List::bubbleSort() {
    if (first == NULL || first->next == NULL) return;
    
    bool swapped;
    Node* current;
    Node* last_sorted_element = NULL;

    do {
        swapped = false;
        current = first;

        while (current->next != last_sorted_element) {
            if (current->key > current->next->key) {
                swap(current, current->next);
                swapped = true;
            }
            current = current->next;
        }
        last_sorted_element = current;
    } while (swapped);
}
void List::displayForward() const
{
    Node* current = first;
    while (current != nullptr)
    {
        std::cout << current->key << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

Node* List::search(int targetKey) {
    Node* temp = first;
    while (temp != NULL)
    {
        if (temp->key == targetKey) {
            return temp;
        }
        temp = temp->next;
    }
    return NULL; // Element is not found
}

bool List::del_mid(int targetKey) {
    Node* pkey = search(targetKey);
    if (pkey == NULL) return false; // Element not found

    if (pkey == first) {
        first = first->next; // Update first if the key to be deleted is the first node
        delete pkey;
        return true;
    }

    Node* temp = first;
    while (temp->next != NULL && temp->next != pkey) {
        temp = temp->next;
    }

    if (temp->next == NULL) return false; // Key not found

    temp->next = pkey->next; // Bypass the node to be deleted
    delete pkey;
    return true;
}

