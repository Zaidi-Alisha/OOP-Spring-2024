
Task 1:

#include

class BoardMarker {

private: std::string brand; std::string shade; bool refillable; bool inkStatus;

public: //Constructor BoardMarker(std::string b, std::string s, bool r, bool i) : brand(b), shade(s), refillable(r), inkStatus(i) {}

//Getter methods 
  std::string getBrand() const {
  return brand; 
  } 

std::string getShade() const { 
return shade; 
} 
bool getRefillable() const { return refillable; }

bool getInkStatus() const { return inkStatus; }

//Setter methods

void setBrand(std::string b) { brand = b; }

void setShade(std::string s) { shade = s; }

void setRefillable(bool r) { refillable = r; }

void setInkStatus(bool i) { 
 inkStatus = i;
 } 
//Write function void write() { if (inkStatus) { std::cout << "Writing with " << brand << " " << shade << " board marker." << std::endl; }//ending if

else { 
 std::cout << "Ink is depleted. Please refill the board marker." << std::endl;
}//ending else
}//ending write function

// Refill function void refill() { if (refillable) { std::cout << "Refilling " << brand << " " << shade << " board marker." << std::endl; inkStatus = true; }//ending if

else { std::cout << "This board marker is not refillable." << std::endl; } };

int main() { //Create a BoardMarker object BoardMarker marker("Dollar", "Black", true, false);

//Set values marker.setBrand("Pilot"); marker.setShade("Red") marker.setRefillable(true); marker.setInkStatus(true);

//Invoke methods marker.write(); marker.refill(); return 0; }//end main

Task 2:

#include

class WaterBottle { private: std::string company; std::string color; int waterCapacity_ml;

public: WaterBottle(std::string c, std::string col, int cap) : company(c), color(col), waterCapacity_ml(cap) {}

std::string getCompany() const { return company; }

void setCompany(const std::string& c) { company = c; }

std::string getColor() const { return color; }

void setColor(const std::string& col) { color = col; }

int getWaterCapacity_ml() const { return waterCapacity_ml; }

int getWaterCapacity_l() const { return waterCapacity_ml / 1000; }

void updateWaterCapacity(int consumed_ml) { waterCapacity_ml -= consumed_ml; if (waterCapacity_ml < 0) { waterCapacity_ml = 0; } //ending if } ending function };

int main() { WaterBottle bottle("CompanyA", "Blue", 2000);

std::cout << "Water Bottle Information:" << std::endl; std::cout << "Company: " << bottle.getCompany() << std::endl; std::cout << "Color: " << bottle.getColor() << std::endl; std::cout << "Water Capacity (ml): " << bottle.getWaterCapacity_ml() << std::endl; std::cout << "Water Capacity (l): " << bottle.getWaterCapacity_l() << std::endl;

int consumed_ml;

std::cout << "Enter the amount of water consumed (in millilitres): "; std::cin >> consumed_ml;

bottle.updateWaterCapacity(consumed_ml);

std::cout << "Updated Water Bottle Information:" << std::endl; std::cout << "Company: " << bottle.getCompany() << std::endl; std::cout << "Color: " << bottle.getColor() << std::endl; std::cout << "Water Capacity (ml): " << bottle.getWaterCapacity_ml() << std::endl; std::cout << "Water Capacity (l): " << bottle.getWaterCapacity_l() << std::endl; return 0; }//end main
