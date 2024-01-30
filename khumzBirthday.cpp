#include <iostream>

class Khumz {
private:
  int age;

public:
  Khumz(int initialAge) : age(initialAge) {}

  int sukhulile() {
    age++;
    return age;
  }

  void printAge() const {
    std::cout << "Current age: " << age << std::endl;
  }🥳🎂
};

int main() {
  Khumz eric(28);
  eric.sukhulile();
  eric.printAge();

  return 0;
}
