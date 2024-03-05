
#pragma once
#include <iostream>
struct Node
    {
        int key;
        Node* next;

        // Конструктор вузла, ініціалізує дані та вказівники на nullptr
        //Node(int value) : key(value), next(nullptr) {}

        // Методи доступу для полів класу Node
        int getData() const { return key; }
        Node* getNext() const { return next; }
        void setData(int value) { key = value; }
        void setNext(Node* nextNode) { next = nextNode; }
    };
class List
{
private:
    // Клас Node внутрішньо вбудований у клас List та представляє собою вузол (елемент) у списку
    

    Node* first;   // Вказівник на початковий вузол списку

public:
    // Конструктор класу List, ініціалізує початковий та кінцевий вузли списку
    List() : first(nullptr) {}

    // Методи для ініціалізації, зчитування, виведення на екран та операцій з елементами списку
    void Init();
    void Read();
    void Display();
    bool ListEmpty();
    void add_begin(int value);
    void add_end(int value);
    void del_begin();
    void del_end();
    void swap(Node* a, Node* b);
    void bubbleSort();
    void displayForward() const;
    Node* search(int targetKey);
    bool del_mid(int value);
};

// Функція makeList створює об'єкт класу List на основі заданого масиву та його розміру
List makeList(int arr[], int size);
