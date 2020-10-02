#include <iostream>
#include <string>
using namespace std;

int findSmallestElement(int arr[], int n){
   int temp = arr[0];
   for(int i=0; i<n; i++) {
      if(temp>arr[i]) {
        temp=arr[i];
      }
   }
   return temp;
}

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
 return index;
}

int main() {
  bool process = true;
  int x, skaitlis;
  int vertibas[100];
  string atbilde;

  do {
    //Pozitiba skaitla parbaude
  cout << "ievadiet masīva lielumu!\n";
  do {
    cin >> x;  
    if(x > 0) {
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
  //Mazakais skaitlis

  int smallest = findSmallestElement(vertibas, x);
  int smindex = indexofSmallestElement(vertibas, x);
  

  int temparr = vertibas[0];
  vertibas[0] = smallest;
  vertibas[smindex] = temparr;

  cout << "\n";
  for(int i = 0; i < x; i++){
    cout << vertibas[i];
    cout << " ";
  }
  cout <<"\n\nMazaka vertiba ir - "<< smallest << "\n" << "Pozicija - " << smindex;

  //Programmas atkartosna?
  cout << "\nVai velaties atkartot programmu? (y/n)";
  cin >> atbilde;
  if(atbilde == "yes" || atbilde == "Yes"|| atbilde == "y" || atbilde == "Y" || atbilde == "ja" || atbilde == "Ja"){
    process = true;
  } else {
    process = false;
  }
  } while(process == true);
  cout << "\nProgrammas Beigas!";
} 