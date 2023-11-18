     
     digitalWrite(DONT_WALK_L7, HIGH);
     digitalWrite(DONT_WALK_L9, HIGH);
     
    
     //1
     digitalWrite(RED_L1, HIGH); 
     digitalWrite(GREEN_L6, HIGH);
     delay(10000);

     //4
     
     digitalWrite(GREEN_L6, LOW);
     digitalWrite(YELLOW_L5, HIGH);
     delay(3000);

     //5
     digitalWrite(YELLOW_L5, LOW);
     digitalWrite(RED_L4, HIGH); 
     delay(2000);
     

     //6  
     // NEW CYCLE
     if (digitalRead(2)!=0 && led==2) {goto x;}
     digitalWrite(GREEN_L3, HIGH);
     digitalWrite(RED_L1, LOW);
     delay(10000);

   
     //9
     digitalWrite(GREEN_L3, LOW);
     digitalWrite(YELLOW_L2, HIGH);
     delay(3000);

     //10
     digitalWrite(YELLOW_L2, LOW);
     digitalWrite(RED_L1, HIGH);
     delay(2000);
     digitalWrite(RED_L4, LOW);
