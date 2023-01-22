/*
While studying the root system of the strange self-replicating entities 
(tentatively called "trees"), the beacon noticed that the support structures
beneath them branched and split through a specific pattern, as dictated by
resource availability. This sequence followed a predictable pattern: 
1, 1, 2, 3, 5, 8, 13... where any given value (n) is described by the equation:
n (current) = n (current-1) + n (current-2)

In order to extrapolate this sequence to arbitrary size, the beacon begins to
simulate it.



Goal: Complete a function that prints out the fibonacci sequence for a given
input value n. 

Note: Read the entire program before you start your work.

Bonus: What's the biggest number an int can hold? What about the biggest
number an unsigned int can hold? How about an unsigned long long int?
*/


#include <vector>
#include <iostream>

void fib(int n) {

  if(n < 3) { 
    std::cout << "Sequence too short: pattern cannot emerge." << std::endl;
    return;
  }


  //declare vector: this will hold the sequence
  //(these numbers will get big! that's why it uses "unsigned long long int")
  std::vector<unsigned long long int> sequence;

  //add elements to the "back" of the vector
  sequence.push_back(1);  //sequence[0] now exists, and equals 1
  sequence.push_back(1);  //sequence[1] now exists, and equals 1

//---- your code starts here --------------------------------------------------
  for(int i=1; i<n; i++) {
  unsigned long long int w;
  w = sequence[i-1] + sequence[i];
  sequence.push_back(w); 

}
//---- your code ends here ----------------------------------------------------


  std::cout << "Printing out sequence: ";
  for(int i=0; i<n; i++) {
    std::cout << sequence[i] << " ";
  }
  std::cout << std::endl;

  return;
}

int main(void) {

  fib(50);

  return 0;
}
