### Task: Implement the [`Vectorochek`](vectorochek.cpp#L5 "Go to definition") Class

You need to implement the [`Vectorochek`](vectorochek.cpp#L5 "Go to definition") class in the provided [`vectorochek.cpp`](vectorochek.cpp "vectorochek.cpp") file. The class should mimic the behavior of a dynamic array (similar to `std::vector` in C++). Below are the detailed requirements for each method and member function:

1. **Constructor**:
   - Initialize the vector with a given size.
   - Allocate memory for the elements.
   - Initialize the elements to a default value.

2. **Destructor**:
   - Release any allocated memory.

3. **size()**:
   - Return the current number of elements in the vector.

4. **capacity()**:
   - Return the current capacity of the vector (the total number of elements it can hold without reallocating).

5. **push_back()**:
   - Add an element to the end of the vector.
   - If the current capacity is not enough, reallocate memory to accommodate the new element.

6. **operator[]**:
   - Provide access to elements by index.
   - Implement both non-const and const versions.

7. **Specialization for `bool`**:
   - Implement a specialization of the [`Vectorochek`](vectorochek.cpp#L5 "Go to definition") class for `bool` type.
   - Use bit manipulation to store `bool` values efficiently.

### Pseudocode

1. **Constructor**:
   - Initialize `size_` to `size`.
   - Initialize `capacity_` to `size`.
   - Allocate memory for `data_` with `new` operator.

2. **Destructor**:
   - Use `delete[]` to free `data_`.

3. **size()**:
   - Return `size_`.

4. **capacity()**:
   - Return `capacity_`.

5. **push_back()**:
   - Check if `size_` is equal to `capacity_`.
     - If true, reallocate memory with double the capacity.
   - Add the new element to `data_[size_]`.
   - Increment `size_`.

6. **operator[]**:
   - Return the element at the given index. Think about return type of `operator[]`

### Notes

- Think about return type of `operator[]`, and what to do for `<bool>` specialization. Just specify a problem (and a possible solution).