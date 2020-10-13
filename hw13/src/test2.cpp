#include <iostream>
#include <string>

class Vehicle {
private:
    std::string license_number;

protected:
    int numberOfTires;
    std::string color;
    std::string engine;

public:
    void print() {
        std::cout << "Engine: " << this->engine;
        std::cout << ", color: " << this->color;
        std::cout << ", # of tires: " << this->numberOfTires << std::endl;
    }

    virtual void steer();
};

class Car : public Vehicle {
public:
    Car(std::string color, std::string engine) {
        this->color = color;
        this->engine = engine;
        this->numberOfTires = 4;
    }

    void steer() {
        std::cout << "Using the wheel..." << std::endl;
    }
};

class Motorcycle : public Vehicle {
public:
    Motorcycle(std::string color, std::string engine) {
        this->color = color;
        this->engine = engine;
        this->numberOfTires = 2;
    }

    void steer() {
        std::cout << "Using the stick..." << std::endl;
    }
};

class Truck : public Vehicle {
public:
    Truck(std::string color, std::string engine) {
        this->color = color;
        this->engine = engine;
        this->numberOfTires = 6;
    }

    void steer() {
        std::cout << "Using the big wheel..." << std::endl;
    }
};

int main() {

    Car c("red", "Vausifarts");
    Motorcycle m("blue", "Mausifarts");
    Truck t("brown", "Penguin's favorite fishoil");

    c.print();
    m.print();
    t.print();
    
    return 0;
}