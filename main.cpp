#include <iostream>
#include <string>

using namespace std;

int main() {
    // Define characteristics for two persons
    string name1 = "khathutshelo";
    int age1 = 22;
    float height1 = 1.60;
    string color1 = "white";

    string name2 = "gundo";
    int age2 = 25;
    float height2 = 1.50;
    string color2 = "black";

    // Get user's choices for each characteristic
    cout << "Choose characteristics for your partner:" << endl;

    // Choose height
    cout << "1. Tall" << endl;
    cout << "2. Short" << endl;
    int heightChoice;
    cout << "Enter your choice (1 or 2): ";
    cin >> heightChoice;

    // Choose age
    cout << "1. 18 to 25" << endl;
    cout << "2. 25 to 30" << endl;
    int ageChoice;
    cout << "Enter your choice (1 or 2): ";
    cin >> ageChoice;

    // Choose color
    cout << "1. white" << endl;
    cout << "2. black" << endl;
    int colorChoice;
    cout << "Enter your choice (1 or 2): ";
    cin >> colorChoice;

    // Determine the partner based on choices
    string chosenName;
    if (heightChoice == 1 && ageChoice == 1 && colorChoice == 1) {
        chosenName = name1;
    } else if (heightChoice == 2 && ageChoice == 2 && colorChoice == 2) {
        chosenName = name2;
    } else {
        cout << "No partner found matching the criteria." << endl;
        return 1;
    }

    // Print out the chosen partner
    cout << "Your chosen partner is: " << chosenName << endl;

    return 0;
}
