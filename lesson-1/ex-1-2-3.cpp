#include <iostream>

class Car {
public:
    int year;
    std::string brand;
    std::string color;

};

class Birthday {
public:
    int year;
    int month;
    int day;

    int my_age(Birthday today) {
        return today.year - year;
    }
};

class Cat {
public:
    std::string name;
    std::string color;
    Birthday birthday;

    void speak() {
        std::cout << "Meow";
    }
};

int main() {
    Car car1;
    car1.color = "yellow";
    car1.brand = "Fiat";
    car1.year = 2002;

    Birthday my_birthday;
    my_birthday.year = 2002;
    my_birthday.day = 8;
    my_birthday.month = 12;

    Cat cat;
    cat.name = "Jiji";
    cat.color = "black";
    cat.birthday = {1892, 1, 1};

    std::cout << car1.color << " " << car1.brand << " year " << car1.year << "course: " << std::endl;
    std::cout << std::endl << "My birthday is on " << my_birthday.day << "." << my_birthday.month << "."
              << my_birthday.year << " and I'm " << my_birthday.my_age({2022, 10, 13}) << " years old" << std::endl;
    std::cout << "My cat's name is " << cat.name << std::endl << "Their color is: " << cat.color << std::endl
              << "Their birthday: " << cat.birthday.year << "/" << cat.birthday.month << "/" << cat.birthday.day
              << std::endl;
    cat.speak();

    return 0;
}



