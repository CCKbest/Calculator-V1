#include <iostream>

int main () {

    double num1, num2;
    char operation;
    char Wanttocontinue = 'y';

    std::cout << "------------------------------------------------" << "\n";
    std::cout << "          SIMPLE CALCULATOR BY CCKbest          " << "\n";
    std::cout << "------------------------------------------------" << "\n";

do {

    std::cout << "Press one of the symbols on your keyboard to add, substract, etc" << "\n";
    std::cin >> operation;

        if ( operation == '+' ) { // If Else my beloved //

    std::cout << "Enter the first number" <<"\n";
    std::cin >> num1;
    std::cout << "Enter the second number" <<"\n";
    std::cin >> num2;  
    std::cout << "Result : " << num1 + num2 <<"\n";

        } else if ( operation == '-' ) {

        std::cout << "Enter the first number" <<"\n";
        std::cin >> num1;
        std::cout << "Enter the second number" <<"\n";
        std::cin >> num2;  
        std::cout << "Result : " << num1 - num2 <<"\n";

            } else if ( operation == '*' ) {

            std::cout << "Enter the first number" <<"\n";
            std::cin >> num1;
            std::cout << "Enter the second number" <<"\n";
            std::cin >> num2;  
            std::cout << "Result : " << num1 * num2 <<"\n";

                } else if ( operation == '/' ) {          

                std::cout << "Enter the first number" <<"\n";
                std::cin >> num1;
                std::cout << "Enter the second number" <<"\n";
                std::cin >> num2;

                 if( num2 == 0){
                    std::cout << "Error.Code = 'Where the bad bitches at'? Check Cat spinning for more info" << "\n";
                    continue;     
                        // I Wanted to watch Kaguya-Sama love is war not do this //
                        // :crying_emoji 
                 }    

                std::cout << "Result : " << num1 / num2 <<"\n";

                        }else {

                        std::cout << "Fih, Frieren goated btw" << "\n"; 

                        }
                
    std::cout << "Want to continue ( y or Y / n )" << "\n";
    std::cin >> Wanttocontinue;

    }while ( Wanttocontinue == 'y' || Wanttocontinue == 'Y' );

    return 0;

}

