#include "Node.hpp"

class LinkedList
{
    private:
        Node* head;
        Node* tail;
        int count;
        Node* get(int index);
        void swap(int index1, int index2);

    public:
        LinkedList();
        void addEnd(Card* c);
        void display();
        int getCount();
        void insertionSortOnDefense();
};