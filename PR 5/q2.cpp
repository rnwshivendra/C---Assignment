#include <iostream>
#include <string.h>

using namespace std;

class Exception_handling{

  public:
    
    void handle_vote(int age){

      try{
        if(age< 18){
        char msg[] = "You cannot vote";
        throw msg;
        }else{
        cout << "You can vote" << endl;;
        }
      }catch(char msg[]){
          cout << msg << endl;
      }

    }

   
};


int main(){

  Exception_handling v;
  
  v.handle_vote(19);

  return 0;
}