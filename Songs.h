#include <iostream>
#include <vector> 
#include <string> 

using namespace std; 
class Songs{
  public:
    Songs(); // Constructor
    void Insert(vector <string> song); // Adds song to playlist
    void Display_All(); // Prints all songs
    void Song_Count(); // Prints total num of songs
    bool Search_Song(vector <string> song); // Returns T/F if song is found in playlist 
    /*
    void create();
    void display_all(); 
    */

  private: 
    vector<vector <string>> playlist;
    int songCount;
};