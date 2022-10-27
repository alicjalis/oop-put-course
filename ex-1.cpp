#include <iostream>

class tree {

public:

    float height, width, age;
    std::string breed;

    tree() {
        height = 4.5;
        width = 1.2;
        age = 40;
        breed = "oak";
    }

    tree(float height, float width) {
        this->height = height;
        this->width = width;
        age = (height * width) / 2;
        breed = "oak";
    }

    tree(std::string breed) : tree() {
        this->breed = breed;
    }

    tree(float height, float width, float age, std::string breed) {
        this->height = height;
        this->width = width;
        this->age = age;
        this->breed = breed;
    }

    void print_details() {
        std::cout << "==[tree]==" << std::endl << "height: " << height << std::endl << "width: " << width << std::endl
                  << "breed: " << breed << std::endl << "age: " << age << std::endl;
    }
};


int main() {

    std::string breed;
    std::cout << "Enter breed of the tree C:";
    std::cin >> breed;

    tree a, b(7, 2), c(breed), d(3, 1, 20, "birch");

    a.print_details();
    b.print_details();
    c.print_details();
    d.print_details();

}
