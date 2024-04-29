#include <iostream>
#include <vector>
#include <string>

using namespace std;

//making a structure 
struct Event {
    string name;
    string date;
    string venue;
    string organizer;
};

//making function to add events
void addEvent(vector<Event>& events) {
    Event newEvent;
    cout << "Enter event name: " <<endl;
    getline(cin, newEvent.name);
    cout << "Enter event date: "<<endl;
    getline(cin, newEvent.date);
    cout << "Enter event venue: "<<endl;
    getline(cin, newEvent.venue);
    cout << "Enter event organizer: " <<endl;
    getline(cin, newEvent.organizer);
    events.push_back(newEvent);
}//closing bracket for function

//making second function to show output of events entered
void displayEvents(const vector<Event>& events) {
    cout << "Event Name | Date | Venue | Organizer" << endl;
    for (const Event& event : events) {
        cout << event.name << " | " << event.date << " | " << event.venue << " | " << event.organizer << endl;
    }//closing for loop 
}//closing bracket for function

//making function to search for the event 
void searchEvents(const vector<Event>& events, const string& date) {
    bool found = false;
    for (const Event& event : events) {
        if (event.date == date) {
            cout << "Event Name: " << event.name << endl;
            cout << "Event Date: " << event.date << endl;
            cout << "Event Venue: " << event.venue << endl;
            cout << "Event Organizer: " << event.organizer << endl;
            found = true;
        }//close if
    }//close for loop
    if (!found) {
        cout << "No events found for the specified date." << endl;
    }//close if
}//ending function

int main() {
    int numEvents;
    cout << "Enter the total number of events: ";
    cin >> numEvents;
    vector<Event> events;
    events.reserve(numEvents);
    for (int i = 0; i < numEvents; i++) {
        addEvent(events);
    }//closing for loop
    int choice;
    while (true) {
        cout << "1. Display all events" << endl;
        cout << "2. Search events by date" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                displayEvents(events);
                break;
            case 2: {
                string date;
                cout << "Enter the date to search (dd/mm/yyyy): ";
                getline(cin, date);
                searchEvents(events, date);
                break;
            }//closing bracket for second switch statement 
            case 3:
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }//closing bracket for first switch statement 
    }//closing bracket for while loop
}//end main
