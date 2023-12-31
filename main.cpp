#include "loginHandler.cpp"


int main () {

    string username, password, imagePath;
    int choice;

    cout << "1. Register\n2. Login" << endl;
    cin >> choice;

    logInHandler newLogInAttempt;

    switch (choice) {

        // register new username and password
        case 1: 
        
            cout << "\nCreate a username:" << endl;
            cin >> username;

            cout << "\nCreate a password: " << endl;
            cin >> password;

            cout << "\nEnter the name of the image to get key from: " << endl;
            cin >> imagePath;

            newLogInAttempt.attemptRegistration(username, password, imagePath);

            break;


        // log in
        case 2:

            cout << "\nEnter username:\n";
            cin >> username;

            cout << "\nEnter password:\n";
            cin >> password;

            bool status = newLogInAttempt.attemptLogin(username, password);

            if (status == false) {
                cout << "\nLogin failed. Double check your username and/or password is correct." << endl;
            } else {
                cout << "\nYou have logged in as " << newLogInAttempt.getUsername() << "." << endl;
            }


    }

}

