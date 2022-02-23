#include <iostream> 
#include <vector>
#include "Songs.h"

using namespace std; 
Songs::Songs(){
  playlist = {}; 
  songCount = 0; 
}

void Songs::Insert(vector <string> song){
  playlist.push_back(song); 
  songCount++; 
}

void Songs::Display_All(){
  cout << "Your liked songs\n";
  for(int x = 0; x < playlist.size(); x++)
  {
    for(int y = 0; y < playlist[x].size(); y++)
    {
      if(y == 0) 
        cout << "SONG: " << playlist[x][y]; 
      else if(y == 1)
        cout << ", ARTIST: " << playlist[x][y] << endl; 
      else if(y == 2)
        break; 
    }
  }
}

void Songs::Song_Count(){
  cout << "Total songs found: " << songCount-1;
}

bool Songs::Search_Song(vector<string> song){
  int info_match; 
  for(int x = 0; x < playlist.size(); x++)
  {
    for(int y = 0; y < playlist[x].size(); y++)
    {
      if(playlist[x][y] == song[y])
        info_match++; 
    }
  }
  
  if(info_match >= 2) // Means 2/3 variables (song, artist, or id number) match.
    return true; // song found
  else
    return false; // song not found
}
