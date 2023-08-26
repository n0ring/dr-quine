#include<iostream>
#include<iomanip>

int main()
{   
    std::string res;
    std::string line;
    std::string marks;
    while (std::cin.eof() == false) {
        getline(std::cin, line);
        for (char c : line) {
            if (c == '\"') {
                res.append("%c");
                marks.append("QM ");
            } else if (c == '\n') {
                res.append("%c");
                marks.append("NL ");
            }
            else {
                res.push_back(c);
            } 
        }
        res.append("%c");
        marks.append("NL ");
    }
    std::cout << std::endl << res << std::endl;
    std::cout << std::endl << marks << std::endl;
    
    return 0;
}