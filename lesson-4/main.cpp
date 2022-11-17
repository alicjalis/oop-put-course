#include<iostream>

class age_counter {

protected:

    int initial_year;
    int end_year;

public:

    virtual int get_age() = 0;

    age_counter(int initial_year, int end_year) : initial_year(initial_year), end_year(end_year) {}
};

class years_counter : public age_counter {
public:

    years_counter(int initial_year, int end_year) : age_counter(initial_year, end_year) {}

    int get_age() override {
        return (end_year - initial_year);
    }
};

class days_counter : public age_counter {
public:

    days_counter(int initial_year, int end_year) : age_counter(initial_year, end_year) {}

    int get_age() override {
        return (end_year * 365 - initial_year * 365);
    }
};

class minutes_counter : public age_counter {
public:

    minutes_counter(int initial_year, int end_year) : age_counter(initial_year, end_year) {}

    int get_age() override {
        return (end_year * 525600 - initial_year * 525600);
    }
};

int main() {
    years_counter y(1992, 2333);
    days_counter d(1992, 2333);
    minutes_counter m(1992, 2333);
    std::cout << "Years total: " << y.get_age() << std::endl;
    std::cout << "Days total: " << d.get_age() << std::endl;
    std::cout << "Minutes total: " << m.get_age() << std::endl;

}
