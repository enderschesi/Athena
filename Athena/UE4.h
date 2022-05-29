#pragma once

enum EObjectFlags
{
	RF_NoFlags = 0x00000000,
	RF_Public = 0x00000001,
	RF_Standalone = 0x00000002,
	RF_MarkAsNative = 0x00000004,
	RF_Transactional = 0x00000008,
	RF_ClassDefaultObject = 0x00000010,
	RF_ArchetypeObject = 0x00000020,
	RF_Transient = 0x00000040,
	RF_MarkAsRootSet = 0x00000080,
	RF_TagGarbageTemp = 0x00000100,
	RF_NeedInitialization = 0x00000200,
	RF_NeedLoad = 0x00000400,
	RF_KeepForCooker = 0x00000800,
	RF_NeedPostLoad = 0x00001000,
	RF_NeedPostLoadSubobjects = 0x00002000,
	RF_NewerVersionExists = 0x00004000,
	RF_BeginDestroyed = 0x00008000,
	RF_FinishDestroyed = 0x00010000,
	RF_BeingRegenerated = 0x00020000,
	RF_DefaultSubObject = 0x00040000,
	RF_WasLoaded = 0x00080000,
	RF_TextExportTransient = 0x00100000,
	RF_LoadCompleted = 0x00200000,
	RF_InheritableComponentTemplate = 0x00400000,
	RF_DuplicateTransient = 0x00800000,
	RF_StrongRefOnFrame = 0x01000000,
	RF_NonPIEDuplicateTransient = 0x02000000,
	RF_Dynamic = 0x04000000,
	RF_WillBeLoaded = 0x08000000,
};

enum EInternalObjectFlags
{
	None = 0,
	ReachableInCluster = 1 << 23,
	ClusterRoot = 1 << 24,
	Native = 1 << 25,
	Async = 1 << 26,
	AsyncLoading = 1 << 27,
	Unreachable = 1 << 28,
	PendingKill = 1 << 29,
	RootSet = 1 << 30,
	GarbageCollectionKeepFlags = Native | Async | AsyncLoading,
	AllFlags = ReachableInCluster | ClusterRoot | Native | Async | AsyncLoading | Unreachable | PendingKill | RootSet,
};

enum class ESpawnActorCollisionHandlingMethod : uint8_t
{
	Undefined,
	AlwaysSpawn,
	AdjustIfPossibleButAlwaysSpawn,
	AdjustIfPossibleButDontSpawnIfColliding,
	DontSpawnIfColliding,
	ESpawnActorCollisionHandlingMethod_MAX,
};

enum class EAthenaGamePhaseStep
{
	None,
	Setup,
	Warmup,
	GetReady,
	BusLocked,
	BusFlying,
	StormForming,
	StormHolding,
	StormShrinking,
	Countdown,
	FinalCountdown,
	EndGame,
	Count,
	EAthenaGamePhaseStep_MAX,
};

enum class ECameraProjectionMode : uint8_t
{
	Perspective = 0,
	Orthographic = 1,
	ECameraProjectionMode_MAX = 2
};

enum class EObjectFullNameFlags
{
	None = 0,
	IncludeClassPackage = 1,
};

enum class EAthenaGamePhase : uint8_t
{
	None = 0,
	Setup = 1,
	Warmup = 2,
	Aircraft = 3,
	SafeZones = 4,
	EndGame = 5,
	Count = 6,
	EAthenaGamePhase_MAX = 7
};

enum class ENetRole : uint8_t
{
	ROLE_None = 0,
	ROLE_SimulatedProxy = 1,
	ROLE_AutonomousProxy = 2,
	ROLE_Authority = 3,
	ROLE_MAX = 4
};

enum class EMontagePlayReturnType : uint8_t
{
	MontageLength = 0,
	Duration = 1,
	EMontagePlayReturnType_MAX = 2
};

enum class EFortCustomBodyType : uint8_t
{
	NONE = 0,
	Small = 1,
	Medium = 2,
	MediumAndSmall = 3,
	Large = 4,
	LargeAndSmall = 5,
	LargeAndMedium = 6,
	All = 7,
	Deprecated = 8,
	EFortCustomBodyType_MAX = 9
};

enum class EItemWrapMaterialType : uint8_t
{
	WeaponWrap = 0,
	VehicleWrap_Opaque = 1,
	VehicleWrap_Masked = 2,
	EItemWrapMaterialType_MAX = 3
};

enum class EFortMovementStyle : uint8_t
{
	Running = 0,
	Walking = 1,
	Charging = 2,
	Sprinting = 3,
	PersonalVehicle = 4,
	Flying = 5,
	Tethered = 6,
	EFortMovementStyle_MAX = 7
};

enum class EMouseCursor : uint8_t
{
	None = 0,
	Default = 1,
	TextEditBeam = 2,
	ResizeLeftRight = 3,
	ResizeUpDown = 4,
	ResizeSouthEast = 5,
	ResizeSouthWest = 6,
	CardinalCross = 7,
	Crosshairs = 8,
	Hand = 9,
	GrabHand = 10,
	GrabHandClosed = 11,
	SlashedCircle = 12,
	EyeDropper = 13,
	EMouseCursor_MAX = 14
};

