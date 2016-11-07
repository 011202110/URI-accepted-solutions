#include <bits/stdc++.h>
using namespace std;

int main() {
string  brasil       =  "Feliz Natal!";
string alemanha      =   "Frohliche Weihnachten!";
string austria    =  "Frohe Weihnacht!";
string coreia        =   "Chuk Sung Tan!";
string espanha       =   "Feliz Navidad!";
string grecia    =  "Kala Christougena!";
string australia   = "Merry Christmas!";
string portugal   =  "Feliz Natal!";
string suecia    =   "God Jul!";
string turquia   = "Mutlu Noeller";
string irlanda  =  "Nollaig Shona Dhuit!";
string belgica  = "Zalig Kerstfeest!";
string italia  = "Buon Natale!";
string siria   = "Milad Mubarak!";
string japao   = "Merii Kurisumasu!";
string st;

while(cin >> st){
  if(st == "brasil")
  cout <<brasil<<endl;
  else if(st == "alemanha")
  cout <<alemanha<<endl;
   else if(st == "austria")
  cout <<austria<<endl;
   else if(st == "coreia")
  cout <<coreia<<endl;
   else if(st == "espanha" || st == "argentina"  || st == "chile" || st == "mexico")
  cout <<espanha<<endl;
   else if(st == "grecia")
  cout <<grecia<<endl;
   else if(st == "estados-unidos" || st == "australia" || st == "inglaterra" || st == "canada" || st == "antardida")
  cout <<australia<<endl;
   else if(st == "portugal")
  cout <<portugal<<endl;
   else if(st == "suecia")
  cout <<suecia<<endl;
   else if(st == "turquia")
  cout <<turquia<<endl;
   else if(st == "irlanda")
  cout <<irlanda<<endl;
   else if(st == "belgica")
  cout <<belgica<<endl;
   else if(st == "italia" || st == "libia")
  cout <<italia<<endl;
   else if(st == "siria" || st == "marrocos")
  cout <<siria<<endl;
  else if(st == "japao")
  cout <<japao<<endl;
  else
  cout <<"--- NOT FOUND ---"<<endl;

}
	return 0;
}
