
#include <cstdio>
#include <exception>
#include <stdexcept>

int main() {
  try {
    throw std::runtime_error("This is an error");
    printf("Hello World!\n");
  } catch (const std::exception &e) {
    printf("Error: %s\n", e.what());
  }
}
