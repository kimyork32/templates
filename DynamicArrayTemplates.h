#ifndef DYNAMICARRAYTEMPLATES_H
#define DYNAMICARRAYTEMPLATES_H
#include <iostream>
using namespace std;

template <typename T>
class DynamicArray
{
private:
    T *data;
    int size;

public:
    DynamicArray(){
        size = 0;
        data = new T[size];
    }

    DynamicArray(T arr[], int size){
        this->size = size;
        data = new T[size];
        for (int i = 0; i < size; i++)
            data[i] = arr[i];
    }

    DynamicArray(const DynamicArray &o){
        size = o.size;
        data = new T[size];
        for (int i = 0; i < size; i++)
            data[i] = o.data[i];
    }

    ~DynamicArray(){
        delete[] data;
    }

    void push_back(const T &value){
        T *temp = new T[size + 1];
        for (int i = 0; i < size; i++)
            temp[i] = data[i];
        temp[size] = value;
        delete[] data;
        data = temp;
        size++;
    }

    void insert(int index, const T &value){
        if (index < 0 || index > size)
            return;
        T *temp = new T[size + 1];
        for (int i = 0; i < size; i++){
            if (i == index)
                temp[i] = value;
            if (i >= index)
                temp[i + 1] = data[i];
            else
                temp[i] = data[i];
        }
        delete[] data;
        data = temp;
        size++;
    }

    void remove(int index){
        if (index < 0 || index >= size)
            return;
        T *temp = new T[size - 1];
        for (int i = 0; i < size - 1; i++){
            if (i >= index)
                temp[i] = data[i + 1];
            else
                temp[i] = data[i];
        }
        delete[] data;
        data = temp;
        size--;
    }

    void print(){
        for (int i = 0; i < size; i++)
            cout << data[i] << " ";
        cout << endl;
    }
    int getSize() const{
        return size;
    }
    
    T& operator[](int index) {
        if (index < 0 || index >= size)
            throw out_of_range("indice fuera del rango");
        return data[index];
    }

    const T& operator[](int index) const {
        if (index < 0 || index >= size)
            throw out_of_range("indice fuera del rango");
        return data[index];
    }
};

#endif