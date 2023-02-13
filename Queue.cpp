
#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

// void Queue::enqueue(Item * newItem);
// Item * Queue::dequeue();
// Item * Queue::peek();
// bool Queue::isEmpty();

class Item {
    public:
        int value;
        Item * next;
        Item(int value) {
            this->value = value;

            this->next = NULL;
        }
};

class Queue {
    public:
        Item * head;
        Item * tail;
        Queue() {
            this->head = NULL;
            this->tail = NULL;
        }
        void enqueue(Item * newItem) {
            if (this->head == NULL) {
                this->head = newItem;
                this->tail = newItem;
            } else {
                this->tail->next = newItem;
                this->tail = newItem;
            }
        }
        Item * dequeue() {
            if (this->head == NULL) {
                return NULL;
            } else {
                Item * temp = this->head;
                //
                this->head = this->head->next;
                return temp;
            }
        }
        Item * peek() {
            return this->head;
        }
        bool isEmpty() {
            return this->head == NULL;
        }
};