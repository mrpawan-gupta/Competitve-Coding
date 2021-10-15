#include <bits/stdc++.h>
using namespace std;

int main(){
     int t ; cin >> t;
     while(t--){
          
         char ID ;
         cin >> ID;
          
         if(ID == 'B' || ID == 'b') cout << "BattleShip" <<endl;
         if(ID == 'C' || ID == 'c') cout << "Cruiser" <<endl;
         if(ID == 'D' || ID == 'd') cout << "Destroyer" <<endl;
         if(ID == 'F'|| ID=='f') cout << "Frigate" <<endl;
          
     }
     return 0 ;
}
