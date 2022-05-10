#include <algorithm>
#include <array>
#include <cstdint>
#include <iostream>

struct TOCEntry {
    uint32_t id;
    uint32_t byteSize;
};


std::array<TOCEntry, 32> toc;

int main() {
    TOCEntry e1 = {.id = 10011100, .byteSize = 64};

    toc[0] = e1;

    uint32_t fid = 10011100;
    auto found = std::find_if(
            toc.begin(), toc.end(), [&](const TOCEntry& entry) { return entry.id == fid; });

    if (found != toc.end()) {
        std::cout << "Wictory!" << std::endl;
    }
}