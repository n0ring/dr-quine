#include<iostream>
#include<iomanip>

int main()
{   
    std::string res;
    std::string line;
    while (std::cin.eof() == false) {
        getline(std::cin, line);
        for (char c : line) {
            if (c == '\"') {
                res.append("\\\"");
            } else if (c == '\'') {
                res.append("\\\'");
            } else if (c == '\\') {
                res.append("\\\\");
            } else {
                res.append(1, c);
            }
        }
        res.append("\\n");
    }
    std::cout << std::endl << res << std::endl;
    return 0;
}