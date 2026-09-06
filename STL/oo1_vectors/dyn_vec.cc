#include <iostream>
#include <string>
#include <vector>

void print_nums(std::vector<int> nums, int i){
    if (i <= 9) {std::cout << i << ".  { "; }  else {std::cout << i << ". { "; } 
    for (int n : nums) {      // range-based for works perfectly here
        std::cout << n << " ";
    }
    std::cout  << "}" << std::endl;
}

int main(){

    std::vector<int> nums = {10, 20, 30};
    print_nums(nums, 1);
    nums.push_back(40);
    print_nums(nums, 2);

    std::cout << nums[0] << std::endl;    // 10 — same [] indexing as arrays
    std::cout << nums.size() << std::endl; // 4 — vector ALWAYS knows its own size, no sizeof tricks needed
    
    nums.pop_back();   
    print_nums(nums, 3);       // removes last element
    nums[1] = 99;             // mutate like a normal array
    print_nums(nums, 4);

    std::cout << "nums.empty() -> " << nums.empty() << std::endl;
    print_nums(nums, 5);
    nums.clear();
    print_nums(nums, 6);

    nums.insert(nums.begin(), 55);
    print_nums(nums, 7);

    nums.insert(nums.begin() + 1, 65);
    print_nums(nums, 8);

    nums.erase(nums.begin());
    print_nums(nums, 9);
    
    nums.insert(nums.begin() + 1, 75);
    print_nums(nums, 10);


    return 0;
}