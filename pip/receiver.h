//
//  receiver.h
//  pip
//
//  Created by Amit Verma on 30/04/22.
//  Copyright © 2022 boggyb. All rights reserved.
//
#ifndef NO_AIRPLAY

#ifndef receiver_h
#define receiver_h

#include "raop.h"

typedef struct{
  char* osName;
  char* osVersion;
  char* model;
  char* name;
} raop_device_info;

typedef struct raop_connection_s{
  void* priv;
  void* usr_data;
  raop_device_info devInfo;
} raop_connection_t;

#define MAX_CONNECTIONS 10
extern raop_connection_t* connections[MAX_CONNECTIONS];
extern uint active_connections;

void airplay_receiver_stop(void);
void airplay_receiver_start(void);
void airplay_receiver_session_stop(raop_connection_t* conn);

#endif /* receiver_h */

#endif
