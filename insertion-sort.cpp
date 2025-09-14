#include <iostream>
#include <vector>

int main() {
  int arr_size, value;
  std::vector<int> arr;

  std::cin >> arr_size;  

  // Populate array
  for (int i = 0; i < arr_size; i++) { 
    std::cin >> value;
    arr.push_back(value);
  }

  // Implement Insertion Sort
  int size = arr.size();
  for (int i = 1; i < size; i++) {
    int j = i;
    while (j > 0 && arr[j] < arr[j-1]) {
      int temp = arr[j-1];
      arr[j-1] = arr[j];
      arr[j] = temp;
      j -= 1;
    }

    // Print each iteration of insertation sort
    for (int j = 0; j < i + 1; j++) {
      std::cout << arr[j] << ";";
    }
    std::cout << std::endl;
    
  }
}
