void menual_car() {
   switch(command) {
      case 'S':
        stop_engine();
        break;
      case 'F':
        start_engine(velocity);
        break;
      case 'B':
        back_engine(velocity);
        break;
      case 'L':
        frontF_left();
        break;
      case 'R':
        frontF_right();
        break;
      case 'I':               //FR 45 degree arrow
        slow_front_right();
        break;
      case 'G':               //FL 45 degree arrow
        slow_front_left();
        break;
      case 'J':               //BR 45 degree arrow
        slow_back_right();
        break;
      case 'H':               //BL 45 degree arrow
        slow_back_left();
        break;
      case 'X':
        auto_system = true;
        break;
      default:                //get velocity
        if(command = 'q') {
          velocity = 255;
        }
        else {
          if((command >=48) && (command <= 57)) {
            velocity = (command - 48)*25;
          }
         
        }
    }
}

