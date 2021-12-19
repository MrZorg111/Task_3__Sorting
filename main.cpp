#include <iostream>

int main() {
    float number[15], result_number[15];
    std::cout << "Enter 15 fractional numbers: ";
    for (int i = 0; i < 15; i++) {
        std::cin >> number[i];
    }
   int j = 0;
        for (int t = 1; t < 15; t++) {
            if (number[j] > number[t]) {
                number[j] = number[t];
            }
        }
      result_number[j] = number[j];
        std::cout << result_number[j] << "\n";


}
