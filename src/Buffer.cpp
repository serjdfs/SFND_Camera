//
// Created by Sergio Delbouis on 08.10.19.
//

#include "Buffer.h"

template<typename T>
Buffer<T>::Buffer(unsigned size) : buffer(0){
    Buffer::max_size = size;
}

template<typename T>
void Buffer<T>::push_back(T input){
    if (Buffer::size() < Buffer::max_size)
    {
        Buffer::buffer.push_back(input);
        return;
    }
    Buffer::buffer.erase(Buffer::buffer.begin());
    Buffer::buffer.push_back(input);
}

template<typename T>
int Buffer<T>::size(){
    return Buffer::buffer.size();
}

template<typename T>
typename std::vector<T, std::allocator<T>>::iterator Buffer<T>::end() {
    return Buffer::buffer.end();
}
