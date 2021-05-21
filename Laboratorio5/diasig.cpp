#include <iostream>

using namespace std;

int main(void)
{
    int dd, mm, aa, ddSig, mmSig, aaSig;

    cout << endl;
    cout << "CÁLCULO DEL DÍA SIGUIENTE" << endl << endl;

    cout << "Digite tres enteros correspondiente a día, mes y año: ";
    cin >> dd >> mm >> aa;

    switch(mm){
        //grupo de meses con 31 dias
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
            if(dd >= 1 && dd <= 30){
                ddSig = dd + 1;
                mmSig = mm;
                aaSig = aa;
                cout << "El día siguiente es: " << ddSig <<"/" << mmSig << "/" << aaSig << endl;
            }
            else
                if(dd == 31){
                    ddSig = 1;
                    mmSig = mm + 1;
                    aaSig = aa;
                    cout << "El día siguiente es: " << ddSig <<"/" << mmSig << "/" << aaSig << endl;
                }
                else
                    cout << "Dato no válido para día" << endl;
            break;
//grupo de meses con 30 dias
        case 4:
        case 6:
        case 9:
        case 11:
            if(dd >= 1 && dd <= 29){
                ddSig = dd + 1;
                mmSig = mm;
                aaSig = aa;
                cout << "El día siguiente es: " << ddSig <<"/" << mmSig << "/" << aaSig << endl;
        }
            else
                if(dd == 30){
                    ddSig = 1;
                    mmSig = mm + 1;
                    aaSig = aa;
                    cout << "El día siguiente es: " << ddSig <<"/" << mmSig << "/" << aaSig << endl;
                }
                else
                    cout << "Dato no válido para día" << endl;
            break;   
                 //diciembre es caso aparte por tener el ultimo dia del año            
        case 12:
            if(dd >= 1 && dd <= 30){
                ddSig = dd + 1;
                mmSig = mm;
                aaSig = aa;
                cout << "El día siguiente es: " << ddSig <<"/" << mmSig << "/" << aaSig << endl;
            }
            else
                if(dd == 31){
                    ddSig = 1;
                    mmSig = 1;
                    aaSig = aa + 1;
                    cout << "El día siguiente es: " << ddSig <<"/" << mmSig << "/" << aaSig << endl;
                }
                else
                    cout << "Dato no válido para día" << endl;
            break;              
//febrero va aparte porque es irregular con sus dias
        case 2:
        //bisiesto
            if(aa % 400 == 0 || (aa % 4 == 0 && aa % 100 != 0))
                if(dd >= 1 && dd <= 28){
                    ddSig = dd + 1;
                    mmSig = mm;
                    aaSig = aa;
                    cout << "El día siguiente es: " << ddSig <<"/" << mmSig << "/" << aaSig << endl;
                }
                

                else
                    if(dd == 29){
                        ddSig = 1;
                        mmSig = 3;
                        aaSig = aa;
                        cout << "El día siguiente es: " << ddSig <<"/" << mmSig << "/" << aaSig << endl;
                }
                    else
                        cout << "Dato no válido para día" << endl;
//fin bisiesto
            else
                if(dd == 1 && dd <= 27){
                    ddSig = dd + 1;
                    mmSig = mm;
                    aaSig = aa;
                    cout << "El día siguiente es: " << ddSig <<"/" << mmSig << "/" << aaSig << endl;
            }
                else
                    if(dd == 28){
                        ddSig = 1;
                        mmSig = 3;
                        aaSig = aa;
                    cout << "El día siguiente es: " << ddSig <<"/" << mmSig << "/" << aaSig << endl;
                    }
                    else
                        cout << "Dato no válido para día" << endl;
            break;
            
        default:
            cout << "Dato no válido para mes" << endl;
    }

    cout << endl;
    return 0;
}
