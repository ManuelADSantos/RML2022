// =============================================================
// = Exemplo Motores                                     RML2022
// = Clube de Robótica UC - Rev 1.0
// =
// = Descrição:
// = Este código permite testar os motores
// =
// =============================================================
#include "bot_RML2022.h"

bot_RML2022 jeff;

void setup()
{
    jeff.begin(false, false);
    Serial.begin(9600);
    // put your setup code here, to run once:
    jeff.waitStart();
}

void loop()
{

    //    jeff.move(Motor1, Motor2); // Mover os dois motores

    for (int i = 0; i < 512; ++i)
    {
        jeff.moveMotor1(i - 255); // Mover só o motor 1
        delay(50);
    }
    jeff.moveMotor1(0);
    delay(50);

    for (int i = 0; i < 512; i++)
    {
        jeff.moveMotor2(i - 255); // Mover só o motor 2
        delay(50);
    }
    jeff.moveMotor2(0);

    delay(1000);
}