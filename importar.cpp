#include <fstream>
#include <iostream>
using namespace std;

int main (int argc, char *argv[])
{
  string filename_enx = argv[1];
  string filename_eny= argv[2];
  
  ifstream archivox ( filename_enx);
  ifstream archivoy ( filename_eny);
  
  int lenx = 0;
  int leny = 0;
  
  string L,l;
  while (getline( archivox, L ))
  {
    lenx++;
    
  }
  while (getline (archivoy,l))
  {
    leny++;
  }
  
 
archivox.close();
archivox.clear();
    
archivoy.close();
archivoy.clear();
  
archivox.open(filename_enx);
archivoy.open(filename_eny);
  
  double x[lenx];
  double y[leny];
  
  
  for (int i = 0; i< lenx; i++)
  {
    x[i]=0.0;
  }
   for (int i = 0; i< leny; i++)
  {
    y[i]=0.0;
  }


  for (int i = 0; i< lenx; i++)
  {
    archivox >> x[i];
    
  }
  
  for (int i = 0; i< leny; i++)
  {
    archivoy >> y[i];
    
  }
  for (int i = 0; i< lenx; i++)
  {
    cout << x[i]+y[i] << endl;
  }
  
}