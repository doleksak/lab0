#include "elementy.hh"
#include <iostream>
#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

void Tab::wczytaj()
{ 
	int i;
fstream plik("liczby.txt");  /*wczytujemy plik na str wejsciowy*/
  plik >> n;                   /*wczytujemy rozmiar tablicy*/
  cout << "n: " << n << endl; 
  int *tab = new int[n];       /*tablica dynamiczna o rozmiarze n*/
  for(int i=0; i<n; i++)
   {
     plik >> tab[i];           /*wczytujemy elementy tablicy z pliku*/
   }
 		
	cout <<"Tablica o wielkosci " << n << " wierszy pomyslnie zadeklarowana\n";
} 
	


