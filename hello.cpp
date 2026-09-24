#include <iostream>
#include <string>
 /// using std::cout;
 /// using std::endl;

using  namespace std;
int main(){  
  int id;

  string address; // dia chi 
  cout << "Hello world " << std ::endl; 
  cout << "Codegym C++ " << std ::endl;


  cout << " Moi Nhap ma so ";
  cin >> id;
  cin.ignore(); 
  cout << " Moi Nhap dia chi ";
///cin >> address;
  getline(cin, address);

  cout << " ID: " << id << " address " << address << endl;
return 0;
}