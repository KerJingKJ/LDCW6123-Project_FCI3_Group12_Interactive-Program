#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    int choice;
    char repeat;
    cout << "Welcome to Song Recommendation System" << endl;

    // a do-while loop for user to choose method to recommend songs with error handling
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
            case 1: // first method to recommend songs by mood
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

            case 2: // second method to recommend songs by genre
            {
                char genreChoice;
                do
                {
                    cout << endl << "What song genre you would like to listen?" << endl;
                    cout << "P - Pop" << endl;
                    cout << "R - Rock" << endl;
                    cout << "H - Hip Hop" << endl;
                    cout << "J - Jazz" << endl;
                    cout << "Your choice (P/R/H/J): ";
                    cin >> genreChoice;
                    genreChoice = toupper(genreChoice);
                    
                    if (genreChoice == 'P')
                    {
                        cout << endl << "Here are some popular Pop songs for you: " << endl;
                        cout << "1. Blinding Lights by The Weeknd" << endl;
                        cout << "2. Levitate by Dua Lipa" << endl;
                        cout << "3. Watermelon Sugar by Harry Styles" << endl;
                        cout << "4. Shape of You by Ed Sheeran" << endl;
                        cout << "5. Closer by The Chainsmokers" << endl;
                    }
                    else if (genreChoice == 'R')
                    {
                        cout << endl << "Here are some classic Rock anthems: " << endl;
                        cout << "1. Bohemian Rhapsody by Queen" << endl;
                        cout << "2. Smells Like Teen Spirit by Nirvana" << endl;
                        cout << "3. Hotel California by Eagles" << endl;
                        cout << "4. Stairway to Heaven by Led Zeppelin" << endl;
                        cout << "5. Sweet Child o' Mine by Guns N' Roses" << endl;
                    }
                    else if (genreChoice == 'H')
                    {
                        cout << endl << "Get ready to groove with these Hip Hop tracks: " << endl;
                        cout << "1. Lose Yourself by Eminem" << endl;
                        cout << "2. God's Plan by Drake" << endl;
                        cout << "3. Humble by Kendrick Lamar" << endl;
                        cout << "4. Old Town Road by Lil Nas X" << endl;
                        cout << "5. Hot in Herre by Nelly" << endl;
                    }
                    else if (genreChoice == 'J')
                    {
                        cout << endl << "Relax and enjoy these Jazz melodies: " << endl;
                        cout << "1. What a Wonderful World by Louis Armstrong" << endl;
                        cout << "2. Take Five by Dave Brubeck Quartet" << endl;
                        cout << "3. Fly Me to the Moon by Frank Sinatra" << endl;
                        cout << "4. My Favorite Things by John Coltrane" << endl;
                        cout << "5. At Last by Etta James" << endl;
                    }
                    else
                    {
                        cout << endl << "Invalid choice! Please enter again." << endl;
                    }

                } while (genreChoice != 'P' && genreChoice != 'R' && genreChoice != 'H' && genreChoice != 'J');

            break;
            }

            case 3: // end the program if user input 3
            {
                cout << endl << "Exiting..." << endl;
                cout << "Bye! Have a nice day ^^" << endl;
            break;
            }

            default: // repeat the loop if user enters an invalid choice
            {
                cout << "Invalid choice! Please enter again." << endl;
            break;
            }
                
        }

        if (choice != 3) // ask if user want to continue the program 
        {
            cout << endl << "Would you like to continue? (y/n): ";
            cin >> repeat;
            repeat = tolower(repeat);
        }

        if (repeat == 'n') // terminate the program if user input 'n'
        {
            cout << endl << "Bye! Enjoy your day :)" << endl;
        }

    } while (repeat != 'n' && choice != 3); // repeat the loop if user do not enter 'n' or 3

    return 0;
}

