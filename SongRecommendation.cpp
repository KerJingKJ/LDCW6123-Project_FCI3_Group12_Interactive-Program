#include <iostream>
#include <string>
using namespace std;

int main()
{
    int choice;
    cout << "Welcome to Song Recommendation System" << endl;

    do
    {
        cout << endl << "How should we recommend songs for you?" << endl;
        cout << "1. By Mood" << endl;
        cout << "2. By Genre" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your chocie (1, 2 or 3) : ";
        cin >> choice;
        switch(choice)
        {
            case 1:
            {
                int moodChoice;
                cout << "How you feel today?" << endl;
                cout << "1 - Happy" << endl;
                cout << "2 - Relaxed" << endl;
                cout << "3 - Mad" << endl;
                cout << "4 - Sad" << endl;
                cin >> moodChoice;

                
            break;
            }

            case 2:
            {
                cout << "What song genre you would like to listen?" << endl;
                // jin han, your part starts below, just list out songs based on genre

            
            break;
            }

            case 3:
            {
                cout << "Bye! Have a nice day ^^" << endl;
            break;
            }

            default:
            {
                cout << "Invalid choice! Please enter again!" << endl;
            break;
            }
                
        }
    } while (choice != 3);
    
    return 0;
}