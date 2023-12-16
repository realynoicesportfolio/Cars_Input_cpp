#include <iostream>
using namespace std;

typedef struct {
    char* engine;
    char* Last_owner;
    char* Fuel_type;
    int Number_of_seats;
    int Model_Year;
    int milage1;
    int milage2;
}Car_Maker;


int main() {
    int input;

    Car_Maker Honda_Civic = {"4-Cyl, 1.8L, VTEC", "Scarlett Camolet", "Regular", 5, 2007, 13, 505};
    Car_Maker fourxfour = {"F-1 engine", "Hunter Hank", "Regular fuel", 5, 2019, 40, 515};
    Car_Maker Honda_AMW_One = {"Formula one", "Lewis Hamilton", "Premium", 2, 2022, 13, 505};
    Car_Maker corvet = {"LT2 V8 Engine", "Never owned!", "Premium", 5, 2024, 13, 505};

    cout << "\nIf you want the information on are Honda Civic car input 1";
    cout << "\nIf you want the information on are 4x4 truck we own input 2";
    cout << "\nIf you want the information on are Honda-AMW One car input 3";
    cout << "\nIf you want the information on are Corvet car input 4";
    cout << "\nIf you want to exit input 5";
    cout << "\nPut your input here: ";
    cin >> input;

    switch (input) {
    case 1:
        cout << "\nIf you want the information on this cars engine input 1";
        cout << "\nIf you want the information on the name of the last owner input 2";
        cout << "\nIf you want the information on the fuel type input 3";
        cout << "\nIf you want the information on the number of seats input 4";
        cout << "\nIf you want the information on the model year input 5";
        cout << "\nIf you want the information on the milage of this car input 6";
        cout << "\nIf you want all information input 7";
        cout << "\nIf you want to go back input 8";
        cout << "\nIf you want to exit input 9";
        cout << "\nPut you input here: ";
        cin >> input;

        switch (input) {
        case 1:
            cout << "\nThe cars engine is " << Honda_Civic.engine;
            cout << "\nDo you want to start to start again? (Enter 1 if you do.)";
            cout << "\nDo you want to exit? (If you do enter 2.)";
            cout << "\nPut your input here: ";
            cin >> input;
            
            switch (input) {
            case 1:
                main();
                break;
            
            case 2:
                cout << "\nGoodbye\n";
                return 0;
                break;

            default:
                cout << "\nYou entered a wrong number.\n";
                return 0;
                break;
            }
        
        case 2:
            cout << "\nThe owner was " << Honda_Civic.Last_owner;
            cout << "\nDo you want to start to start again? (Enter 1 if you do.)";
            cout << "\nDo you want to exit? (If you do enter 2.)";
            cout << "\nPut your input here: ";
            cin >> input;

            switch (input) {
            case 1:
                main();
                break;
            
            case 2:
                cout << "\nGoodbye\n";
                return 0;
                break;

            default:
                cout << "\nYou did not input the right number.\n";
                return 0;
                break;
            }
            break;

            case 3:
                cout << "\nThe fuel type is " << Honda_Civic.Fuel_type;
                cout << "\nDo you want to go back to the start? (If you do input 1)";
                cout << "\nTo exit input 2";
                cout << "\nPut your input here: ";
                cin >> input;

                switch (input) {
                case 1:
                    main();
                    break;
                
                case 2:
                    cout << "\nGoodbye\n";
                    return 0;
                    break;

                default:
                    cout << "\nYou failed to input the right number.\n";
                    return 0;
                    break;
                }

                case 4:
                    cout << "\nThere are " << Honda_Civic.Number_of_seats << " seats.";
                    cout << "\nDo you want to go back to the start? (If you do input 1)";
                    cout << "\nTo exit input 2";
                    cout << "\nPut your input here: ";
                    cin >> input;

                    switch (input) {
                    case 1:
                        main();
                        break;
                    
                    case 2:
                        cout << "\nGoodbye.\n";
                        return 0;
                        break;

                    default:
                        cout << "\nYou entered the wrong number.\n";
                        return 0;
                        break;
                    }

                    case 5:
                        cout << "\nThe model year is " << Honda_Civic.Model_Year;
                        cout << "\nDo you want to go back to the start? (If you do input 1)";
                        cout << "\nTo exit input 2";
                        cout << "\nPut your input here: ";
                        cin >> input;

                        switch (input) {
                        case 1:
                        main();
                        break;
                    
                        case 2:
                        cout << "\nGoodbye.\n";
                        return 0;
                        break;

                        default:
                        cout << "\nYou entered the wrong number.\n";
                        return 0;
                        break;
                    }

                    case 6:
                        cout << "\nThe milage is " << Honda_Civic.milage1 << "," << Honda_Civic.milage2;
                        cout << "\nDo you want to go back to the start? (If you do input 1)";
                        cout << "\nTo exit input 2";
                        cout << "\nPut your input here: ";
                        cin >> input;

                        switch (input) {
                        case 1:
                        main();
                        break;
                    
                        case 2:
                        cout << "\nGoodbye.\n";
                        return 0;
                        break;

                        default:
                        cout << "\nYou entered the wrong number.\n";
                        return 0;
                        break;
                    }


                    case 7:
                       cout << "\nThe cars engine is " << Honda_Civic.engine;
                       cout << "\nThe owner was " << Honda_Civic.Last_owner;
                       cout << "\nThe fuel type is " << Honda_Civic.Fuel_type;
                       cout << "\nThere are " << Honda_Civic.Number_of_seats << " seats.";
                       cout << "\nThe model year is " << Honda_Civic.Model_Year;
                       cout << "\nThe milage is " << Honda_Civic.milage1 << "," << Honda_Civic.milage2;
                       cout << "\nDo you want to go back to the start? (If you do input 1)";
                       cout << "\nTo exit input 2";
                       cout << "\nPut your input here: ";
                       cin >> input;

                       switch (input) {
                       case 1:
                       main();
                       break;
                    
                       case 2:
                       cout << "\nGoodbye.\n";
                       return 0;
                       break;

                       default:
                       cout << "\nYou entered the wrong number.\n";
                       return 0;
                       break;
                    }

                    case 8:
                       main();
                       return 0;
                       break;

                       case 9:
                       return 0;
                       break;
        default:
            cout << "\nYou failed to input the right number\n";
            return 0;
            break;
        }
        break;
    
        case 2:
        cout << "\nIf you want the information on this cars engine input 1";
        cout << "\nIf you want the information on the name of the last owner input 2";
        cout << "\nIf you want the information on the fuel type input 3";
        cout << "\nIf you want the information on the number of seats input 4";
        cout << "\nIf you want the information on the model year input 5";
        cout << "\nIf you want the information on the milage of this car input 6";
        cout << "\nIf you want all information input 7";
        cout << "\nIf you want to go back input 8";
        cout << "\nIf you want to exit input 9";
        cout << "\nPut you input here: ";
        cin >> input;
        
        switch(input) {
        case 1:
            cout << "\nThe engine is " << fourxfour.engine;
            cout << "\nDo you want to go back to the start? (If you do input 1)";
            cout << "\nTo exit input 2";
            cout << "\nPut your input here: ";
            cin >> input;

            switch (input) {
            case 1:
            main();
            break;
                    
            case 2:
            cout << "\nGoodbye.\n";
            return 0;
            break;

            default:
            cout << "\nYou entered the wrong number.\n";
            return 0;
            break;
            }
            
            case 2:
            cout << "\nThe owner was " << fourxfour.Last_owner;
            cout << "\nDo you want to go back to the start? (If you do input 1)";
            cout << "\nTo exit input 2";
            cout << "\nPut your input here: ";
            cin >> input;

            switch (input) {
            case 1:
            main();
            break;
                    
            case 2:
            cout << "\nGoodbye.\n";
            return 0;
            break;

            default:
            cout << "\nYou entered the wrong number.\n";
            return 0;
            break;
            }
        
            case 3:
            cout << "\nThe fuel type is " << fourxfour.Fuel_type;
            cout << "\nDo you want to go back to the start? (If you do input 1)";
            cout << "\nTo exit input 2";
            cout << "\nPut your input here: ";
            cin >> input;

            switch (input) {
            case 1:
            main();
            break;
                    
            case 2:
            cout << "\nGoodbye.\n";
            return 0;
            break;

            default:
            cout << "\nYou entered the wrong number.\n";
            return 0;
            break;
            }

            case 4:
            cout << "\nThe number of seats is " << fourxfour.Number_of_seats;
            cout << "\nDo you want to go back to the start? (If you do input 1)";
            cout << "\nTo exit input 2";
            cout << "\nPut your input here: ";
            cin >> input;

            switch (input) {
            case 1:
            main();
            break;
                    
            case 2:
            cout << "\nGoodbye.\n";
            return 0;
            break;

            default:
            cout << "\nYou entered the wrong number.\n";
            return 0;
            break;
            }

            case 5:
            cout << "\nThe model year is " << fourxfour.Model_Year;
            cout << "\nDo you want to go back to the start? (If you do input 1)";
            cout << "\nTo exit input 2";
            cout << "\nPut your input here: ";
            cin >> input;

            switch (input) {
            case 1:
            main();
            break;
                    
            case 2:
            cout << "\nGoodbye.\n";
            return 0;
            break;

            default:
            cout << "\nYou entered the wrong number.\n";
            return 0;
            break;
            }

            case 6:
            cout << "\nThe milage is " << fourxfour.milage1 << "," << fourxfour.milage2;
            cout << "\nDo you want to go back to the start? (If you do input 1)";
            cout << "\nTo exit input 2";
            cout << "\nPut your input here: ";
            cin >> input;

            switch (input) {
            case 1:
            main();
            break;
                    
            case 2:
            cout << "\nGoodbye.\n";
            return 0;
            break;

            default:
            cout << "\nYou entered the wrong number.\n";
            return 0;
            break;
            }

            case 7:
            cout << "\nThe engine is " << fourxfour.engine;
            cout << "\nThe owner was " << fourxfour.Last_owner;
            cout << "\nThe fuel type is " << fourxfour.Fuel_type;
            cout << "\nThe number of seats is " << fourxfour.Number_of_seats;
            cout << "\nThe model year is " << fourxfour.Model_Year;
            cout << "\nThe milage is " << fourxfour.milage1 << "," << fourxfour.milage2;
            cout << "\nDo you want to go back to the start? (If you do input 1)";
            cout << "\nTo exit input 2";
            cout << "\nPut your input here: ";
            cin >> input;

            switch (input) {
            case 1:
            main();
            break;
                    
            case 2:
            cout << "\nGoodbye.\n";
            return 0;
            break;

            default:
            cout << "\nYou entered the wrong number.\n";
            return 0;
            break;
            }

            case 8:
            main();
            return 0;
            break;

            case 9:
            return 0;
            break;

        default:
            cout << "\nyou have entered a incorect numerical value.\n";
            break;
        }
        
        case 3:
        cout << "\nIf you want the information on this cars engine input 1";
        cout << "\nIf you want the information on the name of the last owner input 2";
        cout << "\nIf you want the information on the fuel type input 3";
        cout << "\nIf you want the information on the number of seats input 4";
        cout << "\nIf you want the information on the model year input 5";
        cout << "\nIf you want the information on the milage of this car input 6";
        cout << "\nIf you want all information input 7";
        cout << "\nIf you want to go back input 8";
        cout << "\nIf you want to exit input 9";
        cout << "\nPut you input here: ";
        cin >> input;

        switch(input) {
        case 1:
            cout << "\nThe engine is " << Honda_AMW_One.engine;
            cout << "\nDo you want to go back to the start? (If you do input 1)";
            cout << "\nTo exit input 2";
            cout << "\nPut your input here: ";
            cin >> input;

            switch (input) {
            case 1:
            main();
            break;
                    
            case 2:
            cout << "\nGoodbye.\n";
            return 0;
            break;

            default:
            cout << "\nYou entered the wrong number.\n";
            return 0;
            break;
            }

        case 2:
            cout << "\nThe owner was " << Honda_AMW_One.Last_owner;
            cout << "\nDo you want to go back to the start? (If you do input 1)";
            cout << "\nTo exit input 2";
            cout << "\nPut your input here: ";
            cin >> input;

            switch (input) {
            case 1:
            main();
            break;
                    
            case 2:
            cout << "\nGoodbye.\n";
            return 0;
            break;

            default:
            cout << "\nYou entered the wrong number.\n";
            return 0;
            break;
            }
            
        case 3:
            cout << "\nThe fuel type is " << Honda_AMW_One.Fuel_type;
            cout << "\nDo you want to go back to the start? (If you do input 1)";
            cout << "\nTo exit input 2";
            cout << "\nPut your input here: ";
            cin >> input;

            switch (input) {
            case 1:
            main();
            break;
                    
            case 2:
            cout << "\nGoodbye.\n";
            return 0;
            break;

            default:
            cout << "\nYou entered the wrong number.\n";
            return 0;
            break;
            }

        case 4:
            cout << "\nThe amount of seats are " << Honda_AMW_One.Number_of_seats;
            cout << "\nDo you want to go back to the start? (If you do input 1)";
            cout << "\nTo exit input 2";
            cout << "\nPut your input here: ";
            cin >> input;

            switch (input) {
            case 1:
            main();
            break;
                    
            case 2:
            cout << "\nGoodbye.\n";
            return 0;
            break;

            default:
            cout << "\nYou entered the wrong number.\n";
            return 0;
            break;
            }

        case 5:
            cout << "\nThe model year is " << Honda_AMW_One.Model_Year;
            cout << "\nDo you want to go back to the start? (If you do input 1)";
            cout << "\nTo exit input 2";
            cout << "\nPut your input here: ";
            cin >> input;

            switch (input) {
            case 1:
            main();
            break;
                    
            case 2:
            cout << "\nGoodbye.\n";
            return 0;
            break;

            default:
            cout << "\nYou entered the wrong number.\n";
            return 0;
            break;
            }

        case 6:
            cout << "\nThe milage is " << Honda_AMW_One.milage1 << "," << Honda_AMW_One.milage2;
            cout << "\nDo you want to go back to the start? (If you do input 1)";
            cout << "\nTo exit input 2";
            cout << "\nPut your input here: ";
            cin >> input;

            switch (input) {
            case 1:
            main();
            break;
                    
            case 2:
            cout << "\nGoodbye.\n";
            return 0;
            break;

            default:
            cout << "\nYou entered the wrong number.\n";
            return 0;
            break;
            }

        case 7:
            cout << "\nThe engine is " << Honda_AMW_One.engine;
            cout << "\nThe owner was " << Honda_AMW_One.Last_owner;
            cout << "\nThe fuel type is " << Honda_AMW_One.Fuel_type;
            cout << "\nThe number of seats is " << Honda_AMW_One.Number_of_seats;
            cout << "\nThe model year is " << Honda_AMW_One.Model_Year;
            cout << "\nThe milage is " << Honda_AMW_One.milage1 << "," << fourxfour.milage2;
            cout << "\nDo you want to go back to the start? (If you do input 1)";
            cout << "\nTo exit input 2";
            cout << "\nPut your input here: ";
            cin >> input;

            switch (input) {
            case 1:
            main();
            break;
                    
            case 2:
            cout << "\nGoodbye.\n";
            return 0;
            break;

            default:
            cout << "\nYou entered the wrong number.\n";
            return 0;
            break;
            }
        
        case 8:
            main();
            return 0;
            break;

        case 9:
            return 0;
            break;
        }

        case 4:
            cout << "\nIf you want the information on this cars engine input 1";
            cout << "\nIf you want the information on the name of the last owner input 2";
            cout << "\nIf you want the information on the fuel type input 3";
            cout << "\nIf you want the information on the number of seats input 4";
            cout << "\nIf you want the information on the model year input 5";
            cout << "\nIf you want the information on the milage of this car input 6";
            cout << "\nIf you want all information input 7";
            cout << "\nIf you want to go back input 8";
            cout << "\nIf you want to exit input 9";
            cout << "\nPut you input here: ";
            cin >> input;

            switch (input) {
            case 1:
                cout << "\nThe engine is " << corvet.engine;
                cout << "\nDo you want to go back to the start? (If you do input 1)";
                cout << "\nTo exit input 2";
                cout << "\nPut your input here: ";
                cin >> input;

                switch (input) {
                case 1:
                main();
                break;
                    
                case 2:
                cout << "\nGoodbye.\n";
                return 0;
                break;

                default:
                cout << "\nYou entered the wrong number.\n";
                return 0;
                break;
            }
                
            case 2:
                cout << "\nThe owner was " << corvet.Last_owner;
                cout << "\nDo you want to go back to the start? (If you do input 1)";
                cout << "\nTo exit input 2";
                cout << "\nPut your input here: ";
                cin >> input;

                switch (input) {
                case 1:
                main();
                break;
                    
                case 2:
                cout << "\nGoodbye.\n";
                return 0;
                break;

                default:
                cout << "\nYou entered the wrong number.\n";
                return 0;
                break;
            }
                
            case 3:
                cout << "\nThe fuel type is " << corvet.Fuel_type;
                cout << "\nDo you want to go back to the start? (If you do input 1)";
                cout << "\nTo exit input 2";
                cout << "\nPut your input here: ";
                cin >> input;

                switch (input) {
                case 1:
                main();
                break;
                    
                case 2:
                cout << "\nGoodbye.\n";
                return 0;
                break;

                default:
                cout << "\nYou entered the wrong number.\n";
                return 0;
                break;
            }

            case 4:
                cout << "\nThe seats are " << corvet.Number_of_seats;
                cout << "\nDo you want to go back to the start? (If you do input 1)";
                cout << "\nTo exit input 2";
                cout << "\nPut your input here: ";
                cin >> input;

                switch (input) {
                case 1:
                main();
                break;
                    
                case 2:
                cout << "\nGoodbye.\n";
                return 0;
                break;

                default:
                cout << "\nYou entered the wrong number.\n";
                return 0;
                break;
            }

            case 5:
                cout << "\nThe model year is " << corvet.Model_Year;
                cout << "\nDo you want to go back to the start? (If you do input 1)";
                cout << "\nTo exit input 2";
                cout << "\nPut your input here: ";
                cin >> input;

                switch (input) {
                case 1:
                main();
                break;
                    
                case 2:
                cout << "\nGoodbye.\n";
                return 0;
                break;

                default:
                cout << "\nYou entered the wrong number.\n";
                return 0;
                break;
            }

            case 6:
                cout << "\nThe amount of milage is " << corvet.milage1 << "," << corvet.milage2;
                cout << "\nDo you want to go back to the start? (If you do input 1)";
                cout << "\nTo exit input 2";
                cout << "\nPut your input here: ";
                cin >> input;

                switch (input) {
                case 1:
                main();
                break;
                    
                case 2:
                cout << "\nGoodbye.\n";
                return 0;
                break;

                default:
                cout << "\nYou entered the wrong number.\n";
                return 0;
                break;
            }

            case 7:
                cout << "\nThe engine is " << corvet.engine;
                cout << "\nThe owner was " << corvet.Last_owner;
                cout << "\nThe fuel type is " << corvet.Fuel_type;
                cout << "\nThe seats are " << corvet.Number_of_seats;
                cout << "\nThe model year is " << corvet.Model_Year;
                cout << "\nThe amount of milage is " << corvet.milage1 << "," << corvet.milage2;
                cout << "\nDo you want to go back to the start? (If you do input 1)";
                cout << "\nTo exit input 2";
                cout << "\nPut your input here: ";
                cin >> input;

                switch (input) {
                case 1:
                main();
                break;
                    
                case 2:
                cout << "\nGoodbye.\n";
                return 0;
                break;

                default:
                cout << "\nYou entered the wrong number.\n";
                return 0;
                break;
            }

            case 8:
                main();
                return 0;
                break;

            case 9:
                return 0;
                break;

            }

            case 5:
                cout << "\nGoodbye.";
                return 0;
                break;

    default:
        cout << "\nYou entered a numerical value too high or too low.\n";
        return 0;
        break;
    }
}
