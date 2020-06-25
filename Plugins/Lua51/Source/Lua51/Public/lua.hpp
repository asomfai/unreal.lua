// lua.hpp
// Lua header files for C++
// <<extern "C">> not supplied automatically because Lua also compiles as C++

#ifdef __cplusplus
extern "C" {
#endif
    
#include "Private/lua.h"
#include "Private/lualib.h"
#include "Private/lauxlib.h"
    
#ifdef __cplusplus
}

// some 5.3 functions necessary for unreal.lua plugin
inline int lua_isinteger(lua_State *L, int i) 
{ 
  return lua_type(L,i) == LUA_TNUMBER ? 1:0; 
}

inline int ue_lua_abs_index(lua_State* L, int i) {
  return i > 0 || i <= LUA_REGISTRYINDEX ? i : lua_gettop(L) + i + 1;
}


#endif
