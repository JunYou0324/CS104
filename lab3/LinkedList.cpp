#include "LinkedList.h"

LinkedList::LinkedList() {
    this->head = nullptr;
}

LinkedList::~LinkedList() {
    //TODO WITH LAB INSTRUCTOR
}

void LinkedList::add(int data) {
    Node* node = new Node();
    node->data = data;
    node->next = this->head;
    this->head = node;
}

void LinkedList::InsertNth(int index, int data) {
    //TODO
    //Good luck :)
}

int LinkedList::NthFromEnd(int n) {
    //TODO
    //Good luck :)
    return -1;
}