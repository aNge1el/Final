
#include <stdio.h> 
#include <iostream>
#include <cmath>
#include <locale>
#include <vector>
#include <map>
#include <string>
using namespace std;




// Define a structure to represent an artist
struct Artist {
    string name;
    string songs[3];
    double views[3];
};

int main() {
    int num1;
    int option;

    // Create an array of Artist structures
    Artist artists[] = {
        {"Drake", {"Passionfruit", "Best I Ever Had", "Hotline Bling"}, {187.7, 52.3, 2000}},
        {"Beyonce", {"Crazy in Love", "Formation", "Break My Soul"}, {5.5, 403.3, 43.4}},
        {"Kendrick", {"Alright", "Backseat Freestyle", "Bitch, Don’t Kill My Vibe"}, {170.1, 49.4, 105.7}},
        {"CardiB", {"Bartier Cardi", "Get Up 10", "WAP"}, {97.1, 56, 519.9}},
        {"TaylorSwift", {"Shake It Off", "Anti-Hero", "You Belong With Me"}, {3389, 181.5, 1500}},
        {"ArianaGrande", {"Into You", "No Tears Left to Cry", "Ghostin"}, {26.6, 1200, 37.2}}
    };

    // Determine the size of the array
    int numArtists = sizeof(artists) / sizeof(artists[0]);

    // Print out all the artists
    for (int i = 0; i < numArtists; i++) {
        cout << "Artist " << i + 1 << ": " << artists[i].name << endl;
    }

    cout << "Enter the number of the artist you want information about: ";
    cin >> num1;

    cout << "Select an option:\n";
    cout << "1. View Songs\n";
    cout << "2. View Views\n";
    cout << "Enter your choice: ";
    cin >> option;

    cout << "---------------------------------------------------------------------------------------------------------" << endl;

    // Check if the input is within the valid range
    if (num1 >= 1 && num1 <= numArtists) {
        // Print out the artist's information based on the selected option
        cout << "These are ";

        if (option == 1) {
            cout << "songs by " << artists[num1 - 1].name << endl;
            // Print out the three songs of the selected artist
            for (int j = 0; j < 3; j++) {
                cout << "Song " << j + 1 << ": " << artists[num1 - 1].songs[j] << endl;
            }
        }
        else if (option == 2) {
            cout << "views for " << artists[num1 - 1].name << " songs" << endl;
            // Print out the three views of the selected artist
            for (int j = 0; j < 3; j++) {
                cout << "View " << j + 1 << ": " << artists[num1 - 1].views[j] << " million" << endl;
            }
        }
        else {
            cout << "Invalid option. Please choose either 1 or 2." << endl;
        }
    }
    else {
        cout << "Invalid choice. Please choose a number between 1 and " << numArtists << endl;
    }

    return 0;
}


