//
// Created by Nero Sparda on 23/12/23.
//

#ifndef DSA_ARRAYLIST_H
#define DSA_ARRAYLIST_H


class ArrayList {
    int* arr;
    int num_elements;
    int capacity;

public:
    explicit ArrayList(int size);
    void resize();
    void insert(int val);
    [[nodiscard]] int length() const;
    void print();
    int getAt(int index);
};


#endif //DSA_ARRAYLIST_H
