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
    /*
    void search();
    void create();
    void found_copy;
    void erase(); 
    void display_all(); 
    */

  private: 
    vector<vector <string>> playlist;
    int songCount;
};