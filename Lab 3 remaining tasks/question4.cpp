/*Alisha Zaidi
 *23k-0025
 */
 
#include <iostream>
#include <string>

using namespace std;

//General class
class Smartphone {
private:
    string brand;
    string model;
    string displayResolution;
    int ram;
    int rom;
    int storage;

public:
    //Parameterized Constructor
    Smartphone(string _brand, string _model, string _displayResolution, int _ram, int _rom, int _storage)
        : brand(_brand), model(_model), displayResolution(_displayResolution), ram(_ram), rom(_rom), storage(_storage) {}

    //Getter and setter
    string getBrand() const { return brand; }
    void setBrand(const string& _brand) { brand = _brand; }

    string getModel() const { return model; }
    void setModel(const string& _model) { model = _model; }

    string getDisplayResolution() const { return displayResolution; }
    void setDisplayResolution(const string& _displayResolution) { displayResolution = _displayResolution; }

    int getRAM() const { return ram; }
    void setRAM(int _ram) { ram = _ram; }

    int getROM() const { return rom; }
    void setROM(int _rom) { rom = _rom; }

    int getStorage() const { return storage; }
    void setStorage(int _storage) { storage = _storage; }

    //What smartphone should do
    //Function to call
    void makePhoneCall(const string& number) const {
        cout << "Calling " << number << " from " << brand << " " << model << endl;
    }//end function 

    //Function to send message
    void sendMessage(const string& recipient, const string& message) const {
        cout << "Sending message to " << recipient << " from " << brand << " " << model << ": " << message << endl;
    }//end function 

    //Function to connect to the internet 
    void connectToWiFi(const string& networkName) const {
        cout << "Connecting to Wi-Fi network: " << networkName << " on " << brand << " " << model << endl;
    }//end function 

   //Function to browse the internet 
    void browseInternet() const {
        cout << "Browsing the internet on " << brand << " " << model << endl;
    }//end function 
};//end class

int main() {
    //Creating objects
    Smartphone phone1("Samsung", "Galaxy S22", "2490 x 1380", 4, 256, 5930);
    Smartphone phone2("Apple", "iPhone 15 pro max", "2722 x 1280", 8, 1, 4840);

    //Setting attributes using setter functions
    phone1.setBrand("OnePlus");
    phone2.setStorage(512);

    // Displaying attributes using getter functions
    cout << "Phone 1 Attributes:" << endl;
    cout << "Brand: " << phone1.getBrand() << endl;
    cout << "Model: " << phone1.getModel() << endl;
    cout << "Display Resolution: " << phone1.getDisplayResolution() << endl;
    cout << "RAM: " << phone1.getRAM() << " GB" << endl;
    cout << "ROM: " << phone1.getROM() << " GB" << endl;
    cout << "Storage: " << phone1.getStorage() << " GB" << endl;

    cout << "\nPhone 2 Attributes:" << endl;
    cout << "Brand: " << phone2.getBrand() << endl;
    cout << "Model: " << phone2.getModel() << endl;
    cout << "Display Resolution: " << phone2.getDisplayResolution() << endl;
    cout << "RAM: " << phone2.getRAM() << " GB" << endl;
    cout << "ROM: " << phone2.getROM() << " TB" << endl;
    cout << "Storage: " << phone2.getStorage() << " GB" << endl;

    //Performing smartphone actions
    phone1.makePhoneCall("37838&648");
    phone2.sendMessage("Hi, how are you?");
    phone1.connectToWiFi("Internet");
    phone2.browseInternet();

    return 0;
}//end main

