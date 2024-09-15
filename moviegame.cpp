#include <iostream>
#include <string>

using namespace std;

void suggestMovie(string genre, string mood, int duration) {
    if (genre == "action") {
        if (mood == "excited") {
            if (duration <= 120) {
                cout << "We suggest you watch 'Mad Max: Fury Road'." << endl;
            } else {
                cout << "We suggest you watch 'The Dark Knight'." << endl;
            }
        } else if (mood == "calm") {
            cout << "We suggest you watch 'Inception'." << endl;
        }
    } else if (genre == "comedy") {
        if (mood == "excited") {
            cout << "We suggest you watch 'Supergirl'." << endl;
        } else if (mood == "calm") {
            cout << "We suggest you watch 'The Grand Budapest Hotel'." << endl;
        }
    } else if (genre == "drama") {
        if (mood == "excited") {
            cout << "We suggest you watch 'The Shawshank Redemption'." << endl;
        } else if (mood == "calm") {
            cout << "We suggest you watch 'Forrest Gump'." << endl;
        }
    } else {
        cout << "Sorry, we don't have suggestions for this genre." << endl;
    }
}

int main() {
    string genre, mood;
    int duration;

    // User input
    cout << "What genre of movie do you prefer? (action, comedy, drama): ";
    cin >> genre;

    cout << "What is your current mood? (excited, calm): ";
    cin >> mood;

    cout << "Enter the maximum duration you prefer (in minutes): ";
    cin >> duration;

    // Suggest a movie based on user input
    suggestMovie(genre, mood, duration);

    return 0;

}
