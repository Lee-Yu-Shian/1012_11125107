#include <iostream>
#include<cstdlib> 
#include<cstring>
#include <typeinfo>

using namespace std;
#pragma once

template<class T>
class Stack {
private:
    T* stack_elements; // 堆疊元素量
    int top; // 堆疊頂部指標
    int capacity; // 堆疊容量

public:
    Stack();//動態記憶體自動配置
    Stack(int cap);//手動輸入空間值
    ~Stack();//解構子delete[]
    bool IsEmpty();//檢查是否為空，T:為空；F:不為空
    T& Top();//頂部元素
    void Push(T &item);//放入元素
    T Pop();//取出元素
};

template<class T>
Stack<T>::Stack() : stack_elements(NULL), top(-1), capacity(0) {}//預設值

template<class T>
Stack<T>::Stack(int cap) : top(-1), capacity(cap) {
    stack_elements = new T[capacity];
}

template<class T>
Stack<T>::~Stack() {
    delete[] stack_elements;
}

template<class T>
bool Stack<T>::IsEmpty() {
    if (top == -1)
        return true;
    else
        return false;
}

template<class T>
T& Stack<T>::Top() {
    if (top == -1) {
        throw std::runtime_error("Stack is empty.");//出現空時報錯
    }
    return stack_elements[top];//輸出top指標所指的位置
}

template<class T>
void Stack<T>::Push(T &item) {
    if (top == capacity - 1) {
        throw std::runtime_error("Stack is full.");//當空間滿時報錯
    }
    stack_elements[++top] = item;//新物件加入時，top值++
}

template<class T>
T Stack<T>::Pop() {
    if (top == -1) {
        throw std::runtime_error("Stack is empty.");//當內部無值時報錯
    }
    return stack_elements[top--];//物件取出時top值--
}

template <class T>
void mySwap(T &x, T &y)
{
    T temp = x;
    x = y;
    y = temp;
}

//complex
class complex
{
private:
    float real;
    float image;
public:
    complex();
    ~complex(){};
    complex(float,float);
    int set(float,float);
    void print();
    float GetReal();
    float GetImage();
    complex operator=(complex src);//等號(class+class)
    complex operator+(complex src);
};

