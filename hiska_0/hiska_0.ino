
int alarm_buzzer=12;
int bell_buzzer=13;
int button = 11;
int buttonState = LOW;
int l1= 2;
int l2= 3;
int l3= 4;
int l4= 5;
int l5= 6;
int l6= 7;
int l7= 8;
int l8= 9;




void setup() {  
  pinMode(button, INPUT); 
  pinMode(alarm_buzzer, OUTPUT); 
  pinMode(bell_buzzer, OUTPUT);  

  pinMode(l1, OUTPUT); 
  pinMode(l2, OUTPUT); 
  pinMode(l3, OUTPUT); 
  pinMode(l4, OUTPUT); 
  pinMode(l5, OUTPUT); 
  pinMode(l6, OUTPUT); 
  pinMode(l7, OUTPUT); 
  pinMode(l8, OUTPUT); 
}

void loop() {
       for (int i=2; i<10; i++){
        tone(bell_buzzer, 200);
        digitalWrite ( i, HIGH);
        delay(50);
        noTone(bell_buzzer);
        digitalWrite ( i, LOW);
        delay(50);
      }

    
   //
}
