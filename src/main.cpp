
#include <cstdio>
#include <exception>
#include <stdexcept>

int main() {
  try {
    printf("Hello World!\n");
    throw std::runtime_error("This is an error");
  } catch (const std::exception &e) {
    printf("Error: %s\n", e.what());
  }
}
