#include <cstdlib> 
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    
    cout << "WELCOME ADVENTURER\nCAN YOU GUESS IF THE GIVEN NUMBER IS HIGHER, LOWER THAN OR EQUAL TO THE NUMBER I'VE CHOOSEN?\n";
    
    void gameplay(){
    cout << "INPUT THE HIGHEST POSSIBLE NATURAL NUMBER I MAY CHOOSE:";
    int range;
    cin >> range;
    
    if (range <= 0) {
        cout << "ERMMM Ackchyually that ain't a natural number dingus";
    }
    else {
    srand(time(0)); 
    int choosen_num = rand() % range; 
    int reference_num = rand() % range; 
    bool actual_higher = false;
    bool actual_lower = false;
    bool actual_equal = false;

    if (choosen_num > reference_num) {
        actual_higher = true;
    }
    else if (choosen_num < reference_num) {
        actual_lower = true;
    }
    else {
        actual_equal = true;
    }
    
    cout << "Is my number higher, lower than or equal to " << reference_num << "? (H/L/E):";
    char choice;
    cin >> choice;
    char choice_upper = toupper(choice);
    bool choice_is_higher = false;
    bool choice_is_lower = false;
    bool choice_is_equal = false;
    if (choice_upper == 'H') {
     choice_is_higher = true;
    }
    else if (choice_upper == 'L') {
     choice_is_lower = true;
    }
    else if (choice_upper == 'E') {
     choice_is_equal = true;
    }
    else {
     cout << "You're no fun, you ruined my game!!! >:(\n ";
    }


    if (choice_is_higher && actual_higher == true) {
     cout << "Woah it is higher! :o The number is " << choosen_num ;
    }
    else if (choice_is_lower && actual_lower == true) {
      cout << "Woah it is lower! :o The number is " << choosen_num ;
    }
    else if (choice_is_equal && actual_equal == true) {
      cout << "Woah they are equal! :o The number is " << choosen_num ;
    }
    else {
     cout << "Get Rekt!!!! >:) The number is " << choosen_num ;
    }

    }
    cout << "Would you like to try again?(Y/N): ";
    char repeat;
    cin >> repeat;
    char repeat_upper = toupper(repeat);
    if (repeat_upper = 'Y') {
        gameplay()
    }
    else {
        exit()
    }

    }  
    return 0; 
}