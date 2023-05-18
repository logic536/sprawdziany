#include <iostream>
using namespace std;

int main()
{
  char gender;
  cout << "Wpisz litere m lub M jesli jeśteś mezczyzna, k lub Kjesli jestes kobieta lub inna jesli jestes no gender" << endl;
  cin >> gender; 

  if(gender == 'm') cout << "jestes mezczyzna" << endl;
  else if(gender == 'k') cout << "jestes kobieta" << endl;
  else if(gender == 'K') cout << "jestes Kobieta" << endl;
  else if(gender == 'M') cout << "jestes Mezczyzna" << endl;
  else cout << "no gender" << endl;

  return 0;
}
