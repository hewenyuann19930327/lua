/*
** $Id: lapi.h,v 1.13 2000/01/19 12:00:45 roberto Exp roberto $
** Auxiliary functions from Lua API
** See Copyright Notice in lua.h
*/

#ifndef lapi_h
#define lapi_h


#include "lobject.h"


void luaA_checkCargs (lua_State *L, int nargs);
const TObject *luaA_protovalue (const TObject *o);
void luaA_pushobject (lua_State *L, const TObject *o);
GlobalVar *luaA_nextvar (lua_State *L, TaggedString *g);
int luaA_next (lua_State *L, const Hash *t, int i);
lua_Object luaA_putluaObject (lua_State *L, const TObject *o);
lua_Object luaA_putObjectOnTop (lua_State *L);

#endif
