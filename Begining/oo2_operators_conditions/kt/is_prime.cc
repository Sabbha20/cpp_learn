#include <iostream>
#include <string>

bool isPrime(int n){
  if (n < 2) return false;
  for (int i = 2; i<n; i++){
    if (n%i == 0) return false;
  }
  return true;
}

int main() {

    for (int i = 1; i <= 20; i++){
        if (isPrime(i)){
            std::cout << "i= " << i << " is prime." << std::endl;
        } else {
            std::cout << "i= " << i << " is not prime." << std::endl;
        }
    }


    return 0;
}