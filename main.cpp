//Author:Noble LeDuc
#include <iostream>

using namespace std;

int main()
{
  int guess;

  cout<<"Guess a number between 1-10: ";
  cin>>guess;

  if(guess==7)
  {
  //when they guess correctly (7), display:
  cout<<"YES! Lucky number 7!\n";
  }
  //when they guess just off by one (either 6 or 8), display:
  else if((guess > 7 && guess < 9)|| (guess>5 && guess<7))
  {
  cout<<"Oh, so close!\n";
  }
  //when they guess any other number, display:
  else
  {
  cout<<"Waaay off, sorry.\n";
  }
  return 0;
}
