// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class CatchMe : ModuleRules
{
    public CatchMe(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "AIModule", "Foliage", "GameplayTasks" });
        PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore", "UMG", "RHI", "RenderCore" });

        PublicDependencyModuleNames.Add("LuaPluginRuntime");
        PublicDependencyModuleNames.Add("LuaManuallyGlue");
        PublicDependencyModuleNames.Add("Lua51");
    }
}