#include <cstdint>
#include <iostream>

int main() {
    constexpr uint32_t MASQUE{0xFFFFFFFF};

    constexpr int STOP_BIT{1 << 0};
    std::cout << std::hex << (MASQUE | STOP_BIT) << std::endl;
    std::cout << std::hex << (STOP_BIT - 1) << std::endl;
    constexpr int UNSTOP_BIT{0 << 0};
    std::cout << std::hex << (MASQUE | UNSTOP_BIT) << std::endl;

    constexpr uint32_t REGISTER(0x11111111);
    constexpr int VNIR_BIT{1 << 28};
    std::cout << std::hex << ((REGISTER & VNIR_BIT) | VNIR_BIT) << std::endl;
    constexpr int VNIR_UNBIT{0 << 28};
    std::cout << std::hex << (MASQUE & VNIR_UNBIT) << std::endl;
    std::cout << std::hex << (MASQUE & ~VNIR_BIT) << std::endl;
}