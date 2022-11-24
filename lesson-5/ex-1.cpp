#include <iostream>
#include <map>
#include <sstream>

class FakeCantor {
private:
    std::map<std::string, float> rates{{"USD", 1.0366f},
                                       {"GBP", 0.87063f},
                                       {"CHF", 0.9881f},
                                       {"JPY", 145.12f}};
public:
    FakeCantor() = default;

    float EuroToRate(const std::string& currency) {
        return rates[currency];
    };
};

class Currency {
public:
    virtual Currency* AddedCurrency(float value, std::string currency) = 0;

    virtual Currency* SubtractedCurrency(float value, std::string currency) = 0;

    virtual std::string Abbreviation() = 0;

    virtual std::string Symbol() = 0;

    virtual std::string Balance() = 0;

    virtual float DollarExchangeRate() = 0;
};

class Euro : public Currency {

    float balance;

public:

    Euro(float amount) {
        balance = amount;
    }

    Currency* AddedCurrency(float value, std::string currency) override {
        return new Euro(balance + value);
    }

    Currency* SubtractedCurrency(float value, std::string currency) override {
        return new Euro(balance - value);
    }

    std::string Abbreviation() override {
        return "EUR";
    }

    std::string Symbol() override {
        return "€";
    }

    std::string Balance() override {
        return (std::stringstream{} << balance << Symbol()).str();
    }

    float DollarExchangeRate() override {
        return FakeCantor().EuroToRate("USD");
    }
};

class Dollar : public Currency {

    FakeCantor c{};
    float balance;

public:

    Currency* AddedCurrency(float value, std::string currency) override {
        return new Euro(balance + (value / c.EuroToRate(currency)));
    }

    Currency* SubtractedCurrency(float value, std::string currency) override {
        return new Euro(balance - (value / c.EuroToRate(currency)));
    }

    std::string Abbreviation() override {
        return "USD";
    }

    std::string Symbol() override {
        return "$";
    }

    std::string Balance() override {
        return (std::stringstream{} << balance << Symbol()).str();
    }

    float DollarExchangeRate() override {
        return 1;
    }
};

class Pound : public Currency {

    FakeCantor c{};
    float balance;

public:

    Currency* AddedCurrency(float value, std::string currency) override {
        return new Euro(balance + (value / c.EuroToRate(currency)));
    }

    Currency* SubtractedCurrency(float value, std::string currency) override {
        return new Euro(balance - (value / c.EuroToRate(currency)));
    }

    std::string Abbreviation() override {
        return "GBP";
    }

    std::string Symbol() override {
        return "£";
    }

    std::string Balance() override {
        return (std::stringstream{} << balance << Symbol()).str();
    }

    float DollarExchangeRate() override {
        return c.EuroToRate("USD") / c.EuroToRate("GBP");
    }
};

class Franc : public Currency {

    FakeCantor c{};
    float balance;

public:

    Currency* AddedCurrency(float value, std::string currency) override {
        return new Euro(balance + (value / c.EuroToRate(currency)));
    }

    Currency* SubtractedCurrency(float value, std::string currency) override {
        return new Euro(balance - (value / c.EuroToRate(currency)));
    }

    std::string Abbreviation() override {
        return "CHF";
    }

    std::string Symbol() override {
        return "Fr.";
    }

    std::string Balance() override {
        return (std::stringstream{} << balance << Symbol()).str();
    }

    float DollarExchangeRate() override {
        return c.EuroToRate("USD") / c.EuroToRate("CHF");
    }
};

class Yen : public Currency {

    FakeCantor c{};
    float balance;

public:

    Currency* AddedCurrency(float value, std::string currency) override {
        return new Euro(balance + (value / c.EuroToRate(currency)));
    }

    Currency* SubtractedCurrency(float value, std::string currency) override {
        return new Euro(balance - (value / c.EuroToRate(currency)));
    }

    std::string Abbreviation() override {
        return "JPY";
    }

    std::string Symbol() override {
        return "¥";
    }

    std::string Balance() override {
        return (std::stringstream{} << balance << Symbol()).str();
    }

    float DollarExchangeRate() override {
        return c.EuroToRate("USD") / c.EuroToRate("JPY");
    }
};

int main() {
    // TODO: showcase usage
    return 0;
}