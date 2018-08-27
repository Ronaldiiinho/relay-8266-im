#ifndef _config_
#define _config_

//define your default values here, if there are different values in config.json, they are overwritten.
//length should be max size + 1 
extern char mqtt_server[40];
extern char mqtt_port[6];
extern char blynk_token[33];
//default custom static IP
extern char static_ip[16];
extern char static_gw[16];
extern char static_sn[16];

//flag for saving data
extern bool shouldSaveConfig;

#endif /* _config_ */