enum class ECollisionChannel : uint8_t
{
	ECC_WorldStatic = 0,
	ECC_WorldDynamic = 1,
	ECC_Pawn = 2,
	ECC_Visibility = 3,
	ECC_Camera = 4,
	ECC_PhysicsBody = 5,
	ECC_Vehicle = 6,
	ECC_Destructible = 7,
	ECC_EngineTraceChannel1 = 8,
	ECC_EngineTraceChannel2 = 9,
	ECC_EngineTraceChannel3 = 10,
	ECC_EngineTraceChannel4 = 11,
	ECC_EngineTraceChannel5 = 12,
	ECC_EngineTraceChannel6 = 13,
	ECC_GameTraceChannel1 = 14,
	ECC_GameTraceChannel2 = 15,
	ECC_GameTraceChannel3 = 16,
	ECC_GameTraceChannel4 = 17,
	ECC_GameTraceChannel5 = 18,
	ECC_GameTraceChannel6 = 19,
	ECC_GameTraceChannel7 = 20,
	ECC_GameTraceChannel8 = 21,
	ECC_GameTraceChannel9 = 22,
	ECC_GameTraceChannel10 = 23,
	ECC_GameTraceChannel11 = 24,
	ECC_GameTraceChannel12 = 25,
	ECC_GameTraceChannel13 = 26,
	ECC_GameTraceChannel14 = 27,
	ECC_GameTraceChannel15 = 28,
	ECC_GameTraceChannel16 = 29,
	ECC_GameTraceChannel17 = 30,
	ECC_GameTraceChannel18 = 31,
	ECC_OverlapAll_Deprecated = 32,
	ECC_MAX = 33
};

enum class EWindowMode : uint8_t
{
	Fullscreen = 0,
	WindowedFullscreen = 1,
	Windowed = 2,
	EWindowMode_MAX = 3
};

enum EPropertyFlags : uint64_t
{
	CPF_None = 0,

