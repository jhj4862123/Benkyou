#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    string s1, s2, s3, s4;
    std::cout << "주어" << std::endl;
    std::cin >> s1;
    std::cout << "동사" << std::endl;
    std::cin >> s2;
    std::cout << "목적어" << std::endl;
    std::cin >> s3;
    cout << s1 + " " + s2 + " " + "a " + s3 << endl;
}

