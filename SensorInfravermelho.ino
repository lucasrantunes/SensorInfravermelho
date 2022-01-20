/* 
  Código para leitura da temperatura do disco de freio
  Foi utilizado sensor infravermelho MLX90614 e um Arduino Leonardo para esenvolvimento desse código
  Posicionar o sensor 1cm do objeto para leituras precisas
*/
#include <Wire.h> // Biblioteca para comunicação I2C
#include <Adafruit_MLX90614.h> // Biblioteca do sensor
Adafruit_MLX90614 sensor_temperatura = Adafruit_MLX90614(); // Cria um objeto sensor_temperatura do tipo MLX90614

void setup() {
  Serial.begin(9600); // Inicia Serial
  Serial.print("Ambiente,Objeto\n");
  sensor_temperatura.begin(); // Inicia sensor_temperatura
}

void loop() {
  
  Serial.print(sensor_temperatura.readAmbientTempC()); 
  Serial.print(","); 
  Serial.print(sensor_temperatura.readObjectTempC()); 
  Serial.println();
  delay(500);

}