	CPF_Edit = 0x0000000000000001,
	///< Property is user-settable in the editor.
	CPF_ConstParm = 0x0000000000000002,
	///< This is a constant function parameter
	CPF_BlueprintVisible = 0x0000000000000004,
	///< This property can be read by blueprint code
	CPF_ExportObject = 0x0000000000000008,
	///< Object can be exported with actor.
	CPF_BlueprintReadOnly = 0x0000000000000010,
	///< This property cannot be modified by blueprint code
	CPF_Net = 0x0000000000000020,
	///< Property is relevant to network replication.
	CPF_EditFixedSize = 0x0000000000000040,
	///< Indicates that elements of an array can be modified, but its size cannot be changed.
	CPF_Parm = 0x0000000000000080,
	///< Function/When call parameter.
	CPF_OutParm = 0x0000000000000100,
	///< Value is copied out after function call.
	CPF_ZeroConstructor = 0x0000000000000200,
	///< memset is fine for construction
	CPF_ReturnParm = 0x0000000000000400,
	///< Return value.
	CPF_DisableEditOnTemplate = 0x0000000000000800,
	///< Disable editing of this property on an archetype/sub-blueprint
	//CPF_      						= 0x0000000000001000,	///< 
	CPF_Transient = 0x0000000000002000,
	///< Property is transient: shouldn't be saved or loaded, except for Blueprint CDOs.
	CPF_Config = 0x0000000000004000,
	///< Property should be loaded/saved as permanent profile.
	//CPF_								= 0x0000000000008000,	///< 
	CPF_DisableEditOnInstance = 0x0000000000010000,
	///< Disable editing on an instance of this class
	CPF_EditConst = 0x0000000000020000,
	///< Property is uneditable in the editor.
	CPF_GlobalConfig = 0x0000000000040000,
	///< Load config from base class, not subclass.
	CPF_InstancedReference = 0x0000000000080000,
	///< Property is a component references.
	//CPF_								= 0x0000000000100000,	///<
	CPF_DuplicateTransient = 0x0000000000200000,
	///< Property should always be reset to the default value during any type of duplication (copy/paste, binary duplication, etc.)
	//CPF_								= 0x0000000000400000,	///< 
	//CPF_    							= 0x0000000000800000,	///< 
	CPF_SaveGame = 0x0000000001000000,
	///< Property should be serialized for save games, this is only checked for game-specific archives with ArIsSaveGame
	CPF_NoClear = 0x0000000002000000,
	///< Hide clear (and browse) button.
	//CPF_  							= 0x0000000004000000,	///<
	CPF_ReferenceParm = 0x0000000008000000,
	///< Value is passed by reference; CPF_OutParam and CPF_Param should also be set.
	CPF_BlueprintAssignable = 0x0000000010000000,
	///< MC Delegates only.  Property should be exposed for assigning in blueprint code
	CPF_Deprecated = 0x0000000020000000,
	///< Property is deprecated.  Read it from an archive, but don't save it.
	CPF_IsPlainOldData = 0x0000000040000000,
	///< If this is set, then the property can be memcopied instead of CopyCompleteValue / CopySingleValue
	CPF_RepSkip = 0x0000000080000000,
	///< Not replicated. For non replicated properties in replicated structs 
	CPF_RepNotify = 0x0000000100000000,
	///< Notify actors when a property is replicated
	CPF_Interp = 0x0000000200000000,
	///< interpolatable property for use with matinee
	CPF_NonTransactional = 0x0000000400000000,
	///< Property isn't transacted
	CPF_EditorOnly = 0x0000000800000000,
	///< Property should only be loaded in the editor
	CPF_NoDestructor = 0x0000001000000000,
	///< No destructor
	//CPF_								= 0x0000002000000000,	///<
	CPF_AutoWeak = 0x0000004000000000,
	///< Only used for weak pointers, means the export type is autoweak
	CPF_ContainsInstancedReference = 0x0000008000000000,
	///< Property contains component references.
	CPF_AssetRegistrySearchable = 0x0000010000000000,
	///< asset instances will add properties with this flag to the asset registry automatically
	CPF_SimpleDisplay = 0x0000020000000000,
	///< The property is visible by default in the editor details view
	CPF_AdvancedDisplay = 0x0000040000000000,
	///< The property is advanced and not visible by default in the editor details view
	CPF_Protected = 0x0000080000000000,
	///< property is protected from the perspective of script
	CPF_BlueprintCallable = 0x0000100000000000,
	///< MC Delegates only.  Property should be exposed for calling in blueprint code
	CPF_BlueprintAuthorityOnly = 0x0000200000000000,
	///< MC Delegates only.  This delegate accepts (only in blueprint) only events with BlueprintAuthorityOnly.
	CPF_TextExportTransient = 0x0000400000000000,
	///< Property shouldn't be exported to text format (e.g. copy/paste)
	CPF_NonPIEDuplicateTransient = 0x0000800000000000,
	///< Property should only be copied in PIE
	CPF_ExposeOnSpawn = 0x0001000000000000,
	///< Property is exposed on spawn
	CPF_PersistentInstance = 0x0002000000000000,
	///< A object referenced by the property is duplicated like a component. (Each actor should have an own instance.)
	CPF_UObjectWrapper = 0x0004000000000000,
	///< Property was parsed as a wrapper class like TSubclassOf<T>, FScriptInterface etc., rather than a USomething*
	CPF_HasGetValueTypeHash = 0x0008000000000000,
	///< This property can generate a meaningful hash value.
	CPF_NativeAccessSpecifierPublic = 0x0010000000000000,
	///< Public native access specifier
	CPF_NativeAccessSpecifierProtected = 0x0020000000000000,
	///< Protected native access specifier
	CPF_NativeAccessSpecifierPrivate = 0x0040000000000000,
	///< Private native access specifier
	CPF_SkipSerialization = 0x0080000000000000,
	///< Property shouldn't be serialized, can still be exported to text
};

enum ELifetimeCondition
{
	COND_None = 0,
	COND_InitialOnly = 1,
	COND_OwnerOnly = 2,
	COND_SkipOwner = 3,
	COND_SimulatedOnly = 4,
	COND_AutonomousOnly = 5,
	COND_SimulatedOrPhysics = 6,
	COND_InitialOrOwner = 7,
	COND_Custom = 8,
	COND_ReplayOrOwner = 9,
	COND_ReplayOnly = 10,
	COND_SimulatedOnlyNoReplay = 11,
	COND_SimulatedOrPhysicsNoReplay = 12,
	COND_SkipReplay = 13,
	COND_Never = 15,
	COND_Max = 16,
};

enum class EFortCustomPartType : uint8_t
{
	Head = 0,
	Body = 1,
	Hat = 2,
	Backpack = 3,
	Charm = 4,
	Face = 5,
	NumTypes = 6,
	EFortCustomPartType_MAX = 7
};

enum class EFortCustomGender : uint8_t
{
	Invalid = 0,
	Male = 1,
	Female = 2,
	Both = 3,
	EFortCustomGender_MAX = 4
};

enum class EMovementMode : uint8_t
{
	MOVE_None = 0,
	MOVE_Walking = 1,
	MOVE_NavWalking = 2,
	MOVE_Falling = 3,
	MOVE_Swimming = 4,
	MOVE_Flying = 5,
	MOVE_Custom = 6,
	MOVE_MAX = 7
};

enum class EFortDisplayTier : uint8_t
{
	Invalid = 0,
	Handmade = 1,
	Copper = 2,
	Silver = 3,
	Malachite = 4,
	Obsidian = 5,
	Brightcore = 6,
	Spectrolite = 7,
	Shadowshard = 8,
	Sunbeam = 9,
	Moonglow = 10,
	EFortDisplayTier_MAX = 11
};

