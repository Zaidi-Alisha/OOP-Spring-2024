#include <iostream>
#include <string>

using namespace std;

//Graphics rendering engine
class GraphicsRenderingEngine {
public:
    void renderGraphics() {
        cout << "Rendering graphics..." << endl;
    }
};

//Input handler
class InputHandler {
public:
    void handleInput() {
        cout << "Handling input..." << endl;
    }
};

//Physics engine
class PhysicsEngine {
public:
    void simulatePhysics() {
        cout << "Simulating physics..." << endl;
    }
};

// Game Engine class combining components
class GameEngine {
private:
    GraphicsRenderingEngine graphicsEngine;
    InputHandler inputHandler;
    PhysicsEngine physicsEngine;

public:
    //Default Constructor
    GameEngine() {}

    //Start the game engine
    void start() {
        graphicsEngine.renderGraphics();
        inputHandler.handleInput();
        physicsEngine.simulatePhysics();
        cout << "Game engine started!" << endl;
    }
};

int main() {
    //Creating object
    GameEngine gameEngine;

    // Start the game engine
    gameEngine.start();

    return 0;
}//end main
