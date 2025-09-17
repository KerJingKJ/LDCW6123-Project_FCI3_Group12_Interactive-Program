#include <iostream>
#include <string>
#include <cctype>
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
                char moodChoice;                

            do
            {
                
                cout << "How you feel today?" << endl;

                cout << "H - Happy" << endl;
                cout << "R - Relaxed" << endl;
                cout << "M - Mad" << endl;
                cout << "S - Sad" << endl;
                cin >> moodChoice;
                moodChoice = toupper(moodChoice);
                if (moodChoice == 'H')
                {
                    cout << "Glad that you are happy! Here are the songs you can listen: " << endl;
                }

                else if (moodChoice == 'R')
                {
                    cout << "Relaxed relaxed" << endl;
                }

                else if (moodChoice == 'M')
                {
                    cout << "Sorry to hear that. I hope these songs can calm you down" << endl;
                    
                }

                else if (moodChoice == 'S')
                {
                    cout << "Oh no dont be sadd :( I hope these songs can heal you" << endl;
                }

                else
                {
                    cout << "Invalid choice! Please enter again" << endl;
                }

            }while (moodChoice != 'H' && moodChoice != 'R' && moodChoice != 'M' && moodChoice != 'S');
                

                
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
                cout << "Exiting..." << endl;
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