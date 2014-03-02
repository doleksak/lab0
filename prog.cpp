#include <cstdlib>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <ctime>

using namespace std;

int main()
{
  clock_t t1, t2;              /*stale czasu*/
  int n=0;                     /*liczba elementow tablicy wejsciowej*/
  int m=0;                     /*liczba elementow tablicy sprawdzajacej*/
  double czas;                 /*zmierzony czas wykonywania operacji*/

  fstream plik("liczby.txt");  /*wczytujemy plik na str wejsciowy*/
  plik >> n;                   /*wczytujemy rozmiar tablicy*/
  cout << "n: " << n << endl; 
  int *tab = new int[n];       /*tablica dynamiczna o rozmiarze n*/
  for(int i=0; i<n; i++)
   {
     plik >> tab[i];           /*wczytujemy elementy tablicy z pliku*/
   }

 t1=clock();                   /*wlacz zegar*/
  for(int i=0; i<n; i++)       /*wykonaj operacje*/
  tab[i] *= 2;               
 t2=clock();                   /*wylacz zegar*/
 czas=t2-t1;                   /*policz roznice czasow*/

 cout<<"czas:"<<czas<<endl;    /*podanie czasu na wyjsciu*/

 for(int i=0; i<n; i++)
   {
     cout<<tab[i]<<endl;       /*wyswietlenie tablicy po wykonanej operacji*/
   }

 fstream spr("sprawdz.txt");
 spr >> m;
 int *tabspr = new int[m];
 for(int i=0; i<n; i++)
   {
     spr >> tabspr[i];          /*wczytujemy elementy tablicy z pliku sprawdzajacego*/
   }

 for(int i=0; i<m; i++)
   {
     if(tab[i]!=tabspr[i])      /*jesli tablica wynikowa rozni sie od sprawdzenia wypisz blad*/
       {cout<<"blad"<<endl;}
   }

 return 0;
