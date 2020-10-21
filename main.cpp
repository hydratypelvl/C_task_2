// DARBA UZDEVUMS
// Izveidot masīvu. Masīva izmērs ir 100 elementi. Darba sākumā lietotājam tiek pieprasīts ievadīt pašreizējo izmēru N. Lietotājam jādod iespēja pašam aizpildīt masīvu. Kad programma izpilda visas darbības, lietotājam tiek piedāvāts atkārtot darbības ar citu masīva izmēru vai beigt darbu.

// 2. Variants - Masīvs no N elementiem satur naturālus skaitļus. Atrast tā mazāko elementu( ja ir vairāki elementi ar tādu vērtību, tad pirmo no labās puses) un samainīt vietām ar pirmo elementu.

//Darba autors - Rihards Ādminis P2-4

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Funkcija atrod mazāko Elementu masīvā
int findSmallestElement(int arr[], int n){
   int temp = arr[0];
   for(int i=0; i<n; i++) {
      if(temp>arr[i]) {
        temp=arr[i];
      }
   }
   // Atgriež mazāko vērtību kā 'temp'
   return temp;
}
// Funkcija atrod mazākā elementa indeksu
int indexofSmallestElement(int array[], int size)
{
  int index = 0 ;
  double n = array[0] ;
  for (int i = 1; i < size; ++i)
  {
    if (array[i] < n)
    {
      n = array[i] ;
      index = i ;
    }
  }
  // Atrgiež indeksu
  return index;
}
// Funkcija apgriež masīvu otrādāk
void reverse(int arr[], int n)
{
	reverse(arr, arr + n);
}

int main() {
  bool process = true;
  int x, skaitlis;
  int vertibas[100];
  string atbilde;

  do {
    cout << "ievadiet masīva lielumu!\n";
    do {
      cin >> x;  
      //Pozitiba skaitla parbaude
      if(x > 0) {
        break;
      }
      else {
        cout << "Ludzu ievadiet skaitli lielaku par 0!\n";
      }
    } while(x < 1);

    cout << "Masīva garums - " << x << "\n\n";

    //Masiva aizpildisana
    for (int i = 0; i < x; i++) {
      cout << "ievadiet skaitli " << i+1 << " - ";
      cin >> vertibas[i];
      // vertibas[i] = skaitlis;
    }
    cout << "\n";
    for(int i = 0; i < x; i++){
      cout << vertibas[i];
      cout << " ";
    }
    cout << " - orģinālais";
    //Mazakais skaitlis
    
    int smallest = findSmallestElement(vertibas, x);

    int temparr = vertibas[0];
    vertibas[0] = smallest;
    // cout << smallest;

    //Apgriež masīvu otrādāk
    reverse(vertibas, x);
    // piešķir indeksu māzākajam elementam masīvā
    int smindex = indexofSmallestElement(vertibas, x);
    vertibas[smindex] = temparr;
    //Apgriež masīvu otrādāk atkārtoti
    reverse(vertibas, x);

    // Izvada Pārveidoto masīvu
    cout << "\n";
    for(int i = 0; i < x; i++){
      cout << vertibas[i];
      cout << " ";
    }
    cout << " - apstradatais";
    cout <<"\n\nMazaka vertiba ir - "<< smallest << "\n" << "Pozicija no labās puses - " << smindex;

    //Programmas atkartosna?
    cout << "\nVai velaties atkartot programmu? (y/n)";
    cin >> atbilde;
    if(atbilde == "yes" || atbilde == "Yes"|| atbilde == "y" || atbilde == "Y" || atbilde == "ja" || atbilde == "Ja"){
      process = true;
    } else {
      process = false;
    }
  } while(process == true);
  // Programmas beigas
  cout << "\nProgrammas Beigas!";
} 
