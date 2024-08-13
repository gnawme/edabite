#include <cstdio>
#include <cstdlib>
#include <cstring>
 
int main(int argc, char** argv) {
    auto msg = "Hello world!";
 
    auto ptr = reinterpret_cast<char*>(malloc(strlen(msg)));
 
    strcpy(ptr, msg);
 
    printf("%s\n", ptr);
    //free(ptr);
 
    return 0;
}
