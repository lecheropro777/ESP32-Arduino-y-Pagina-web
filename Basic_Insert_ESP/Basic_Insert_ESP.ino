#include "Credentials.h"
#define MYSQL_DEBUG_PORT      Serial
#define _MYSQL_LOGLEVEL_      1
#include <MySQL_Generic.h>
#define USING_HOST_NAME     true
#if USING_HOST_NAME
  char server[] = "192.168.0.9";
#else
  IPAddress server(192, 168, 0, 9);
#endif
uint16_t server_port=3306;
char default_database[]="prueba";
char default_table[]= "botones";
MySQL_Connection conn((Client *)&client);
MySQL_Query *query_mem;
void setup()
{
  Serial.begin(9600);
  while (!Serial && millis() < 5000);
  MYSQL_DISPLAY1("\nStarting Basic_Insert_ESP on", ARDUINO_BOARD);
  MYSQL_DISPLAY(MYSQL_MARIADB_GENERIC_VERSION);
  MYSQL_DISPLAY1("Connecting to", ssid);
  WiFi.begin(ssid, pass);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    MYSQL_DISPLAY0(".");
  }
  MYSQL_DISPLAY1("Connected to network. My IP address is:", WiFi.localIP());
}
String Red;
void runInsertRed(){
  String INSERT_SQLRed = String("INSERT INTO ") + default_database + "." + default_table+ " (btnColor) VALUES ('" + Red + "')";
  MySQL_Query query_mem = MySQL_Query(&conn);
  if (conn.connected()){
    MYSQL_DISPLAY(INSERT_SQLRed);
    if ( !query_mem.execute(INSERT_SQLRed.c_str())){
      MYSQL_DISPLAY("Error");}
    else{
      MYSQL_DISPLAY("Insertado");}
  }
  else{
    MYSQL_DISPLAY("Desconectado");}
    }
void loop(){
  if(Serial.available() > 0){
  Red = Serial.readString();
  Serial.println(Red);
    if (conn.connectNonBlocking(server, server_port, user, password) != RESULT_FAIL){
      delay(500);
      runInsertRed();}
    else{}
    }

}
    
