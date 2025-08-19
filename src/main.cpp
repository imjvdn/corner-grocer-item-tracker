#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <iomanip>

using namespace std;

class GroceryTracker {
private:
    map<string, int> itemFrequency;  // Map to store item frequencies
    string inputFileName;            // Input file name
    string outputFileName;           // Output file name
    
    // Private method to load data from input file
    void loadData() {
        ifstream inputFile(inputFileName);
        string item;
        
        if (!inputFile.is_open()) {
            cout << "Error: Could not open input file: " << inputFileName << endl;
            return;
        }
        
        // Read each line and count item frequencies
        while (getline(inputFile, item)) {
            if (!item.empty()) {
                itemFrequency[item]++;
            }
        }
        
        inputFile.close();
        createBackupFile();
    }
    
    // Private method to create backup data file
    void createBackupFile() {
        ofstream outputFile(outputFileName);
        
        if (!outputFile.is_open()) {
            cout << "Error: Could not create output file: " << outputFileName << endl;
            return;
        }
        
        // Write all item frequencies to backup file
        for (const auto& pair : itemFrequency) {
            outputFile << pair.first << " " << pair.second << endl;
        }
        
        outputFile.close();
        cout << "Backup file created: " << outputFileName << endl;
    }

public:
    // Constructor initializes file names
    GroceryTracker() {
        inputFileName = "data/CS210_Project_Three_Input_File.txt";
        outputFileName = "data/frequency.dat";
        loadData();
    }
    
    // Method to get frequency of a specific item
    int getItemFrequency(const string& item) {
        auto it = itemFrequency.find(item);
        if (it != itemFrequency.end()) {
            return it->second;
        }
        return 0;  // Item not found
    }
    
    // Method to display all item frequencies
    void displayAllFrequencies() {
        cout << "\n=== ALL ITEM FREQUENCIES ===" << endl;
        cout << setw(15) << left << "Item" << "Frequency" << endl;
        cout << string(25, '-') << endl;
        
        for (const auto& pair : itemFrequency) {
            cout << setw(15) << left << pair.first << pair.second << endl;
        }
    }
    
    // Method to display histogram
    void displayHistogram() {
        cout << "\n=== ITEM FREQUENCY HISTOGRAM ===" << endl;
        
        for (const auto& pair : itemFrequency) {
            cout << setw(15) << left << pair.first;
            cout << string(pair.second, '*') << endl;
        }
    }
    
    // Method to display menu
    void displayMenu() {
        cout << "\n=== CORNER GROCER ITEM TRACKER ===" << endl;
        cout << "1. Search for specific item frequency" << endl;
        cout << "2. Display all item frequencies" << endl;
        cout << "3. Display histogram" << endl;
        cout << "4. Exit program" << endl;
        cout << "Enter your choice (1-4): ";
    }
    
    // Method to handle menu option 1
    void searchItem() {
        string searchItem;
        cout << "\nEnter the item to search for: ";
        cin.ignore();  // Clear input buffer
        getline(cin, searchItem);
        
        int frequency = getItemFrequency(searchItem);
        if (frequency > 0) {
            cout << "Frequency of '" << searchItem << "': " << frequency << endl;
        } else {
            cout << "Item '" << searchItem << "' not found in the data." << endl;
        }
    }
    
    // Method to run the main program loop
    void run() {
        int choice;
        
        do {
            displayMenu();
            cin >> choice;
            
            switch (choice) {
                case 1:
                    searchItem();
                    break;
                case 2:
                    displayAllFrequencies();
                    break;
                case 3:
                    displayHistogram();
                    break;
                case 4:
                    cout << "Thank you for using Corner Grocer Item Tracker!" << endl;
                    break;
                default:
                    cout << "Invalid choice. Please enter 1-4." << endl;
            }
        } while (choice != 4);
    }
};

int main() {
    // Create and run the grocery tracker
    GroceryTracker tracker;
    tracker.run();
    
    return 0;
}
