#include <ArduinoJson.h>

/*========================================================*/

String getJSONString_fromstatus(float temp, int light,String mac ,float lat, float lgn, String key){
  /*
   * put all relevant data from esp in a "json formatted" String
   */
  StaticJsonDocument<1000> jsondoc;
  jsondoc["status"]["temperature"] = temp;
  jsondoc["status"]["light"] = light;
   jsondoc["info"]["ident"] = mac;
     jsondoc["lat"] = lat;
  jsondoc["lgn"] = lgn;
  jsondoc["key"] = key;
  /*jsondoc["status"]["ledCooler"] = led01;
  jsondoc["status"]["ledHeater"] = led02;
  jsondoc["status"]["running"] = RUNNING;

  jsondoc["info"]["loc"] = LOCATION;
  jsondoc["info"]["user"] = IDENTIFIER;
  jsondoc["info"]["uptime"] = getUptime();
  jsondoc["info"]["ssid"] = getSSID();
 
  jsondoc["info"]["ip"] = getIP();

  jsondoc["reporthost"]["target_ip"] = target_ip;
  jsondoc["reporthost"]["target_port"] = target_port;
  jsondoc["reporthost"]["sp"] = target_sp;
  
  jsondoc["regul"]["threshold"] = DAY_LIGHT;
  jsondoc["regul"]["sbn"] = TEMP_NIGHT_LOW;
  jsondoc["regul"]["shn"] = TEMP_NIGHT_HIGH;
  jsondoc["regul"]["sbj"] = TEMP_DAY_LOW;
  jsondoc["regul"]["shj"] = TEMP_DAY_HIGH;*/
  String data = "";
  serializeJson(jsondoc, data);
  return data;
}

String getJSONString_fromlocation(String mac){
  StaticJsonDocument<1000> jsondoc;

  String data = "";
  serializeJson(jsondoc, data);
  return data;
}
