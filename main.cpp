/* 
Program in progress and not yet completed. 
The goal of this program is to avoid song duplicates in a user playlist. This is a feature that I wish Spotify could really improve on. At times duplicate songs can be found in a users playlist. My guess is that this is due to different song ID's found in the companies database. 
*/
#include <iostream>
#include <string> 
#include <vector> 
#include <fstream>
#include "Songs.h"

using namespace std; 

typedef string ItemType; 

void outputResults(bool result, vector <string> thisSong, ofstream &outputFile); // Outputs results to file

int main(){
  ifstream inputFile; 
  ofstream outputFile;
  inputFile.open("songFile.txt");
  outputFile.open("songFileResults.txt");

  ItemType command;
  Songs Spotify; // Object
  vector <string> song; 

  bool songFound; 
  command = ""; 
  int counter; 
  
  while (command != "QUIT")
  {
    if(command == "NEW" and song.size() != 0)
    {
      song.clear();
      Spotify.Insert(song);
    }
    else
    {
      inputFile >> command; 
      song.push_back(command); 
    }
  } 

  Spotify.Display_All(); 
  Spotify.Song_Count(); 
  return 0;
} 

void outputResults(bool result, vector <string> thisSong, ofstream &outputFile){
  for(int counter = 0; counter < thisSong.size(); counter++)
  {
    if(counter == 0)
      outputFile << "- SONG: " << thisSong[counter];
    else if(counter == 1)
      outputFile << ", ARTIST: " << thisSong[counter] << " ";
    else 
      break; 
  }
  if(result == true)
    outputFile << "WAS NOT ADDED TO PLAYLIST. COPY FOUND. \n"; 
  else
    outputFile << "WAS ADDED TO PLAYLIST. COPY NOT FOUND. \n"; 
}