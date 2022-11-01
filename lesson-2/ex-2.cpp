#include<iostream>

class tweezers {
    std::string material;
    int stiffness;
    float length;
    bool curved;
public:
    tweezers(std::string material, int stiffness, float length, bool curved) {
        this->material = material;
        this->stiffness = stiffness;
        this->length = length;
        this->curved = curved;
    }

    std::string stiffness_level() {
        if (stiffness > 6) {
            return "Stiff";
        } else if (stiffness <= 6 && stiffness >= 4) {
            return "Medium";
        } else {
            return "Loose";
        }
    }

    std::string color() {
        if (material == "brass") {
            return "Golden";
        } else if (material == "bronze") {
            return "Brown";
        } else {
            return "Silver";
        }
    }
};

int main() {
    tweezers tweezers1("steel", 3, 3.5, false);
    std::cout << "Stiffness of tweezers1: " << tweezers1.stiffness_level() << std::endl;
    std::cout << "Color of tweezers1: " << tweezers1.color() << std::endl;


}
