/*
The beacon has noted significant connections between seemingly unrelated
data points. Example: when an "animal" consumes "water", it later "pees", with
nearly 100% certainty. These fascinating observations require a different data
perspective; existing information must therefore be organized.


Goal: Complete each vector operation as described. The means by which you 
achieve this is completely up to you, and ANY code that makes the output match
the expected result is correct. We'll worry about best practice later!

Note: Run the program before you write any code.

Bonus: What is "list initialization"? What is a "ranged for loop"? What does
it mean if a variable's type is "auto"?
*/

#include <iostream>
#include <vector>
#include <string>

void add_to_vector() { //------------------------------------------------------
//This existing pattern needs to be extended to 12.

  std::vector<int> v;
  for(int i=1; i<=8; i++) {
    v.push_back(i);
  }  

//---- your code here ----

//------------------------

  std::cout << "\nadd_to_vector" << std::endl;
  std::cout << "Expected result:\t1 2 3 4 5 6 7 8 9 10 11 12" << std::endl;
  std::cout << "Contents of v:\t\t";
  for(int i : v) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
}

void modify_vector () { //-----------------------------------------------------
//The third element needs to be "3".
  std::vector<double> v;
  v.push_back(-4);
  v.push_back(-3);
  v.push_back(-2);
  v.push_back(-1);

  v[0] = 0;
  v[1] += 4;
  v[2]++; v[2]++; v[2]++; v[2]++;

//---- your code here ----

//------------------------

  std::cout << "\nmodify_vector" << std::endl;
  std::cout << "Expected result:\t0 1 2 3" << std::endl;
  std::cout << "Contents of v:\t\t";
  for(double d : v) {
    std::cout << d << " ";
  }
  std::cout << std::endl;
}

void reorder_in_vector() { //--------------------------------------------------
//The second and fourth elements in the vector need to be switched.
  std::vector<std::string> v;
  v.push_back("First");
  v.push_back("Fourth");
  v.push_back("Third");
  v.push_back("Second");
  v.push_back("Fifth");

//---- your code here ----

//------------------------

  std::cout << "\nreorder_in_vector" << std::endl;
  std::cout << "Expected result:\tFirst Second Third Fourth Fifth" << std::endl;
  std::cout << "Contents of v:\t\t";
  for(std::string s : v) {
    std::cout << s << " ";
  }
  std::cout << std::endl;
}

void sort_vector() { //--------------------------------------------------------
//The vector needs to be sorted. 

  std::vector<int> v{8, 1, 2, 5, 3, -7, 5, 11, -4, 8};

//---- your code here ----

//------------------------

  std::cout << "\nsort_vector" << std::endl;
  std::cout << "Expected result:\t-7 -4 1 2 3 5 5 8 8 11" << std::endl;
  std::cout << "Contents of v:\t\t";
  for(auto a : v) {
    std::cout << a << " ";
  }
  std::cout << std::endl;
}

int main(void) { //------------------------------------------------------------
  add_to_vector();
  modify_vector();
  reorder_in_vector();
  sort_vector();
}
