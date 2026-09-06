#include <iostream>
#include <string>
#include <cmath>


int main(){

    int num_of_test_scores;
    std::cout << "Enter the number of test scores, you want to add --> " << std::endl;

    std::cin >> num_of_test_scores;

    int* test_scores = new int[num_of_test_scores];

    int sum = 0;
    for (int i=0; i < num_of_test_scores; i ++){
        std::cin >> test_scores[i];
        sum+=test_scores[i];
    }

    double avg = double(sum)/double(num_of_test_scores);

    std::cout << "Average of test_scores: " << avg << std::endl;

    delete[] test_scores;


    return 0;
}