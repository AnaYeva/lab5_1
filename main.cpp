#include <iostream>
using namespace std;

int main() {
    char line[100];
    int c=0;
    std::cout << "Write something:" << std::endl;
    std::cin >> line;
    for (char i : line){
        if(!(i == 'q' || i == 'w' || i == 'r' || i == 't' || i == 'p' || i == 's' || i == 'd' || i == 'f' ||
             i == 'g' || i == 'h' || i == 'j' || i == 'k' || i == 'l' || i == 'z' || i == 'x' || i == 'c' || i == 'v' || i == 'b' || i == 'n' || i == 'm'||
             i == 'Q' || i == 'W' || i == 'R' || i == 'T' || i == 'P' || i == 'S' || i == 'D' || i == 'F' ||
            i == 'G' || i == 'H' || i == 'J' || i == 'K' || i == 'L' || i == 'Z' || i == 'X' || i == 'C' || i == 'V' || i == 'B' || i == 'N' || i == 'M'))
        {line[c]=i;
        c++;}
    }
    std::cout << "I changed it: "<< line << std::endl;
    return 0;
}
