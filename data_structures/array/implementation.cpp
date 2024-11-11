#include <iostream>
#include <sstream>

using namespace std;

template<typename T>
class DynamicArray {
private:
    int length;
    int capacity;
    T *data;

    void resize() {
        capacity *= 2;
        T *newData = new T[capacity];
        for (int i = 0; i < length; ++i) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
    }

public:
    DynamicArray() {
        length = 0;
        capacity = 5;
        data = new T[capacity];
    }

    ~DynamicArray() {
        delete[] data;
    }

    T get(int index) const {
        if (index >= 0 && index < length) {
            return data[index];
        }
        return T();  // Return default value of T if index is out of bounds
    }

    int push(const T &item) {
        if (length >= capacity) {
            resize();
        }
        data[length] = item;
        length++;
        return length;
    }

    T pop() {
        if (length == 0) {
            return T();  // Return default value if array is empty
        }
        T lastItem = data[length - 1];
        data[length - 1] = T();  // Reset the last element
        length--;
        return lastItem;
    }

    T deleteItem(int index) {
        if (index < 0 || index >= length) {
            return T();  // Return default value if index is out of bounds
        }
        T item = data[index];
        shiftItems(index);
        return item;
    }

    void shiftItems(int index) {
        for (int i = index; i < length - 1; ++i) {
            data[i] = data[i + 1];
        }
        data[length - 1] = T();  // Reset the last element
        length--;
    }

    string toString() const {
        ostringstream result;
        result << "length: " << length << ", data: {";
        for (int i = 0; i < length; ++i) {
            result << i << ": " << data[i];
            if (i < length - 1) result << ", ";
        }
        result << "}";
        return result.str();
    }
};

int main() {
    DynamicArray<string> newArray;
    newArray.push("Hi");
    newArray.push("You");
    newArray.push("!");
    newArray.deleteItem(0);
    newArray.push("are");
    newArray.push("nice");
    newArray.deleteItem(1);
    cout << newArray.toString() << endl;

    // Using MyArray with integers
    DynamicArray<int> intArray;
    intArray.push(1);
    intArray.push(2);
    intArray.push(3);
    intArray.pop();
    intArray.deleteItem(0);
    cout << intArray.toString() << endl;

    return 0;
}