uintptr_t gGON;
struct UObject;
inline UObject* (*GetFirstPlayerController)(void* World);
inline void (*FreeI)(__int64);
inline void* (*ProcessEvent)(void*, void*, void*);
int GVersion;
template <class T>
struct TArray
{
	friend struct FString;

public:
	TArray()
	{
		Data = nullptr;
		Count = Max = 0;
	};

	int Num() const
	{
		return Count;
	};

	T& operator[](int i)
	{
		return Data[i];
	};

	const T& operator[](int i) const
	{
		return Data[i];
	};

	bool IsValidIndex(int i) const
	{
		return i < Num();
	}

	void Add(T InputData)
	{
		Data = (T*)realloc(Data, sizeof(T) * (Count + 1));
		Data[Count++] = InputData;
		Max = Count;
	};

private:
	T* Data;
	int32_t Count;
	int32_t Max;
};

struct FString : public TArray<wchar_t>
{
	FString()
	{
	};

	FString(const wchar_t* other)
	{
		Max = Count = *other ? std::wcslen(other) + 1 : 0;

		if (Count)
		{
			Data = const_cast<wchar_t*>(other);
		}
	}

	bool IsValid() const
	{
		return Data != nullptr;
	}

	const wchar_t* ToWString() const
	{
		return Data;
	}

	std::string ToString() const
	{
		auto length = std::wcslen(Data);

		std::string str(length, '\0');

		std::use_facet<std::ctype<wchar_t>>(std::locale()).narrow(Data, Data + length, '?', &str[0]);

		return str;
	}
};

template <class TEnum>
class TEnumAsByte
{
public:
	TEnumAsByte()
	{
	}

	TEnumAsByte(TEnum _value)
		: value(static_cast<uint8_t>(_value))
	{
	}

	explicit TEnumAsByte(int32_t _value)
		: value(static_cast<uint8_t>(_value))
	{
	}

	explicit TEnumAsByte(uint8_t _value)
		: value(_value)
	{
	}

	operator TEnum() const
	{
		return static_cast<TEnum>(value);
	}

	TEnum GetValue() const
	{
		return static_cast<TEnum>(value);
	}

private:
	uint8_t value;
};

struct FName;

inline void (*FNameToString)(FName* pThis, FString& out);

struct FName
{
	uint32_t ComparisonIndex;
	uint32_t DisplayIndex;

	FName() = default;

	explicit FName(int64_t name)
	{
		DisplayIndex = (name & 0xFFFFFFFF00000000LL) >> 32;
		ComparisonIndex = (name & 0xFFFFFFFFLL);
	};

	auto ToString()
	{
		FString temp;
		FNameToString(this, temp);

		std::string ret(temp.ToString());

		return ret;
	}
};

struct FText
{
	char UnknownData[0x18];
};

struct UClass;

static void FixName(char* cName)
{
	for (int i = 0; cName[i] != '\0'; i++)
	{
		if (cName[i] == '_')
		{
			if (cName[i + 1] == '0' ||
				cName[i + 1] == '1' ||
				cName[i + 1] == '2' ||
				cName[i + 1] == '3' ||
				cName[i + 1] == '4' ||
				cName[i + 1] == '5' ||
				cName[i + 1] == '6' ||
				cName[i + 1] == '7' ||
				cName[i + 1] == '8' ||
				cName[i + 1] == '9')
				cName[i] = '\0';
			break;
		}
	}
	return;
}

struct UObject
{
	void** Vtable;
	int32_t ObjectFlags;
	int32_t InternalIndex;
	class UObject* Class;
	FName  Name;
	class UObject* Outer;

	std::string GetName2()
	{
		return Name.ToString();
	}

	inline char* GetName()
	{
		FString Buffer;
		auto GetObjName = reinterpret_cast<FString * (__fastcall*)(FString*, UObject*)>(gGON);
		GetObjName((FString*)&Buffer, this);
		if (!Buffer.ToString().c_str())
			return (char*)("");

		char Result[1024];
		wcstombs(Result, Buffer.ToWString(), sizeof(Result));
		FixName(Result);

		return Result;
	}

	inline std::string GetFullName()
	{
		std::string name;
		if (this->Class != nullptr)
		{
			std::string temp;
			for (UObject* p = this->Outer; p; p = p->Outer)
			{
				temp = std::string(p->GetName()) + "." + temp;
			}
			name = this->Class->GetName();
			name += " ";
			name += temp;
			name += this->GetName();
		}
		char* Result = (char*)name.c_str();
		return Result;
	}
};

struct FField
{
	void* vtable;
	void* padding_01;
	void* ClassPrivate;
	void* Owner;
	FField* Next;
	FName NamePrivate;
	EObjectFlags FlagsPrivate;
};

inline void (*GetFullName)(FField* Obj, FString& ResultString, const UObject* StopOuter, EObjectFullNameFlags Flags);

inline std::string GetFFirstName(FField* object)
{
	FString s;
	GetFullName(object, s, nullptr, EObjectFullNameFlags::None);
	std::string objectNameW = s.ToString();

	std::string token;
	while (token != objectNameW)
	{
		token = objectNameW.substr(0, objectNameW.find_first_of(":"));
		objectNameW = objectNameW.substr(objectNameW.find_first_of(":") + 1);
	}

	return objectNameW;
}

