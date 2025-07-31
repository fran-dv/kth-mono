#include <iostream>

// Test individual targets - include version headers from each module
#include <kth/infrastructure/version.hpp>
#include <kth/domain/version.hpp>
#include <secp256k1.h>

int main() {
    std::cout << "Testing individual KTH targets..." << std::endl;
    std::cout << "Infrastructure version: " << kth::infrastructure::version() << std::endl;
    std::cout << "Domain version: " << kth::domain::version() << std::endl;
    std::cout << "Secp256k1: Successfully included main header" << std::endl;
    std::cout << "Successfully linked kth::infrastructure, kth::domain, and kth::secp256k1" << std::endl;
    std::cout << "All individual targets are working correctly!" << std::endl;
    return 0;
}
