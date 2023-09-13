#pragma once

Viewpoint:

Address: 0x7FF63B7E51B0
Offset: 0x2B051B0

namespace Offsets
{
    uintptr_t GWorld = 0x5C80950;

    namespace UWorld
    {
        uintptr_t PersistentLevel = 0x30;
        uintptr_t GameState = 0x120;
        uintptr_t OwningGameInstance = 0x160;
    }

    namespace AActor
    {
        uintptr_t RootComponent = 0x158;
    }

    namespace USceneComponent
    {
        uintptr_t RelativeLocation = 0x164;
        uintptr_t RelativeRotation = 0x170;
        uintptr_t RelativeScale3D = 0x17C;
    }

    namespace AGameStateBase
    {
        uintptr_t PlayerArray = 0x348;
    }

    namespace UGameInstance
    {
        uintptr_t LocalPlayers = 0x38;
    }

    namespace ULocalPlayer
    {
        uintptr_t PlayerController = 0x30;
    }

    namespace APlayerState
    {
        uintptr_t PawnPrivate = 0x3B8;
    }

    namespace APlayerController
    {
        uintptr_t AcknowledgedPawn = 0x3B8;
    }

    namespace AFortPawn
    {
        uintptr_t CurrentWeapon = 0x820;
    }

    namespace ACharacter
    {
        uintptr_t Mesh = 0x390;
    }
}

#define OFFSET_UWORLD 0x5C80950
#define GWORLD = 0xEE5A148
#define FNAME = 0xEE7C240
#define RESULT_DA = 0xED83F44

namespace OFFSETS
{
    // TeamIndex - TeamID - ActorID
    uintptr_t TeamId = 0x1100;

    // Local
    uintptr_t LocalActorPos = 0x128;
    uintptr_t LocalPawn = 0x330;
    uintptr_t LocalPlayers = 0x38;

    // Player - BoneArray
    uintptr_t BoneArray = 0x5F8;
    uintptr_t PlayerState = 0x2A8;
    uintptr_t PlayerArray = 0x348;
    uintptr_t PlayerController = 0x30;
    uintptr_t PlayerCameraManager = 0x340;
    // Game - World
    uintptr_t Gameinstance = 0x1B8;
    uintptr_t GameState = 0x158;
    uintptr_t ComponetToWorld = 0x240;

    // Actor
    uintptr_t ActorCount = 0xA0;
    uintptr_t AActor = 0x98;
    uintptr_t CurrentActor = 0x300;

    // Other
    uintptr_t RootComponet = 0x190;
    uintptr_t PersistentLevel = 0x30;
    uintptr_t Mesh = 0x390;
    uintptr_t Velocity = 0x170;
    uintptr_t PawnPrivate = 0x300;
    uintptr_t ReviveFromDBNOTime = 0x43c0;
}

namespace W2S {
    uintptr_t chain69 = 0xA8;
    uintptr_t chain699 = 0x7E8;
    uintptr_t chain = 0x70;
    uintptr_t chain1 = 0x98;
    uintptr_t chain2 = 0x140;   
    uintptr_t vDelta = 0x10;
    uintptr_t zoom = 0x580;
}
