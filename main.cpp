#include <iostream>

using namespace std;

{
    const int NR_CURSURI = 5;

class Student {
public:
   string nume;
   int an;
   vector<double> cursuri;
   vector<double> note;
   double media;

   Student(string nume, int an) : nume(nume), an(an) {
       cursuri.resize(NR_CURSURI);
       note.resize(NR_CURSURI);
       media = calculare_media();
   }

   double calculare_media() {
       double sum = 0;
       for (int i = 0; i < NR_CURSURI; i++) {



    return 0;
}
