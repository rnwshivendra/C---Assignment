#include <iostream>
#include <string.h>

using namespace std;

class ReservationSystem {
    int train_no;
    char train_name[50];
    char src[50];
    char dest[50];
    int train_time;

public:
    void  inpTrainDtl() {
        cout << "Enter train no: ";
        cin >> this->train_no;
        cout << "Enter Train Name: ";
        cin >> this->train_name;
        cout << "Enter Train Source: ";
        cin >> this->src;
        cout << "Enter train Destination: ";
        cin >> this->dest;
        cout << "Enter train Time: ";
        cin >> this->train_time;
    }

    void displayRecord(ReservationSystem record[], int size) {
        for (int i = 0; i < size; i++) {
            cout << "Train number: " << record[i].train_no << endl
                 << "Train Name: " << record[i].train_name << endl
                 << "Train source: " << record[i].src << endl
                 << "Train Destination: " << record[i].dest << endl
                 << "Train Time: " << record[i].train_time << endl
                 << "---------------------------------------------" << endl;
        }
    }

    void searchByTrainNo(int number, ReservationSystem record[],int size){
        int count = 0;
          for(int i=0;i<size;i++){
                if(record[i].train_no==number){
                cout << "Train number: " << record[i].train_no << endl
                 << "Train Name: " << record[i].train_name << endl
                 << "Train source: " << record[i].src << endl
                 << "Train Destination: " << record[i].dest << endl
                 << "Train Time: " << record[i].train_time << endl;
                }
          }
          if(count==0){
              cout << "No Train Found";
          }
    }

};

int main() {
    ReservationSystem temp;
    ReservationSystem trains[3];

    for(int i=0;i<3;i++){
        cout << "Enter the detail for train " << i+1 << endl;
        trains[i].inpTrainDtl();
    }

    temp.displayRecord(trains, 3);



    return 0;
}
