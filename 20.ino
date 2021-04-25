// примечание: указанные в тексте задания цвета пинов (10 - зеленый, 11 - желтый) не совпадают с подключением на изображении данной схемы (11 - зеленый, 12 - желтый
// Ниже приведен код для пинов, указанных в задании, то есть 10 - зеленый, 11 - желтый

void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(5, LOW);
  digitalWrite(7, LOW);
  digitalWrite(11, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(13, HIGH);
  delay(3000);
  digitalWrite(3, LOW);
  digitalWrite(9, LOW);
  digitalWrite(13, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(10, HIGH);
  delay(3000);
  digitalWrite(4, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(11, HIGH);
  delay(3000);
}