#include <iostream>
#include <string.h>

using namespace std;

class Exception_handling{

  public:
    void handle_division(int num1,int num2){

      try{
        if(num2==0){
          char msg[] = "We cannot divide";
          throw msg;
        }else{
          int res = num1/num2;
          cout << "Here is result: " << res << endl;
        }
      }catch(char msg[]){
          cout << msg << endl;
      }

    }

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

    void handle_password(char pass[]){

      try{
        for(int i=0;i<sizeof(pass)/sizeof(pass[0]);i++){
          if(pass[i]>=65 && pass[i]<=90){
            char msg[] = "wrong password";
            throw msg;
             break;
         }else{
          cout << "Correct password" << endl;
          break;
         }
       }
      }catch(char msg[]){
          cout << msg << endl;
      }


    }
};


int main(){

  Exception_handling d,v,p;

  d.handle_division(6,0);
  v.handle_vote(19);
  p.handle_password("Hello");

  return 0;
}