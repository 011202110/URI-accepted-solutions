#include <iostream>
#include <string>

int main() {
    unsigned int n, l, c, lines, characters;
    std::string word;

    while (std::cin >> n >> l >> c) {
        lines = 1;
        characters = 0;
        int an=1;
        while (n--) {
            std::cin >> word;
            if (characters + (characters != 0) + word.length() <=c) {
                characters += word.length() +  (characters != 0);

            } else {
                characters = word.length();
                lines++;
                if(lines > l){
                	an++;
                	lines=1;
                }
            }
        }

            std::cout << an << std::endl;
    }
    return 0;
}
