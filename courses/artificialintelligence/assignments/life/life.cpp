#include <iostream>
int main(){
    // generate grid
    int x_length = 0;
    int y_length = 0;
    int numTurns = 0;
    //nu
    std::cin >> x_length;
    std::cin >> y_length;
    std::cin >> numTurns;
    for(int y = 0; y < y_length; y++)
    {
        for(int x = 0; x < x_length; x++ )
        {
            std::cout << ".";
        }
        std::cout << "\n";
    }

  return 0;
};