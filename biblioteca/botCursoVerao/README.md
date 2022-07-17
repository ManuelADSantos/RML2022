# Bibloteca CursoVerao

```cpp
/*!
  @brief   Set up the robot
  @param   M1 If the motor 1 spins the correct way or not
  @param   M2 If the motor 2 spins the correct way or not
*/
void botCursoVerao::begin(bool M1, bool M2);

/*!
  @brief Turn the fan on
  @note Control Logic is Inverted (1 = Off, 0 = On)
*/
void botCursoVerao::fanOn();

/*!
  @brief Turn the fan off
  @note Control Logic is Inverted (1 = Off, 0 = On)
*/
void botCursoVerao::fanOff();

/*!
  @brief   Waits in a infinite loop until the button is pressed to exit
*/
void botCursoVerao::waitStart();

/*!
  @brief   Read the button status
  @return  The button Status
*/
bool botCursoVerao::readButton();

/*!
  @brief   Play a sound on the buzzer
  @param   Val Tone to be played
*/
void botCursoVerao::buzzerPlay(uint8_t val);

/*!
  @brief   Set the color to a given R G & B Values
  @param   Red Red Amount 0 -> 255
  @param   Green Red Amount 0 -> 255
  @param   Blue Red Amount 0 -> 255
*/
void botCursoVerao::pixelSetColor(uint8_t Red, uint8_t Green, uint8_t Blue);

/*!
  @brief   Set the color to a given R G & B Values
  @param   Brightness Brightness Amount 0 -> 255
*/
void botCursoVerao::pixelSetBrightness(uint8_t Brightness);

/*!
  @brief   Get the sensor value from the flame sensor
  @return  The flame sensor value 0 -> 1023
*/
uint16_t botCursoVerao::getFlame();

/*!
  @brief   Print the current value of the flame sensor
*/
void botCursoVerao::printFlame();


/*!
 *  @brief  Return the Red, Green, Blue, Clear values
 *  @param  RGBC[0]
 *          Red value
 *  @param  RGBC[1]
 *          Green value
 *  @param  RGBC[2]
 *          Blue value
 *  @param  RGBC[3]
 *          Clear channel value
 */
void botCursoVerao::getColor(uint16_t RGBC[]);

/*!
 *  @brief Enable the color Sensor
 */
void botCursoVerao::enableColorSensor();

/*!
 *  @brief Disable the color Sensor
 */
void botCursoVerao::disableColorSensor();


/*!
  @brief   Control Motor 1
  @param   pwm The desired PWM for the motor, accepts value between
               and only between -255 to 255
*/
void botCursoVerao::moveMotor1(int16_t pwm); // aceita valores entre -255 e 255

/*!
  @brief   Control Motor 2
  @param   pwm The desired PWM for the motor, accepts value between
               and only between -255 to 255
*/
void botCursoVerao::moveMotor2(int16_t pwm); // aceita valores entre -255 e 255

/*!
  @brief   Control the motors speed
  @param   pwmM1 The desired PWM for motor 1, accepts value between
               and only between -255 to 255
  @param   pwmM2 The desired PWM for motor 2, accepts value between
               and only between -255 to 255
*/
void botCursoVerao::move(int16_t pwmM1, int16_t pwmM2);

/*!
  @brief   Bring Motors to a stop, this blocks the code for 50 milliseconds
*/
void botCursoVerao::stopMotors();

/*!
  @brief   Get the LiDAR distance value
  @param   lidarLocation The lidar to return the distance |
           ESQUERDA ou 1 Lidar esquerdo |
           CENTRO ou 2 Lidar centro |
           DIREITA ou 3 Lidar direito |
  @return  the distance value
*/
uint16_t botCursoVerao::lidarGetDistance(uint8_t lidarLocation);

/*!
  @brief   Print all the lidar distances
*/
void botCursoVerao::lidarPrint();

/*!
  @brief   Print all the detected I2C devices
*/
void botCursoVerao::printI2C();
```