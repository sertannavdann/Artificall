
#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

/class Item {
    private:
        int value;
        Item * next;
        
    public:
        Item(int value) {
            this->value = value;
            this->next = NULL;
        }
        
        friend class Queue;
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