struct FProperty : FField
{
	int32_t ArrayDim;
	int32_t ElementSize;
	EPropertyFlags PropertyFlags;
	uint16_t RepIndex;
	TEnumAsByte<ELifetimeCondition>
		ReplicationCondition;
	int32_t Offset_Internal;
	FName RepNotifyFunc;
	FProperty* PropertyLinkNext;
	FProperty* NextRef;
	FProperty* DestructorLinkNext;
	FProperty* PostConstructLinkNext;
};

struct UField : UObject
{
	UField* Next;
	void* padding_01;
	void* padding_02;
};

struct UStruct : UField
{
	UStruct* SuperStruct;
	UField* Children;
	FField* ChildProperties;
	int32_t PropertiesSize;
	int32_t MinAlignment;
	TArray<uint8_t> Script;
	FProperty* PropertyLink;
	FProperty* RefLink;
	FProperty* DestructorLink;
	FProperty* PostConstructLink;
};
struct UClass : UStruct
{
};

struct UEngine;

struct FVector
{
	float X;
	float Y;
	float Z;

	FVector()
		: X(0), Y(0), Z(0)
	{
	}

	FVector(float x, float y, float z)
		: X(x),
		Y(y),
		Z(z)
	{
	}

	FVector operator-(FVector v)
	{
		return FVector(X - v.X, Y - v.Y, Z - v.Z);
	}

	FVector operator+(FVector v)
	{
		return FVector(X + v.X, Y + v.Y, Z + v.Z);
	}

	float Distance(FVector v)
	{
		return ((X - v.X) * (X - v.X) +
			(Y - v.Y) * (Y - v.Y) +
			(Z - v.Z) * (Z - v.Z));
	}
};


struct UFortKismetLibrary_K2_SpawnPickupInWorld_Params
{
	class UObject* WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject* ItemDefinition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumberToSpawn;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OverrideMaxStackCount;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bToss;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRandomRotation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBlockedFromAutoPickup;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PickupInstigatorHandle;                                   // (Parm, ZeroConstructor, IsPlainOldData)                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AFortPlayerController* OptionalOwnerPC;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPickupOnlyRelevantToOwner;
	class AFortPickup* ReturnValue;
};

enum class EGameplayEffectDurationType : uint8_t
{
	Instant, Infinite, HasDuration, EGameplayEffectDurationType_MAX
};



namespace Offsets
{
	namespace Engine
	{
		inline __int64 GameViewport = 0x780;
		inline __int64 ConsoleClass = 0x0F8;
	}

	namespace GameViewportClient
	{
		inline __int64 GameInstance = 0x80;
		inline __int64 World = 0x78;
		inline __int64 ViewportConsole = 0x40;
	}

	namespace GameInstance
	{
		inline __int64 LocalPlayers = 0x38;
	}

	namespace LocalPlayer
	{
		inline __int64 PlayerController = 0x30;
	}

	namespace PlayerController
	{
		inline __int64 Pawn = 0x250;
		inline __int64 CheatManager = 0x338;
		inline __int64 PlayerState = 0x228;
		inline __int64 AcknowledgedPawn = 0x2A0;
		inline __int64 PlayerInput = 0x348;
	}

	namespace World
	{
		inline __int64 PersistentLevel = 0x30;
		inline __int64 GameState = 0x128;
		inline __int64 AuthorityGameMode = 0x120;
		inline __int64 OwningGameInstance = 0x188;
	}

	namespace PlayerState
	{
		inline __int64 CharacterData = 0x4F8;
	}

	namespace CharacterData
	{
		inline __int64 Parts = 0x08;
	}

	namespace Pawn
	{
		inline __int64 PlayerState = 0x240;
	}

	namespace Inventory
	{
		inline __int64 Inventory = 0x230;
	}

	namespace FortItemList
	{
		inline __int64 ReplicatedEntries = 0x108;
		inline __int64 ItemInstances = 0x168;
	}

	namespace FortItemEntry
	{
		inline __int64 Count = 0xC;
		inline __int64 ItemGuid = 0x68;
		inline __int64 ItemDefinition = 0x18;
		inline __int64 LoadedAmmo = 0x2C;
	}

	namespace FortWorldItem
	{
		inline __int64 ItemEntry = 0xE0;
	}

	namespace FortHero
	{
		inline __int64 CharacterParts = 0x238;
	}

	namespace FortPawn
	{
		inline __int64 CurrentMovementStyle = 0x563;
	}

	namespace FortPlayerState
	{
		inline __int64 CurrentHealth = 0xD34;
		inline __int64 MaxHealth = 0xD38;
		inline __int64 CurrentSheild = 0xD3C;
		inline __int64 MaxSheild = 0xD40;
	}

	namespace Character
	{
		inline __int64 Mesh = 0x280;
	}
}

enum class EFortQuickBars : uint8_t
{
	Primary, Secondary, Max_None, EFortQuickBars_MAX
};

struct UCheatManager_Summon_Params
{
	FString ClassName;
};

