//
//  main.cpp
//  1
//
//  Created by Rafał Leśniak on 29.08.2016.
//  Copyright © 2016 Rafał Leśniak. All rights reserved.
// x= liczba cukierków którą ma dostać każdy uczeń
// y = liczba cukierków które zostaną na wieczór
// x = cukierki/(uczniowie-1); /=podzielone -1 ucięta reszta by uzyskać liczbę całkowitą

#include <iostream>
using namespace std;
int uczniowie,cukierki,x,y;

int main()
{
    cout << "Ilu uczniow jest w twojej klasie:";
    cin >> uczniowie;
    
    cout << "Ilu cukierkow kupila twoja mama:";
    cin>> cukierki;
    
    x = cukierki/(uczniowie-1);
      cout<<endl<<"Dla Jasia na wieczor: "<<x;
    
    y = cukierki -x*(uczniowie-1);
  
    cout<<endl<< "cukierkow dla kazdego ucznia: "<<y<<endl;
    
    return 0;
}
