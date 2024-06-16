#   
    }

    int m_iPawnHealth()
    {
        DWORD64 health = driver::read<DWORD64>((DWORD64)(this) + s_dwPawnHealth_Offset);
        return health;
    }

    vec3 pos(C_CSPlayerPawn* pawn)
    {
        return driver::read<vec3>((DWORD64)pawn + 0x12AC);
    }


    bool m_bIsLocalPlayerController()
    {
        return driver::read<bool>((DWORD64)(this) + s_bIsLocalPlayerController_Offset);
    }

    C_CSPlayerPawn* m_hPlayerPawn()
    {
        std::uint32_t playerpawn = driver::read<std::uint32_t>((DWORD64)(this) + s_dwPlayerPawn_Offset);
        return C_CSPlayerPawn::GetPlayerPawn(playerpawn);
    }
};
