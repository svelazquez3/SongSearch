#include <iostream>
#include <string> 
#include <vector> 
#include <fstream>
#include "Songs.h"

using namespace std; 

typedef string ItemType; 

int main(){
  ifstream inputFile; 
  inputFile.open("songFile.txt");

  ItemType command;
  Songs Spotify; // Object
  vector <string> song; 

  while (command != "QUIT")
  {
    inputFile >> command; 
    if(command == "NEW") 
    {
      Spotify.Insert(song); 
      song.clear(); 
    }
    else
      song.push_back(command); 
  } 
  
  Spotify.Display_All(); 
  Spotify.Song_Count(); 
  return 0;
} 