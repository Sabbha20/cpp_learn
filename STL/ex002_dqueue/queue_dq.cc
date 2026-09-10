#include <iostream>
#include <string>
#include <deque>

void print_nums(std::deque<int> nums, int i){
    if (i <= 9) {std::cout << i << ".  { "; }  else {std::cout << i << ". { "; } 
    for (int n : nums) {
        std::cout << "[" << n << "] ";
    }
    std::cout  << "}" << std::endl;
}

int main(){

    std::deque<int> nums = {10, 20, 30};
    print_nums(nums, 1);

    nums.push_front(5);
    print_nums(nums, 2);

    nums.push_back(40);
    print_nums(nums, 3);

    nums.pop_front();
    print_nums(nums, 4);

    nums.pop_back();
    print_nums(nums, 5);



    return 0;
}