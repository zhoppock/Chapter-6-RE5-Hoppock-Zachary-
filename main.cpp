// Hoppock, Zachary
// randomArray.cpp
// November 14, 2020
// Fill an array with randomly generated numbers between 1 and 100
// Version #1

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  srand(time(0));

  const int SIZE = 10;
  int values[SIZE];
  
  cout << "Part 1:" << endl;
  for (int i = 0; i < SIZE; i++)
  {
    values[i] = rand() % 100 + 1;
    cout << values[i];
    if (i < SIZE - 1)
    {
      cout << ", ";
    }
  }

  cout << "\n\n" << "Part 2:";
  for (int i = 0; i < SIZE; i++)
  {
    cout << endl;
    for (int j = 0; j < SIZE; j++)
      values[j] = rand() % 100 + 1;
      cout << values[i];
  }

  return 0;
}