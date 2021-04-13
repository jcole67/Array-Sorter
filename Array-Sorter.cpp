//CS_117_20895SP21V
//Assignment 3
//Jordan Cole

#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>

using namespace std;

void sort(string arr[5][7]);                                                    //sort function prototype
bool binary_search(string arr[5][7], string user_word, int& row, int& column);  //binary_search function prototype

int main()
{
    string user_word;                                                           //declaration of vars
    int row;
    int column;
    srand(time(NULL));                                                          //srand for rng to be used in sentence generation

    string words[6][10] =                                                       //initialize two dimensional array of strings, for words
    {
        {"the", "a", "this", "that", "some", "", "", "", "", ""},
        {"crazy", "lazy", "fast", "slow", "big", "skinny", "tall", "poor", "drunk", "pretty"},
        {"man", "woman", "boy", "girl", "cat", "dog", "bird", "teacher", "mailman", "driver"},
        {"drove", "took", "carried", "hit", "pushed", "fell", "ran", "brought", "pulled", "climbed"},
        {"over", "under", "by", "between", "next to", "near", "across", "to", "from", "into"},
        {"refrigerator", "stove", "car", "house", "school", "pool", "roof", "floor", "table", "wall"}
    };
    
    string rand_sentences[5][7];                                                //declare two dimensional array of strings, for randomly genereate sentences  

    for (int i = 0; i < 5; i++)                                                 //for-loop to create 5 sentences of 7 strings
    {
        int n = rand() % 10;                                                    //randomly generate integer between 0 to 9 using mod
        rand_sentences[i][0] = words[0][n];                                     //assign randomly selected words to create sentence
        n = rand() % 10;
        rand_sentences[i][1] = words[1][n];
        n = rand() % 10;
        rand_sentences[i][2] = words[2][n];
        n = rand() % 10;
        rand_sentences[i][3] = words[3][n];
        n = rand() % 10;
        rand_sentences[i][4] = words[4][n];
        n = rand() % 10;
        rand_sentences[i][5] = words[0][n];
        n = rand() % 10;
        rand_sentences[i][6] = words[5][n];
    }
    
    for (int i = 0; i < 5; i++)                                                 //print the generated sentences
    {
        for (int ii = 0; ii < 7; ii++)
        {
            if (rand_sentences[i][ii] != "")
            {
                cout << rand_sentences[i][ii] << " ";
            }
        }
        cout << endl;
    }
    
    sort(rand_sentences);                                                       //pass the randomly generated sentences to the sort function

    cout << "Sorted words: " << endl;                                           //print the newly sorted sentences
    for (int i = 0; i < 5; i++)
    {
        for (int ii = 0; ii < 7; ii++)
        {
            if (rand_sentences[i][ii] != "")
            {
                cout << rand_sentences[i][ii] << " ";
            }
        }
        cout << endl;
    }
    
    while (true)
    {
        cout << "Enter word to search for: ";                                   //ask for user input
        getline(cin, user_word);

        if (user_word.size() < 1)                                               //check for nil user input
        {
            break;
        }

        if (binary_search(rand_sentences, user_word, row, column))              //call the binary_search function
        {
            cout << user_word << " was found in row " << row << " and column " << column << ". [remember indices begin from 0]." << endl;
        }
            else
            {
                cout << user_word << " was not found." << endl;
            }
    }

    system("pause");

    return 0;
}

void sort(string arr[5][7])                                                     //sort function definition
{
    for (int i = 0; i < 5; i++)
    {
        for (int ii = 0; ii < 7; ii++)
        {
            for (int x = ii; x < 7; x++)
            {
                if (arr[i][ii].compare(arr[i][x]) > 0)
                {
                    string placehold = arr[i][ii];
                    arr[i][ii] = arr[i][x];
                    arr[i][x] = placehold;
                }
            }
        }
    }
}

bool binary_search(string arr[5][7], string user_word, int& row, int& column)   //binary_search function definition
{
    for (int i = 0; i < 5; i++)
    {
        int first = 0;
        int middle = 3;
        int last = 6;
        
        while (first <= last)
        {
            if (arr[i][middle].compare(user_word) == 0)
            {
                row = i;
                column = middle;
                return true;
            }
            if (arr[i][middle].compare(user_word) > 0)
            {
                last = middle - 1;
            }
            else
            {
                first = middle + 1;
            }
            middle = first + ((last - first) / 2);
        }
    }
    return false;
}
