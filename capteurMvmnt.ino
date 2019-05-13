//definition des broches utilisées 
const int trigPin = 9;
const int echoPin = 10;
const int buzzer = 11;
const int ledPin = 13;

//definition variables
long duree;
int distance;
int mesureDistance;

void setup() {
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(buzzer, OUTPUT);
pinMode(ledPin, OUTPUT);
Serial.begin(9600); // Starts the serial communication
}

void loop(){
//clear the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);

//sets the trigPin on HIGH
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

//lecture du echoPin, et retourner le song 
duree = pulseIn(echoPin, HIGH);

//calcul distance
distance = duree*0.034/2;
mesureDistance = distance;
if (mesureDistance <= 5){
  digitalWrite(buzzer, HIGH);
  digitalWrite(ledPin, HIGH);
                        }
else{ // sinon on éteind la led
  digitalWrite(buzzer, LOW);
  digitalWrite(ledPin, LOW);
  Serial.print(distance);
  Serial.print(" cm ");
  Serial.print(duree);
  Serial.println(" ms");
    }
    delay(100);

}
