// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UnrealType.h"
#include "LuaDelegateMulti.h"

class LUAPLUGINRUNTIME_API ULuaSetHelper 
{	
public:
	ULuaSetHelper();
	void* Obj;

	FSetProperty* Property;

	void Init(void* _Obj, FSetProperty* _Property);
	void Init_ValuePtr(void* _Obj, FSetProperty* _Property);

	template<class T>
	TSet<T>* ValuePtr()
	{
		return (TSet<T>*)(Obj);
	}

	static ULuaSetHelper* GetHelper(UObject* _Obj, const FName& PropertyName);

	static ULuaSetHelper* GetHelperCPP(void* _Obj, FSetProperty* Property);
	static ULuaSetHelper* GetHelperCPP_ValuePtr(void* _Obj, FSetProperty* Property);

	static void Copy(FScriptSetHelper& SrcSetHelper, FScriptSetHelper& DestSetHelper, FSetProperty* p);
	void CopyTo(FSetProperty* p, void* ptr);
	void CopyFrom(FSetProperty* p, void* ptr);

	static void GlueSetCopyTo(FSetProperty* p, const void* src, const void* dest);

	int32 Num();

	int32 Get(lua_State* inL);
	void Set(lua_State* inL);
	void Reset();
	int32 Table(lua_State* inL);

	static int32 __index(lua_State* inL);
	static int32 __newindex(lua_State* inL);

	static int32 __pairs(lua_State* inL);
	static int32 travel(lua_State* inL);
};
