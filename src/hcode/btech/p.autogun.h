
/*
   p.autogun.h

   Automatically created by protomaker (C) 1998 Markus Stenberg (fingon@iki.fi)
   Protomaker is actually only a wrapper script for cproto, but well.. I like
   fancy headers and stuff :)
   */

/* Generated at Fri Jan 15 15:32:34 CET 1999 from autogun.c */

#ifndef _P_AUTOGUN_H
#define _P_AUTOGUN_H

/* autogun.c */
void auto_gun_sensor_event(MUXEVENT * e);
void auto_gun_event(MUXEVENT * e);
int SearchLightInRange(MECH * mech, MAP *map);
int PrefVisSens(MECH * mech, MAP * map, int slite, MECH * target);
int AverageWpnRange(MECH * mech);

#endif				/* _P_AUTOGUN_H */