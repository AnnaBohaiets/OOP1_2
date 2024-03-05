
#pragma once
#include <iostream>
struct Node
    {
        int key;
        Node* next;

        // ����������� �����, �������� ��� �� ��������� �� nullptr
        //Node(int value) : key(value), next(nullptr) {}

        // ������ ������� ��� ���� ����� Node
        int getData() const { return key; }
        Node* getNext() const { return next; }
        void setData(int value) { key = value; }
        void setNext(Node* nextNode) { next = nextNode; }
    };
class List
{
private:
    // ���� Node ��������� ���������� � ���� List �� ����������� ����� ����� (�������) � ������
    

    Node* first;   // �������� �� ���������� ����� ������

public:
    // ����������� ����� List, �������� ���������� �� ������� ����� ������
    List() : first(nullptr) {}

    // ������ ��� �����������, ����������, ��������� �� ����� �� �������� � ���������� ������
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

// ������� makeList ������� ��'��� ����� List �� ����� �������� ������ �� ���� ������
List makeList(int arr[], int size);
