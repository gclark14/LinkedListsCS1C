//
// Created by Gabriel on 12/6/2017.
//

#ifndef HW14_THECLASS_H
#define HW14_THECLASS_H
template<class T>
class List {
public:
    List();

    void push_back(T t);

    void print_items();

    void printReverse();

    void makeReverseCopy(List &list);

    T pop_back();

    void deleteAtIndex(int idx);

    void insertAtIndex(int idx, T insertItem);

    ~List();
    struct Entry {
        T t;
        Entry *next;
        Entry *prev;
    };

private:
    Entry *first;
    Entry *last;
    Entry *node;
    int length;

};

template <class T>
List<T>::List() {
    first = 0;
    last = 0;
    node = 0;
    length = 0;
}

template <class T>
List<T>::~List() {
    if(node == 0){
        return;
    }
    node = last;
    while(node->prev){
        delete node->next;
        node = node->prev;
    }
    delete node;
}

template <class T>
void List<T>::push_back(T t) {
    if (node == 0){
        node = new Entry();
        first = node;
        last = node;
        node->prev = 0;
        node->next = 0;
        node->t = t;
    } else {
        node = last;
        node = new Entry;
        node->prev = last;
        node->next = 0;
        last->next = node;
        length++;
        node->t = t;
        last = node;
    }
}

template <class T>
void List<T>::print_items() {
    for(Entry * entry = first; entry; entry = entry->next){
        std::cout << entry->t << ' ' << entry << '\n';
    }

}

template <class T>
void List<T>::printReverse() {
    for(Entry * entry = last; entry; entry = entry->prev){
        std::cout << entry->t << ' ' << entry << '\n';
    }

}

template <class T>
void List<T>::makeReverseCopy(List &list) {
    for(Entry * entry = last; entry; entry = entry->prev){
        list.push_back(entry->t);
    }

}

#endif //HW14_THECLASS_H
