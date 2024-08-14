### Task: Implement Const and Non-Const Iterators for [`Vectorochek`](../vectorochek.cpp#L5 "Go to definition")

You need to implement both const and non-const iterators for the [`Vectorochek`](../vectorochek.cpp#L5 "Go to definition") class, which you have already implemeted. The iterators should allow traversal of the elements in the vector, and the const iterator should prevent modification of the elements.

Actually, const and non-const iterators implementation are almost the same, the only difference is which `type` they 'contain' (`return` when you direference it, to be formal). If only C++ had a mechanism to help with this. Oh, wait...

#### Requirements:

1. **Iterator Base Class Template**:
   - Create a base class template `iterator_base` that will be used for both const and non-const iterators.
   - The class should include:
     - A pointer to the element.
     - Overloaded operators for dereferencing (`*`), member access (`->`), and increment (`++`).
     - Equality (`==`) and inequality (`!=`) operators.

2. **Non-Const Iterator**:
   - Define a type alias `iterator` using the `iterator_base` template with the type `T`.
   - Implement `begin()` and `end()` methods to return non-const iterators.

3. **Const Iterator**:
   - Define a type alias `const_iterator` using the `iterator_base` template with the type `const T`.
   - Implement `begin()` and `end()` methods to return const iterators.

4. **Testing**:
   - Ensure that the non-const iterator allows modification of elements.
   - Ensure that the const iterator does not allow modification of elements.

#### Pseudocode:

1. **Iterator Base Class Template**:
   - Define `iterator_base` with a pointer to the element.
   - Implement dereference, member access, increment, equality, and inequality operators.

2. **Non-Const Iterator**:
   - Define `iterator` as `iterator_base<T>`.
   - Implement `begin()` and `end()` methods to return `iterator(data_)` and `iterator(data_ + vec_size_)`.

3. **Const Iterator**:
   - Define `const_iterator` as `iterator_base<const T>`.
   - Implement `begin()` and `end()` methods to return `const_iterator(data_)` and `const_iterator(data_ + vec_size_)`.

4. **Testing**:
   - Use non-const iterator to modify elements and verify changes.
   - Use const iterator to traverse elements and ensure no modifications are allowed.

Also, i forgot in prrevious task to mention about copy constructor, and in C++ it will be implicitly declared... What's the problem, you ask. The problem with the default copy constructor in C++ is that it performs a shallow copy. This means it copies the values of the class fields as they are, including pointers. If your class manages resources like dynamic memory, a shallow copy will result in multiple objects pointing to the same memory location. This can lead to issues such as:

Double Free Errors: When one object is destroyed, it will free the memory. If another object still points to the same memory and tries to free it again, it will cause a runtime error.
Data Corruption: Modifying the data through one object will affect all other objects that share the same memory, leading to unexpected behavior.
To avoid these issues, you need to implement a custom copy constructor that performs a deep copy, allocating new memory and copying the actual data.

5. **Copy Constructor**:
   - Implement a copy constructor to ensure deep copying of the `vectorochek` object.
   - The copy constructor should allocate new memory and copy the elements from the source object to the new object.