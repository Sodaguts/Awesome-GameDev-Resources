// add your imports here
#include <iostream>
int main(){
  // code here
  unsigned int seed = 0;     //S
  unsigned int randNums = 0; //N
  signed int min = 0;         //R1 (min)
  signed int max = 0;         //R2 (max)
  int value = 0;

  std::cin >> seed >> randNums >> min >> max;
  //std::cout << "seed: " << seed << " randNums: " << randNums << " R1: " << R1 << " R2: " << R2 << "\n";
  //value = seed;

  for(int i = 0; i < randNums; i++)
  {
      seed = seed xor (seed << 13);

      seed = seed xor (seed >> 17);

      seed = seed xor (seed << 5);

      value = min + (seed % (max - min + 1));

      std::cout << value << "\n";
  }


}