/* 
  Código para leitura da temperatura do disco de freio
  Foi utilizado sensor infravermelho MLX90614 e um Arduino Leonardo para esenvolvimento desse código
  Posicionar o sensor 1cm do objeto para leituras precisas
*/
#include <Wire.h> // Biblioteca para comunicação I2C
#include <Adafruit_MLX90614.h> // Biblioteca do sensor
Adafruit_MLX90614 MeuSensor = Adafruit_MLX90614(); // Cria um objeto MeuSensor do tipo MLX90614

void setup() {
  Serial.begin(9600); // Inicia Serial
  MeuSensor.begin(); // Inicia MeuSensor

}

void loop() {
  
  Serial.print("Ambiente = "); 
  Serial.print(MeuSensor.readAmbientTempC()); 
  Serial.print("*C\tObjecto = "); 
  Serial.print(MeuSensor.readObjectTempC()); 
  Serial.println("*C");
  Serial.println();
  delay(500);

}
