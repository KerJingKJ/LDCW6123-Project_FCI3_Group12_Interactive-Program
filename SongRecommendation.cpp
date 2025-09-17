#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    int choice;
    char repeat;
    cout << "Welcome to Song Recommendation System" << endl;

    do
    {
        cout << endl << "How should we recommend songs for you?" << endl;
        cout << "1. By Mood" << endl;
        cout << "2. By Genre" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice (1, 2 or 3) : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                char moodChoice;                

            do
            {
                
                cout << endl << "How you feel today?" << endl;

                cout << "H - Happy" << endl;
                cout << "R - Relaxed" << endl;
                cout << "M - Mad" << endl;
                cout << "S - Sad" << endl;
                cout << "Your choice (H/R/M/S): ";
                cin >> moodChoice;
                moodChoice = toupper(moodChoice);
                if (moodChoice == 'H')
                {
                    cout << endl << "Glad that you are happy! Here are some upbeat songs for you: " << endl;
                    cout << "1. Can't Stop the Feeling! by Justin Timberlake" << endl;
                    cout << "2. As It Was by Harry Styles" << endl;
                    cout << "3. Price Tag by Jessie J, B.o.B" << endl;
                    cout << "4. Butter by BTS" << endl;
                    cout << "5. Sugar by Maroon 5" << endl;
                }

                else if (moodChoice == 'R')
                {
                    cout << endl << "Great! Here are some chill songs for you: " << endl;
                    cout << "1. Cruel Summer by Taylor Swift" << endl;
                    cout << "2. Birds of A Feather by Billie Eilish" << endl;
                    cout << "3. I'm Yours by Jason Mraz" << endl;
                    cout << "4. Die With A Smile by Lady Gaga, Bruno Mars" << endl;
                    cout << "5. Thinking out Loud by Ed Sheeran" << endl;
                }

                else if (moodChoice == 'M')
                {
                    cout << endl << "Sorry to hear that. Maybe these songs can release your anger: " << endl;
                    cout << "1. So What by P!nk" << endl;
                    cout << "2. Bad Romance by Lady Gaga" << endl;
                    cout << "3. Bad Blood by Taylor Swift" << endl;
                    cout << "4. FRIENDS by Marshmello, Anne-Marie" << endl;
                    cout << "5. Savage Love by Jason Derulo, Jawsh 685" << endl;
                }

                else if (moodChoice == 'S')
                {
                    cout << endl << "Oh no don't be sad :( I hope these songs can comfort you" << endl;
                    cout << "1. Stronger (What Doesn't Kill You) by Kelly Clarkson" << endl;
                    cout << "2. Love is Gone by Dylan Matthew, SLANDER" << endl;
                    cout << "3. Just Give Me A Reason by P!nk, Nate Ruess" << endl;
                    cout << "4. I Like Me Better by Lauv" << endl;
                    cout << "5. Don't Wanna Cry by Seventeen" << endl;
                }

                else
                {
                    cout << endl << "Invalid choice! Please enter again." << endl;
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
                cout << endl << "Exiting..." << endl;
                cout << "Bye! Have a nice day ^^" << endl;
            break;
            }

            default:
            {
                cout << "Invalid choice! Please enter again." << endl;
            break;
            }
                
        }

        if (choice != 3)
        {
            cout << endl << "Would you like to continue? (y/n): ";
            cin >> repeat;
            repeat = tolower(repeat);
        }

        if (repeat == 'n')
        {
            cout << endl << "Bye! Enjoy your day :)" << endl;
        }

    } while (repeat != 'n' && choice != 3);

    return 0;
}