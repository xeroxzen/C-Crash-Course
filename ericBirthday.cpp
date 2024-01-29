#include <iostream>
#include <ctime>

class Khumz {
private:
   int age;
   std::tm birthday;

public:
   Khumz(int initialAge, int year, int month, int day) : age(initialAge) {
       birthday.tm_year = year - 1900;  
       birthday.tm_mon = month - 1;
       birthday.tm_mday = day;
   }

   void sukhulile() {
       age++;
   }

   bool isBirthdayToday() const {
       std::time_t now = std::time(nullptr);
       std::tm *currentDate = std::localtime(&now);
       return birthday.tm_mon == currentDate->tm_mon && birthday.tm_mday == currentDate->tm_mday;
   }

   void printBirthdayMessage() const {
       if (isBirthdayToday()) {
           std::cout << "Happy " << age << "th birthday, Eric🎂🥳" << std::endl;
       } else {
           std::cout << "It's not Eric's birthday yet." << std::endl;
       }
   }
};

int main() {
   Khumz eric(28, 1995, 1, 30);
   eric.sukhulile();
   eric.printBirthdayMessage();

   return 0;
}