struct UObject_ExecuteUbergraph_Params
{
	int EntryPoint;
};

struct UCheatManager_DestroyAll_Params
{
	UClass* Class;
};



struct APlayerController_SwitchLevel_Params
{
	FString URL;
};

struct AController_Possess_Params
{
	UObject* InPawn;
};

struct ACharacter_IsJumpProvidingForce_Params
{
	bool ReturnValue;
};

struct ACharacter_IsSkydiving_Params
{
	bool ReturnValue;
};

struct ACharacter_IsParachuteOpen_Params
{
	bool ReturnValue;
};

struct ACharacter_IsParachuteForcedOpen_Params
{
	bool ReturnValue;
};

struct ACharacter_IsInAircraft_Params
{
	bool ReturnValue;
};

struct Empty_Params
{
};

struct UGameUserSettings_SetFullscreenMode_Params
{
	TEnumAsByte<EWindowMode> InFullscreenMode;
};

struct K2_OnMovementModeChanged_Params
{
	char PrevMovementMode;
	char NewMovementMode;
	char PrevCustomMode;
	char NewCustomMode;
};

struct UFortKismetLibrary_ApplyCharacterCosmetics_Params
{
	UObject* WorldContextObject;
	TArray<UObject*> CharacterParts;
	UObject* PlayerState;
	bool bSuccess;
};

struct AFortPlayerPawn_BeginSkydiving_Params
{
	bool bFromBus;
};

struct UCheatManager_CheatScript_Params
{
	FString ScriptName;
};

struct AFortGameModeAthena_SetTimeOfDayManagerGameplayOverride_Params
{
	UClass* TimeOfDayManagerClass;
};

struct AFortPlayerPawnAthena_TeleportToSkyDive_Params
{
	float HeightAboveGround;
};

struct UCheatManager_BugItGo_Params
{
	float X;
	float Y;
	float Z;
	float Pitch;
	float Yaw;
	float Roll;
};

struct USkinnedMeshComponent_SetSkeletalMesh_Params
{
	UObject* NewMesh;
	bool bReinitPose;
};

struct UFortKismetLibrary_UpdatePlayerCustomCharacterPartsVisualization_Params
{
	UObject* PlayerState;
};

struct FGuid
{
	int A;
	int B;
	int C;
	int D;

	FGuid() {
		int num = rand();
		A = num;
		B = num;
		C = num;
		D = num;
	}
};

struct UCharacterMovementComponent_SetMovementMode_Params
{
	TEnumAsByte<EMovementMode> NewMovementMode;
	unsigned char NewCustomMode;
};

struct AFortPawn_EquipWeaponDefinition_Params
{
	UObject* WeaponData;
	FGuid ItemEntryGuid;
	UObject* ReturnValue;
};

struct AFortPawn_OnWeaponEquipped_Params
{
	UObject* NewWeapon;
	UObject* PrevWeapon;
};

struct FActorSpawnParameters
{
	FActorSpawnParameters() : Name(), Template(nullptr), Owner(nullptr), Instigator(nullptr), OverrideLevel(nullptr), SpawnCollisionHandlingOverride(), bRemoteOwned(0), bNoFail(0),
		bDeferConstruction(0),
		bAllowDuringConstructionScript(0),
		NameMode(),
		ObjectFlags()
	{
	}
	;


	FName Name;

	UObject* Template; //AActor

	UObject* Owner; //AActor

	UObject* Instigator; //APawn

	UObject* OverrideLevel; //ULevel

	ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingOverride;

private:

	uint8_t bRemoteOwned : 1;

public:

	bool IsRemoteOwned() const { return bRemoteOwned; }

	uint8_t bNoFail : 1;


	uint8_t bDeferConstruction : 1;

	uint8_t bAllowDuringConstructionScript : 1;


	enum class ESpawnActorNameMode : uint8_t
	{
		Required_Fatal,

		Required_ErrorAndReturnNull,

		Required_ReturnNull,

		Requested
	};


	ESpawnActorNameMode NameMode;

	EObjectFlags ObjectFlags;
};

struct UFortniteAutomationBlueprintLibrary_ApplyItemWrapToActor_Params
{
	UObject* wrap;
	UObject* Actor;
	EItemWrapMaterialType MaterialType;
};

struct AFortPawn_SetHealth_Params
{
	float NewHealthVal;
};

struct AFortPawn_SetShield_Params
{
	float NewShieldValue;
};

struct AFortPawn_SetMaxShield_Params
{
	float NewValue;
};

struct AFortPawn_SetMaxHealth_Params
{
	float NewHealthVal;
};

struct AFortPawn_SetMovementSpeedMultiplier_Params
{
	float NewMovementSpeedVal;
};

struct AGameMode_Say_Params
{
	struct FString Msg;
};

struct FPlaylistPropertyArray
{
	char padding[0x0120];
	UObject* BasePlaylist;
	UObject* OverridePlaylist;
};

