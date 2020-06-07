#include <iostream>
#include <vector>
#include <algorithm>

int MaxPairwiseProduct(const std::vector<int>& numbers) {
    int max_product = 0;
    int n = numbers.size();

    int max_index_1 = -1;
    int max_index_2 = -1
    for (int i = 0; i < n; i++){
      if (number[i] > number[max_index_1]){
        max_index_1 = i;
    }

    for (int j = 0; j < n; j++){
    	if((j != max_index_1) && (number[j] > number[max_index_2]))
		    max_index_2 = j;
    }

    max_product = number[max_index_1] * number[max_index_2];

    return max_product;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::cout << MaxPairwiseProduct(numbers); << "\n";
    return 0;
}
