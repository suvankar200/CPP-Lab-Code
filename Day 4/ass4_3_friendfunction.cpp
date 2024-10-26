#include <iostream>
using namespace std;
class B;
class A
{
  private:
  string name[5];
  public:
  void getname()
  {
    int i=0;
    while(i<5)
    {
        cout<<"Enter name "<<i+1<<": ";
        cin>>name[i];
        i++;
    }
  }
  friend void collectname(A&,B&);
};

class B
{
  private:
  string name[5];
  public:
  void getname()
  {
  int i=0;
  while(i<5)
  {
    cout<<"Enter name "<<i+1<<": "; 
    cin>>name[i];
    i++;
    }
  }
  friend void collectname(A&,B&);
};
int main()
{
    A aa;
    B bb;
    aa.getname();
    bb.getname();
    collectname(aa,bb);
    return 0;


}
void collectname(A& aa,B& bb)
{
   int i;
   cout<<"Student from Sec A"<<endl;
   for(i=0;i<5;i++)
   {
    cout<<"Your student is "<<aa.name[i]<<endl;
   }
   cout<<"Student from Sec B"<<endl;
   for(i=0; i<5;i++){
    cout<<"Your student is "<<bb.name[i]<<endl;
   }
    
}