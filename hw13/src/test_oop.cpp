#include <iostream>
#include <string>
#include <ctime>

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

    virtual void steer() = 0;
};

class Car : public Vehicle {
public:
    Car(std::string color, std::string engine) {
        this->engine = engine;
        this->color = color;
        this->numberOfTires = 4;
    }

    virtual void steer() {
        std::cout << "Using the wheel..." << std::endl;
    } //du bist cool!
};

class Motorcycle : public Vehicle {
public:
    Motorcycle(std::string color, std::string engine) {
        this->engine = engine;
        this->color = color;
        this->numberOfTires = 2;
    }

    virtual void steer() {
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

    virtual void steer() {
        std::cout << "Using the big wheel..." << std::endl;
    }
};

Vehicle* createRandomVehicle() {
    srand(time(0));
    int randomChoice(rand()%3+1);

    switch(randomChoice) {
        case 1:
            return new Car("red", "Vausifarts");
        case 2:
            return new Motorcycle("blue", "Mausifarts");
        case 3:
            return new Truck("penguin", "fishoil");
    }
}

int main() {
    Vehicle* v = createRandomVehicle();

    v->print();
    v->steer();
    
    return 0;
}