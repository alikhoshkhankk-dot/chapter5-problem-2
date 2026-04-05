#include <iostream>
#include <fstream>
using namespace std;

/*
   Chapter 5 Problem 2 - Population Bar Chart

   This program reads population numbers from a file
   and displays a bar chart using stars.
*/

int main()
{
    // Program Design:
    // 1. Open the file.
    // 2. Read the population for each year.
    // 3. Print the year.
    // 4. Print one * for every 1,000 people.
    // 5. Close the file.

    ifstream inputFile;
    int population;
    int years[6] = { 1900, 1920, 1940, 1960, 1980, 2000 };

    inputFile.open("C:\\Users\\alikh\\Downloads\\People-1.txt");

    if (!inputFile)
    {
        cout << "Error opening file." << endl;
        return 1;
    }

    cout << "PRAIRIEVILLE POPULATION GROWTH" << endl;
    cout << "(each * represents 1,000 people)\n" << endl;

    for (int i = 0; i < 6; i++)
    {
        inputFile >> population;

        cout << years[i] << " ";

        for (int j = 0; j < population / 1000; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    inputFile.close();

    return 0;
}