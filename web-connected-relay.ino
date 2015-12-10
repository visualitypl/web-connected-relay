int relayPort = D0;

void setup()
{
   pinMode(relayPort, OUTPUT);
   Spark.function("relay",relayToggle);
   digitalWrite(relayPort, HIGH);
}

void loop()
{
}

int relayToggle(String command) {
    if (command=="on") {
        digitalWrite(relayPort,LOW);
        return 1;
    }
    else if (command=="off") {
        digitalWrite(relayPort,HIGH);
        return 0;
    }
    else if (command=="toggle") {
        digitalWrite(relayPort,LOW);
        delay(500);
        digitalWrite(relayPort,HIGH);
        delay(100);

        digitalWrite(relayPort,LOW);
        delay(1500);
        digitalWrite(relayPort,HIGH);
        return 0;
    }
    else {
        Spark.publish("error");
        Spark.publish(command);
        return -1;
    }
}