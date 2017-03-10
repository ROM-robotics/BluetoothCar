void auto_car() {
  
    int distance = checkSonic();
    Serial.println(distance);
    if( distance <= nearest) {
      //Stop the car
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, LOW);
        analogWrite(EN_A, 0);
        analogWrite(EN_B, 0);
      //Back the car
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, HIGH);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, HIGH);
        analogWrite(EN_A, 150);
        analogWrite(EN_B, 150);     
        delay(50);
     //Turn Front Left
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, HIGH);
        digitalWrite(IN3, HIGH);
        digitalWrite(IN4, LOW);
        analogWrite(EN_A, 200);
        analogWrite(EN_B, 200);     
        delay(200);
    }    
    else {
      //Start the car
        analogWrite(EN_A, 100);
        analogWrite(EN_B, 100);
        digitalWrite(IN1, HIGH);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, HIGH);
        digitalWrite(IN4, LOW);
    }
     switch(command) {
      case 'F':
      auto_system = false;
      break;
      default: break;  
    }
}

