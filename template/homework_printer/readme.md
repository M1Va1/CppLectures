### Task: Implement the [`PrintArray`](array.cpp#L4 "Go to definition") Function

#### Objective
Implement the [`PrintArray`](array.cpp#L4 "Go to definition") function to print the elements of a [`std::array`](https://en.cppreference.com/w/cpp/container/array "Go to definition") passed to it. The function should be able to handle arrays of different types, such as integers and strings.

#### Steps
1. **Template Function**: Use a template to allow the function to handle arrays of any type.
2. **Iterate and Print**: Iterate through the array and print each element, followed by a space.
3. **End with Newline**: Ensure the output ends with a newline for readability.

#### Pseudocode
1. Define a template function [`PrintArray`](array.cpp#L4 "Go to definition") that takes a [`std::array`](https://en.cppreference.com/w/cpp/container/array "Go to definition") as a parameter.
2. Use a range-based for loop to iterate through the array.
3. Print each element followed by a space.
4. Print a newline after the loop completes.

#### Notes

- The template parameters allow the function to be flexible with different types and sizes of [`std::array`](https://en.cppreference.com/w/cpp/container/array "Go to definition").