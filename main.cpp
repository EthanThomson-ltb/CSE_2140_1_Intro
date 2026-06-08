#include <iostream>
#include <string>
using namespace std;
int main() {

    int algorithmNum;
    char loopEnd = 'y';

    cout << "-----Request an algorithm----- \n\n";

    while (loopEnd == 'y') {
        cout << "--1-- Boolean Review\n";
        cout << "--2-- While Loop: Triangle\n";
        cout << "--3-- For Loop: Sum and Average \n";
        cout << "--4-- For Loop: Right Angle Triangle\n";
        cout << "--5-- For Loop: FizzBuzz\n";
        cout << "--6-- Strings\n";

        cout << "\n\n Input algorithm Selection:";
        cin >> algorithmNum;
        cout << "\n\n\n\n";

        switch (algorithmNum) {
            case 1: {
                cout << "-----Boolean Review-----\n\n";

                int boolIone;
                int boolItwo;
                bool Eqlbool;
                bool Smlbool;
                cout << "Enter the two numbers:" << endl;
                cin >> boolIone >> boolItwo;
                Eqlbool = (boolIone == boolItwo);
                Smlbool = (boolIone < boolItwo);
                if (Eqlbool) {
                    cout << "The numbers are equal.";
                } else if (Smlbool) {
                    cout << "The second number is bigger.";
                } else {
                    cout << "The first number is bigger.";
                }
                
                break;
            }
            case 2: {
                cout << "-----While Loop: Triangle-----\n\n";

                int nTri;
                int tNumtri = 0;
                int iMaintri;
                int iDrawtri;
                int yTri;
                cout << "Please enter the number of triangles: ";
                cin >> nTri;
                for (iMaintri = 1; iMaintri <= nTri; iMaintri++) {
                    tNumtri += iMaintri;
                    cout << endl << "T" << iMaintri << " = " << tNumtri << endl;
                    for (yTri = 1; yTri <= iMaintri; yTri++) {
                        for (iDrawtri = 1; iDrawtri <= iMaintri - yTri; iDrawtri++) {
                            cout << " ";
                        }
                        for (iDrawtri = 1; iDrawtri <= yTri; iDrawtri++) {
                            cout << "* ";
                        }
                        cout << endl;
                    }
                }

                break;
            }
            case 3: {
                cout << "-----For Loop: Sum and Average -----\n\n";

                int iAvsum;
                int inputAvsum;
                int sumAvsum = 0;
                cout << "Input the numbers:" << endl;
                for (iAvsum = 1; iAvsum <= 10; iAvsum++) {
                    cout << "Number-" << iAvsum << ": ";
                    cin >> inputAvsum;
                    sumAvsum += inputAvsum;
                }
                cout << endl << "The sum is: " << sumAvsum << endl << "The average is: " << sumAvsum / 10.0;

                break;
            }
            case 4: {
                cout << "-----For Loop: Right Angle Triangle-----\n\n";

                int xTritwo;
                int yTritwo;
                int nTritwo;
                cout << "Please enter the height of the triangle as an integer: ";
                cin >> nTritwo;
                cout << endl;
                for (yTritwo = 1; yTritwo <= nTritwo; yTritwo++) {
                    for (xTritwo = 0; xTritwo <= yTritwo - 1; xTritwo++) {
                        cout << yTritwo;
                    }
                    cout << endl << endl;
                }

                break;
            }
            case 5: {
                cout << "-----For Loop: FizzBuzz-----\n\n";

                int nFb;
                int iFb;
                cout << "Please enter how many numbers to print: ";
                cin >> nFb;
                cout << endl;
                for (iFb = 1; iFb <= nFb; iFb++) {
                    if (iFb % 3 == 0) {
                        cout << "Fizz";
                    }
                    if (iFb % 5 == 0){
                        cout << "Buzz";
                    }
                    if (iFb % 3 != 0 && iFb % 5 != 0) {
                        cout << iFb << " ";
                    } else {
                        cout << " ";
                    }
                }

                break;
            }
            case 6: {
                cout << "-----Strings-----\n\n";

                string str1;
                string str2;
                string str3;
                cout << "Is water wet? Yes or No: ";
                cin >> str1;
                if ((str1.compare("Yes")) == 0 || (str1.compare("yes")) == 0) {
                    cout << "Well it is technically something that is covered in water, therefor you could call it wet. So I would agree.";
                } else if ((str1.compare("No")) == 0 || (str1.compare("no")) == 0) {
                    cout << "Well it can't be wet if it's made of water, that would be like saying that I got dirt dirty because I dumped more dirt on it. So I would agree.";
                } else {
                    cout << "ERROR";
                }
                cout << endl << endl << "Please enter a sentence: ";
                cin >> str2;
                cout << "Please enter a second sentence: ";
                cin >> str3;
                cout << "Combined sentences: " << endl << str2 + " " + str3;

                break;
            }
            default:
                cout << "Algorithm not recognized";
        }

        cout << "\n\n\n\n";
        cout << "New algorithm?  y or n:";
        cin >> loopEnd;
        if (loopEnd != 'n' && loopEnd != 'y') {
            cout << "ERROR";
            break;
        } else if (loopEnd == 'y') {
            cout << "-----Request a new algorithm----- \n\n";
        } else {
            cout << "Good bye!";
            break;
        }

    }

    return 0;

}