struct PlayerControllerBoolsForInfiniteAmmo
{
	bool bEnableVoiceChatPTT : 1;
	bool bVoiceChatPTTTransmit : 1;
	bool bInfiniteAmmo : 1;
	bool bInfiniteMagazine : 1;
	bool bNoCoolDown : 1;
	bool bInfiniteDurability : 1;
	bool bUsePickers : 1;
	bool bPickerOpen : 1;
};

struct AFortGameStateAthena_OnRep_GamePhase_Params
{
	EAthenaGamePhase OldGamePhase;
};

struct UFortGadgetItemDefinition_GetWeaponItemDefinition_Params
{
	UObject* ReturnValue;
};

class FUObjectItem {
public:
	UObject* Object;
	DWORD Flags;
	DWORD ClusterIndex;
	DWORD SerialNumber;
	DWORD SerialNumber2;
};

struct PreFUObjectItem
{
	FUObjectItem* FUObject[10];
};

class TUObjectArray {
public:
	FUObjectItem* Objects[9];
};

struct GObjects
{
	TUObjectArray* ObjectArray;
	BYTE _padding_0[0xC];
	DWORD ObjectCount;
	int32_t NumElements;

	inline void NumChunks(int* start, int* end) const
	{
		int cStart = 0, cEnd = 0;

		if (!cEnd)
		{
			while (1)
			{
				if (ObjectArray->Objects[cStart] == 0)
				{
					cStart++;
				}
				else
				{
					break;
				}
			}

			cEnd = cStart;
			while (1)
			{
				if (ObjectArray->Objects[cEnd] == 0)
				{
					break;
				}
				else
				{
					cEnd++;
				}
			}
		}

		*start = cStart;
		*end = cEnd;
	}

	inline int32_t Num() const
	{
		return ObjectCount;
	}

	inline UObject* GetByIndex(int32_t index) const
	{
		int cStart = 0, cEnd = 0;
		int chunkIndex = 0, chunkSize = 0xFFFF, chunkPos;
		FUObjectItem* Object;

		NumChunks(&cStart, &cEnd);

		chunkIndex = index / chunkSize;
		if (chunkSize * chunkIndex != 0 &&
			chunkSize * chunkIndex == index)
		{
			chunkIndex--;
		}

		chunkPos = cStart + chunkIndex;
		if (chunkPos < cEnd)
		{
#pragma warning( push )
#pragma warning( disable : 26451 )
			Object = ObjectArray->Objects[chunkPos] + (index - chunkSize * chunkIndex);
#pragma warning( pop )
			if (!Object) { return NULL; }

			return Object->Object;
		}



		return nullptr;
	}

	inline UObject* FindObjectByFullName(const std::string& name)
	{
		for (int i = 0; i < this->Num(); ++i)
		{
			UObject* object = this->GetByIndex(i);
			if (object == nullptr)
			{
				continue;
			}
			std::string objectName = object->GetFullName();
			if (objectName.find(name) != std::string::npos)
			{
				return object;
			}
		}
		return nullptr;
	}


	UObject* FindObject(const char* name, bool startswith = false, bool isEqual = false)
	{
		for (int i = 0; i < this->Num(); ++i)
		{
			UObject* object = this->GetByIndex(i);
			if (object == nullptr)
			{
				continue;
			}
			std::string objectName = object->GetFullName();
			if (!isEqual) {
				if (startswith == false) {
					if (objectName.find(name) != std::string::npos)
					{
						return object;
					}
				}
				else {
					if (objectName.starts_with(name))
					{
						return object;
					}
				}
			}
			if (isEqual) {
				if (objectName == name) {
					return object;
				}
			}
		}
		return nullptr;
	}

};
GObjects* gobjs;

struct RBitField
{
	unsigned char A : 1;
	unsigned char B : 1;
	unsigned char C : 1;
	unsigned char D : 1;
	unsigned char E : 1;
	unsigned char F : 1;
	unsigned char G : 1;
	unsigned char H : 1;
};

struct FRotator
{
	float Pitch;
	float Yaw;
	float Roll;
};

struct FQuat
{
	float W, X, Y, Z;
};

struct FTransform
{
	FQuat Rotation;
	FVector Scale3D;
	FVector Translation;
};

struct UFunction : UStruct
{
	int32_t FunctionFlags;
	int16_t RepOffset;
	int8_t NumParms;
	char unknown1[1];
	int16_t ParmsSize;
	int16_t ReturnValueOffset;
	int16_t RPCId;
	int16_t RPCResponseId;
	class UProperty* FirstPropertyToInit;
	UFunction* EventGraphFunction;
	int32_t EventGraphCallOffset;
	void* Func;
};

struct FMinimalViewInfo
{
	struct FVector Location;
	struct FRotator Rotation;
	float FOV;
	float DesiredFOV;
	float OrthoWidth;
	float OrthoNearClipPlane;
	float OrthoFarClipPlane;
	float AspectRatio;
	unsigned char bConstrainAspectRatio : 1;
	unsigned char bUseFieldOfViewForLOD : 1;
	unsigned char PreviousViewTransform[0x3];
	TEnumAsByte<ECameraProjectionMode> ProjectionMode;
};

