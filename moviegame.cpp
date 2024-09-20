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

int choose(int max, string options[]) {
    int choice;
    for (int i = 0; i < max; i++) {
        cout << i + 1 << ". " << options[i] << endl;
    }
    while(true)
    {
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice < 1 || choice > max) {
            cout << "Invalid choice. Please try again." << endl;
        }
        else {
            break;
        }
    }
    return choice;
}

int main() {
    string genres[] = {"action", "comedy", "drama"};
    string moods[] = {"excited", "calm"};
    string genre, mood;
    int duration;

    cout << "What genre of movie do you prefer? (action, comedy, drama): " << endl;
    genre = genres[choose(3, genres)-1];
    

    cout << "What is your current mood? (excited, calm): " << endl;
    mood = moods[choose(2, moods)-1];

    cout << "Enter the maximum duration you prefer (in minutes): ";
    cin >> duration;

    // Suggest a movie based on user input
    suggestMovie(genre, mood, duration);

    return 0;

}
