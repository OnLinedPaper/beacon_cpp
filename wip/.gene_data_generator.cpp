//SECRET FOUND!! This is the program that generated GENE_DATA.txt. 

#include <fstream>
#include <random>

int main(void) {
  //file stream
  std::ofstream fout;

  //create rng distribution and generator
  std::uniform_int_distribution<std::mt19937::result_type> d(0, 3);
  std::mt19937 r;

  //so random
  r.seed(4);

  //open file stream - gonna assume this always opens, won't check it
  fout.open("GENE_DATA.txt");

  for(int i=0; i<10000; i++) {
    //get random number
    int rand = d(r);
    
    //using it, print G, C, A, or T
    //the "( ? : )" syntax is called a "ternary operator"
    fout << (
      rand == 0 ? "G" : (
        rand == 1 ? "C" : (
          rand == 2 ? "A" : (
            rand == 3 ? "T" : "X"
          )
        )
      )
    );

    //add some mutations
    if(i % 44 == 0) {
      fout << "X";
    }
  }

  //close the file stream
  fout.close();
}
