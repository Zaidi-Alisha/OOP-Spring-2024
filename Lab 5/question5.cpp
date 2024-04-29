#include <iostream>
#include <string>

using namespace std;

//Engine class
class Engine {
private:
    int horsepower;

public:
    //Parameterized constructor
    Engine(int hp) : horsepower(hp) {}

    //Getter
    int getHorsepower() const {
        return horsepower;
    }
};

//Wheel class
class Wheel {
private:
    int size; // Size in inches

public:
    //Parameterized constructor
    Wheel(int s) : size(s) {}

    //Getter
    int getSize() const {
        return size;
    }
};

//Headlight class
class Headlight {
private:
    string type;

public:
    //Parameterized constructor
    Headlight(const string& t) : type(t) {}

    //Getter
    string getType() const {
        return type;
    }
};

//Steering class
class Steering {
private:
    string type;

public:
    //Parameterized constructor
    Steering(const string& t) : type(t) {}

    //Getter
    string getType() const {
        return type;
    }
};

//Car class
class Car {
private:
    Engine* engine;
    Wheel* wheels[4];
    Headlight* headlights[2];
    Steering* steering;

public:
    //Constructor using aggregation and composition
    Car(int hp, int wheelSize, const string& headlightType, const string& steeringType)
        : engine(new Engine(hp)), steering(new Steering(steeringType)) {
        
        //Initialize wheels
        for (int i = 0; i < 4; ++i) {
            wheels[i] = new Wheel(wheelSize);
        }

        //Initialize headlights
        for (int i = 0; i < 2; ++i) {
            headlights[i] = new Headlight(headlightType);
        }
    }

    //Destructor
    ~Car() {
        delete engine;
        for (int i = 0; i < 4; ++i) {
            delete wheels[i];
        }
        for (int i = 0; i < 2; ++i) {
            delete headlights[i];
        }
        delete steering;
    }

    //Getter 
    int getEngineHorsepower() const {
        return engine->getHorsepower();
    }

    int getWheelSize() const {
        return wheels[0]->getSize(); 
    }

    string getHeadlightType() const {
        return headlights[0]->getType(); // Assuming all headlights are of the same type
    }

    string getSteeringType() const {
        return steering->getType();
    }
};

int main() {
    // Create a car object
    Car car(200, 18, "LED", "Power Steering");

    // Print car details
    cout << "Car Details:" << endl;
    cout << "Engine Horsepower: " << car.getEngineHorsepower() << endl;
    cout << "Wheel Size: " << car.getWheelSize() << " inches" << endl;
    cout << "Headlight Type: " << car.getHeadlightType() << endl;
    cout << "Steering Type: " << car.getSteeringType() << endl;

    return 0;
}//end main
