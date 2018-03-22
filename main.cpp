#include <iostream>
#include <vector>
/*bool solve(){
    char input[101], a[101], b[101];
    char *p;
    std::cin.getline(input, 101);
    while (input != NULL) {
        p = strtok(input, " ");
        strcpy(a, p);
        while (p != NULL) {
            p = strtok(NULL, " ");
            strcpy(b, p);
            if (strlen(a) % 2 && strlen(b) % 2 != 0) {
                strcpy(a + strlen(a) + 1, a + strlen(a));
                if (!strcmp(a, b)) {
                    return true;
                }else{
                    strcpy(a+strlen(a)-1,a+strlen(a));
                }
            }
            if (strlen(b) % 2 && strlen(a) % 2 != 0) {
                strcpy(b + strlen(b) + 1, b + strlen(b));
                if (!strcmp(a, b)) {
                    return true;
                }
            }
        }
        strcpy(input,input+strcspn(input," ")+1);
    }
    return false;
}*/

struct

bool solve(){
    std::string input;
    std::vector<std::string> v;
}

int main() {

    if(solve()) {
        std::cout << "DA";
    }else{
        std::cout << "NU";
    }
    return 0;
}