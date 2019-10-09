//
// Created by Sergio Delbouis on 08.10.19.
//

#ifndef CAMERA_FUSION_BUFFER_H
#define CAMERA_FUSION_BUFFER_H

#include <vector>
#include <iterator>

template<typename T>
class Buffer {
public:
    explicit Buffer(unsigned size);
    void push_back(T input);
    int size();
    typename std::vector<T, std::allocator<T>>::iterator end();
private:
    std::vector<T> buffer;
    unsigned max_size;
};

#endif //CAMERA_FUSION_BUFFER_H
