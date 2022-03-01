#include <cstdio>

constexpr char PREFIX[]{"PRIX_FIXE"};

#define TEST_PRINT(...) printf(__VA_ARGS__)

int main() {
    TEST_PRINT("%s %d Marco is Moo\n", PREFIX, 12211990);
}
