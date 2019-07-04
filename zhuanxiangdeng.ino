void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}
int income=0;
void loop()
{
	if(Serial.available()>0)
    {
    	income=Serial.read();
      	switch(income)
        {
        	case 'f':
          		forward();
          		break;
          	case 'b':
          		backward();
          		break;
          	case 'l':
          		left();
              leftlight();
          		break;
          	case 'r':
          		right();
              rightlight();
          		break;
          	case 's':
          		stop();
          		break;
          	default:
          		break;
        }
    }
}

void forward()
{
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
}

void backward()
{
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
}

void left()
{
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
}

void right()
{
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
}

void stop()
{
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
}

void leftlight()
{
  for(;;){
  digitalWrite(5, HIGH);
  delay(300); // Wait for 1000 millisecond(s)
  digitalWrite(5, LOW);
  delay(300); // Wait for 1000 millisecond(s)
  }
}

void rightlight()
{
  for(;;){
  digitalWrite(8, HIGH);
  delay(300); // Wait for 1000 millisecond(s)
  digitalWrite(8, LOW);
  delay(300); // Wait for 1000 millisecond(s)
  }
}
