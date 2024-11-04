
enum bone : int
{
    HumanBase = 0,
    HumanPelvis = 2,
    HumanLThigh1 = 71,
    HumanLThigh2 = 77,
    HumanLThigh3 = 72,
    HumanLCalf = 74,
    HumanLFoot2 = 73,
    HumanLFoot = 86,
    HumanLToe = 76,
    HumanRThigh1 = 78,
    HumanRThigh2 = 84,
    HumanRThigh3 = 79,
    HumanRCalf = 81,
    HumanRFoot2 = 82,
    HumanRFoot = 87,
    HumanRToe = 83,
    HumanSpine1 = 7,
    HumanSpine2 = 5,
    HumanSpine3 = 2,
    HumanLCollarbone = 9,
    HumanLUpperarm = 35,
    HumanLForearm1 = 36,
    HumanLForearm23 = 10,
    HumanLForearm2 = 34,
    HumanLForearm3 = 33,
    HumanLPalm = 32,
    HumanLHand = 11,
    HumanRCollarbone = 98,
    HumanRUpperarm = 64,
    HumanRForearm1 = 65,
    HumanRForearm23 = 39,
    HumanRForearm2 = 63,
    HumanRForearm3 = 62,
    HumanRHand = 40,
    HumanRPalm = 58,
    HumanNeck = 66,
    HumanHead = 110,
    HumanLowerHead = 110,

    HumanChest = 65
};

__int64 dynamic_uworld;

enum offset {
    uworld = 0x12DA3A98, // OFFSET_GWORLD
    OwningWorld = 0xc0,
    game_instance = 0x208, //https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=UWorld&member=OwningGameInstance
    game_state = 0x190, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=UWorld&member=GameState
    local_player = 0x38, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=UGameInstance&member=LocalPlayers
    player_controller = 0x30, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=UPlayer&member=PlayerController
    acknowledged_pawn = 0x6B8, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=APlayerController&member=AcknowledgedPawn
    aactor = 0xa0, // idk
    skeletal_mesh = 0x328, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=ACharacter&member=Mesh
    player_state = 0x2B0, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AController&member=PlayerState
    player_id = 0x294, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=APlayerState&member=PlayerId
    root_component = 0x1B0, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AActor&member=RootComponent
    persistent_level = 0x40, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=UWorld&member=PersistentLevel
    velocity = 0x140, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=USceneComponent&member=ComponentVelocity
    relative_location = 0x11C, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=USceneComponent&member=RelativeLocation
    relative_rotation = 0x138, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=USceneComponent&member=RelativeRotation
    current_weapon = 0x9F8, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortPawn&member=CurrentWeapon
    weapon_data = 0x520, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortWeapon&member=WeaponData
    tier = 0x9A, // idk
    team_index = 0xE88, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortPlayerStateAthena&member=TeamIndex
    player_array = 0x2C0, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AGameStateBase&member=PlayerArray
    pawn_private = 0x320, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=APlayerState&member=PawnPrivate
    component_to_world = 0x1c0, // idk
    bone_array = 0x580, // idk
    kill_score = 0x1214, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortPlayerStateAthena&member=KillScore
    fLastSubmitTime = 0x2E8, // idk
    bone_catche = 0x5B8,
    fLastRenderTimeOnScreen = 0x2E0, // idk
    location_under_reticle = 0x2698, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortPlayerController&member=LocationUnderReticle
    fname = 0x124DE7C0 + 8, // not sure
    current_vehicle = 0x2a10, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortPlayerPawn&member=CurrentVehicle
    TargetedFortPawn = 0x1898, //https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortPlayerController&member=TargetedFortPawn
    FOVMinimum = 0x2750, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortPlayerController&member=FOVMinimum
    FOVMaximum = 0x2754, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortPlayerController&member=FOVMaximum
    OnSetFirstPersonCamera = 0x10b8, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortPlayerController&member=OnSetFirstPersonCamera
    bautorunon = 0x108d, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortPlayerController&member=bAutoRunOn
};

enum weaponoffsets {
    CurrentWeapon = 0x9d8,
    AmmoCount = 0xef4,
    WeaponData = 0x510,
    Tier = 0x9A, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=UFortItemDefinition&member=Rarity
    ItemName = 0x40,
};

enum cameraoffsetss {
    PlayerCameraManager = 0x348,
    ViewPitchMin = 0x24cc,
    ViewPitchMax = 0x24d0,
    ViewYawMin = 0x24d4,
    ViewYawMax = 0x24d8,
    ViewRollMin = 0x24dc,
    ViewRollMax = 0x24E0,
    ViewTarget = 0x320,
    AimPitchMin = 0x1858,
    AimPitchMax = 0x185c,
};