struct FLinearColor
{
	float R;
	float G;
	float B;
	float A;

	FLinearColor()
		: R(0), G(0), B(0), A(0)
	{
	}

	FLinearColor(float r, float g, float b, float a)
		: R(r),
		G(g),
		B(b),
		A(a)
	{
	}
};

struct SetBrushFromTextureParams
{
	UObject* Texture;
	bool bMatchSize;
};

struct SetInventoryPanelOverride_Params
{
	UObject* InInventoryPanelOverride;
};

struct FQosRegionInfo
{
	FText DisplayName;
	FString RegionId;
};

struct UKismetRenderingLibrary_ImportFileAsTexture2D_Params
{
	UObject* WorldContextObject;
	FString Filename;
	UObject* ReturnValue;
};

struct ULevelStreamingDynamic_LoadLevelInstance_Params
{
	UObject* WorldContextObject;
	FString LevelName;
	FVector Location;
	FRotator Rotation;
	bool bOutSuccess;
	FString OptionalLevelNameOverride;
	UObject* ReturnValue;
};

struct AActor_K2_GetActorLocation_Params
{
	FVector ReturnValue;
};

struct AActor_ReceiveHit_Params
{
	UObject* MyComp;
	UObject* Other;
	UObject* OtherComp;
	bool bSelfMoved;
	FVector HitLocation;
};

struct AActor_K2_TeleportTo_Params
{
	FVector DestLocation;
	FRotator DestRotation;
	bool ReturnValue;
};

struct FLatentActionInfo
{
	int Linkage;
	int UUID;
	FName ExecutionFunction;
	UObject* CallbackTarget;
};

struct UGameplayStatics_LoadStreamLevel_Params
{
	UObject* WorldContextObject;
	struct FName LevelName;
	bool bMakeVisibleAfterLoad;
	bool bShouldBlockOnLoad;
	FLatentActionInfo LatentInfo;
};

struct UFortKismetLibrary_SetTimeOfDay_Params
{
	UObject* WorldContextObject;
	float TimeOfDay;
};

struct UKismetSystemLibrary_ExecuteConsoleCommand_Params
{
	UObject* WorldContextObject;
	FString Command;
	UObject* SpecificPlayer;
};

struct USkeletalMeshComponent_GetAnimInstance_Params
{
	UObject* ReturnValue;
};

struct UAnimInstance_GetCurrentActiveMontage_Params
{
	UObject* ReturnValue;
};


struct UAnimInstance_Montage_Stop_Params
{
	float InBlendOutTime;
	UObject* Montage;
};


struct UFortMontageItemDefinitionBase_GetAnimationHardReference_Params
{
	TEnumAsByte<EFortCustomBodyType> BodyType;
	TEnumAsByte<EFortCustomGender> Gender;
	UObject* PawnContext;
	UObject* ReturnValue;
};

struct UAnimInstance_Montage_Play_Params
{
	UObject* MontageToPlay;
	float InPlayRate;
	EMontagePlayReturnType ReturnValueType;
	float InTimeToStartMontageAt;
	bool bStopAllMontages;
	float ReturnValue;
};

struct PlayIntroAnim_Params
{
	EAthenaGamePhaseStep Step;
};

struct FFortAthenaLoadout
{
	FString BannerIconId;
	FString BannerColorId;
	UObject* SkyDiveContrail;
	UObject* Glider;
	UObject* Pickaxe;
	bool bIsDefaultCharacter;
	unsigned char UnknownData00[0x7];
	UObject* Character;
	TArray<UObject*> CharacterVariantChannels;
	bool bForceUpdateVariants;
	unsigned char UnknownData01[0x7];
	UObject* Hat;
	UObject* Backpack;
	UObject* LoadingScreen;
	UObject* BattleBus;
	UObject* VehicleDecoration;
	UObject* CallingCard;
	UObject* MapMarker;
	TArray<UObject*> Dances;
	UObject* VictoryPose;
	UObject* MusicPack;
	UObject* ItemWrapOverride;
	TArray<UObject*> ItemWraps;
	UObject* CharmOverride;
	TArray<UObject*> Charms;
	UObject* PetSkin;
};

struct UKismetStringLibrary_Conv_StringToName_Params
{
	FString inString;
	FName ReturnValue;
};

struct APlayerController_ClientSetCameraMode_Params
{
	FName NewCamMode;
};

struct UPrimitiveComponent_SetOwnerNoSee_Params
{
	bool bNewOwnerNoSee;
};

struct FActiveGameplayEffectHandle
{
	int Handle;
	bool bPassedFiltersAndWasExecuted;
	char UnknownData_5[0x3];
};

struct FGameplayEffectContextHandle
{
	char UnknownData_0[0x30];
};

struct FGameplayAbilitySpecDef
{
	UObject* Ability;
	unsigned char Unk00[0x90];
};

struct GetAllActorsOfClass_Params
{
	UObject* WorldContextObject;
	UObject* ActorClass; //AActor
	TArray<UObject*> OutActors; //AActor
};