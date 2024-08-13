#include <iostream>
#include <stdexcept>

// Implement vector
class Vectorochek {
public:
  // Constructor
  Vectorochek(size_t size = 0) {
    // your code here...
  }

  // Destructor
  ~Vectorochek() {
    // your code here...
  }

  // Return the current size of the vector
  size_t size() const {
    // your code here...
  }

  // Return the current capacity of the vector
  size_t capacity() const {
    // your code here...
  }
  // Add an element to the end of the vector
  void push_back(/* value */) {
    // your code here...
  }

  // Access elements by index
  /* return type */ operator[](size_t index) {
    // your code here...
  }
  /* return type */ operator[](size_t index) const {
    // your code here...
  }
};

// Implement specialization for bool
// Because of bit-shenanigans, i've already implemented resize and get_bit for you <3
/*
  static constexpr size_t bits_per_byte = 8;

  void resize(size_t new_capacity) {
    // Allocate new memory for the resized vector
    std::byte *new_data =
        new std::byte[(new_capacity + bits_per_byte - 1) / bits_per_byte];

    // Initialize the new memory with zeros (bcs y not)
    std::memset(new_data, 0,
                (new_capacity + bits_per_byte - 1) / bits_per_byte);

    // Copy the existing bits to the new memory
    for (size_t i = 0; i < vec_size_; ++i) {
      if (get_bit(data_, i)) {
        set_bit(new_data, i);
      }
    }

    // Deallocate the old memory
    delete[] data_;

    // Update the data_ pointer and capacity
    data_ = new_data;
    vec_capacity_ = new_capacity;
  }

  bool get_bit(const std::byte *data_, size_t index) const {
    return static_cast<bool>(data_[index / bits_per_byte] &
                             (std::byte(1) << (index % bits_per_byte)));
  }

  void set_bit(std::byte *data_, size_t index) {
    data_[index / bits_per_byte] |= (std::byte(1) << (index % bits_per_byte));
  }

  void clear_bit(std::byte *data_, size_t index) {
    data_[index / bits_per_byte] &= ~(std::byte(1) << (index % bits_per_byte));
  }
*/

int main() {
  // Test for general Vectorochek<int>
  Vectorochek<int> intVec;
  intVec.push_back(1);
  intVec.push_back(2);
  intVec.push_back(3);
  std::cout << "intVec size: " << intVec.size() << std::endl; // Expected: 3
  assert(intVec.size() == 3);
  std::cout << "intVec capacity: " << intVec.capacity()
            << std::endl; // Expected: >= 3
  assert(intVec.capacity() >= 3);
  std::cout << "intVec[0]: " << intVec[0] << std::endl; // Expected: 1
  assert(intVec[0] == 1);
  std::cout << "intVec[1]: " << intVec[1] << std::endl; // Expected: 2
  assert(intVec[1] == 2);
  std::cout << "intVec[2]: " << intVec[2] << std::endl; // Expected: 3
  assert(intVec[2] == 3);
  try {
    std::cout << "intVec[3]: " << intVec[3]
              << std::endl; // Expected: out_of_range exception
    assert(false);
  } catch (const std::out_of_range &e) {
    std::cout << "Caught exception: " << e.what() << std::endl;
  }

  // Additional tests for Vectorochek<int>
  intVec.push_back(4);
  std::cout << "intVec size after push_back(4): " << intVec.size()
            << std::endl; // Expected: 4
  assert(intVec.size() == 4);
  std::cout << "intVec[3]: " << intVec[3] << std::endl; // Expected: 4
  assert(intVec[3] == 4);

  intVec.push_back(5);
  std::cout << "intVec size after push_back(5): " << intVec.size()
            << std::endl; // Expected: 5
  assert(intVec.size() == 5);
  std::cout << "intVec[4]: " << intVec[4] << std::endl; // Expected: 5
  assert(intVec[4] == 5);

  // Test for Vectorochek<bool>
  Vectorochek<bool> boolVec;
  boolVec.push_back(true);
  boolVec.push_back(false);
  boolVec.push_back(true);
  std::cout << "boolVec size: " << boolVec.size() << std::endl; // Expected: 3
  assert(boolVec.size() == 3);
  std::cout << "boolVec capacity: " << boolVec.capacity()
            << std::endl; // Expected: >= 3
  assert(boolVec.capacity() >= 3);
  std::cout << "boolVec[0]: " << boolVec[0] << std::endl; // Expected: 1 (true)
  assert(boolVec[0] == true);
  std::cout << "boolVec[1]: " << boolVec[1] << std::endl; // Expected: 0 (false)
  assert(boolVec[1] == false);
  std::cout << "boolVec[2]: " << boolVec[2] << std::endl; // Expected: 1 (true)
  assert(boolVec[2] == true);
  try {
    std::cout << "boolVec[3]: " << boolVec[3]
              << std::endl; // Expected: out_of_range exception
    assert(false);
  } catch (const std::out_of_range &e) {
    std::cout << "Caught exception: " << e.what() << std::endl;
  }

  // Additional tests for Vectorochek<bool>
  boolVec.push_back(false);
  std::cout << "boolVec size after push_back(false): " << boolVec.size()
            << std::endl; // Expected: 4
  assert(boolVec.size() == 4);
  std::cout << "boolVec[3]: " << boolVec[3] << std::endl; // Expected: 0 (false)
  assert(boolVec[3] == false);

  boolVec.push_back(true);
  std::cout << "boolVec size after push_back(true): " << boolVec.size()
            << std::endl; // Expected: 5
  assert(boolVec.size() == 5);
  std::cout << "boolVec[4]: " << boolVec[4] << std::endl; // Expected: 1 (true)
  assert(boolVec[4] == true);

  return 0;
}
