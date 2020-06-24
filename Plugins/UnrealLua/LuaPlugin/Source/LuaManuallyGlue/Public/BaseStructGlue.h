
LUA_GLUE_BEGIN(FVector)
LUA_GLUE_CTOR((float,float,float))
LUA_GLUE_END()

LUA_GLUE_BEGIN(FRotator)
LUA_GLUE_CTOR((float, float, float))
LUA_GLUE_END()

LUA_GLUE_BEGIN(FVector2D)
LUA_GLUE_CTOR((float, float))
LUA_GLUE_END()

LUA_GLUE_BEGIN(FVector4)
LUA_GLUE_CTOR((float, float, float, float))
LUA_GLUE_END()

LUA_GLUE_BEGIN(FQuat)
LUA_GLUE_END()

LUA_GLUE_BEGIN(FColor)
LUA_GLUE_CTOR((uint8, uint8, uint8, uint8), 255)
LUA_GLUE_END()

LUA_GLUE_BEGIN(FHitResult)
LUA_GLUE_FUNCTION(GetActor)
LUA_GLUE_FUNCTION(GetComponent)
LUA_GLUE_FUNCTION(IsValidBlockingHit)
LUA_GLUE_END()

LUA_GLUE_BEGIN(FTransform)
LUA_GLUE_CTOR((const FRotator&, const FVector&, const FVector&), FVector::OneVector)
LUA_GLUE_FUNCTION(ToString)
LUA_GLUE_END()

LUA_GLUE_BEGIN(FGuid)
LUA_GLUE_END()

LUA_GLUE_BEGIN(FTwoVectors)
LUA_GLUE_END()

LUA_GLUE_BEGIN(FPlane)
LUA_GLUE_END()

LUA_GLUE_BEGIN(FIntPoint)
LUA_GLUE_END()

LUA_GLUE_BEGIN(FIntVector)
LUA_GLUE_END()

LUA_GLUE_BEGIN(FBox)
LUA_GLUE_END()

LUA_GLUE_BEGIN(FBox2D)
LUA_GLUE_END()

LUA_GLUE_BEGIN(FBoxSphereBounds)
LUA_GLUE_END()

LUA_GLUE_BEGIN(FOrientedBox)
LUA_GLUE_END()

LUA_GLUE_BEGIN(FMatrix)
LUA_GLUE_END()

LUA_GLUE_BEGIN(FInputChord)
LUA_GLUE_END()

LUA_GLUE_BEGIN(FKey)
LUA_GLUE_END()

LUA_GLUE_BEGIN(FVector_NetQuantize)
LUA_GLUE_END()

LUA_GLUE_BEGIN(FVector_NetQuantizeNormal)
LUA_GLUE_END()

LUA_GLUE_BEGIN(FSoftObjectPath)
LUA_GLUE_CTOR((FString))
LUA_GLUE_CTOR((FName, FString))
LUA_GLUE_CTOR((const UObject*))
LUA_GLUE_FUNCTION(GetAssetPathName)
LUA_GLUE_FUNCTION(GetAssetPathString)
LUA_GLUE_FUNCTION(GetSubPathString)
LUA_GLUE_FUNCTION(GetLongPackageName)
LUA_GLUE_FUNCTION(GetAssetName)
LUA_GLUE_OVERLOAD(SetPath, void (FSoftObjectPath::*)(const FString&))
LUA_GLUE_FUNCTION(TryLoad)
LUA_GLUE_FUNCTION(ResolveObject)
LUA_GLUE_FUNCTION(Reset)
LUA_GLUE_FUNCTION(IsValid)
LUA_GLUE_FUNCTION(IsNull)
LUA_GLUE_FUNCTION(IsAsset)
LUA_GLUE_FUNCTION(IsSubobject)
LUA_GLUE_END()

LUA_GLUE_BEGIN(FMargin)
LUA_GLUE_CTOR((float))
LUA_GLUE_CTOR((float, float))
LUA_GLUE_CTOR((const FVector2D&))
LUA_GLUE_CTOR((float, float, float, float))
LUA_GLUE_CTOR((const FVector4&))
LUA_GLUE_END()