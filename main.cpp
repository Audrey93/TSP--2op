#include <iostream>
#include "graf.h"
#include <string>

using namespace std;

int main() {
  string filename("urugvaj.txt");
  Graf G(filename);
  cout <<"Duzina ture dobivenom metodom najblizi susjed je: " << G.turaNajbliziSusjed();
  G.Run();
  return 0;
}
