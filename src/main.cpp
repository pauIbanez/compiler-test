
#include <cstdio>
#include <exception>


int main() {
  try {
    printf("\nHello World!\n");
    throw std::exception("This is an error");
  } catch (const std::exception &e) {
    printf("Error: %s\n", e.what());
  }
}
