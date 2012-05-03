/* Copyright (C) 2006 - 2012 ScriptDev2 <http://www.scriptdev2.com/>
 * This program is free software licensed under GPL version 2
 * Please see the included DOCS/LICENSE.TXT for more information */

#ifndef DEF_ICECROWN_CITADEL_H
#define DEF_ICECROWN_CITADEL_H

enum
{
    MAX_ENCOUNTER                   = 12,

    TYPE_MARROWGAR                  = 0,
    TYPE_LADY_DEATHWHISPER          = 1,
    TYPE_GUNSHIP_BATTLE             = 2,
    TYPE_DEATHBRINGER_SAURFANG      = 3,
    TYPE_FESTERGUT                  = 4,
    TYPE_ROTFACE                    = 5,
    TYPE_PROFESSOR_PUTRICIDE        = 6,
    TYPE_BLOOD_PRINCE_COUNCIL       = 7,
    TYPE_QUEEN_LANATHEL             = 8,
    TYPE_VALITHRIA                  = 9,
    TYPE_SINDRAGOSA                 = 10,
    TYPE_LICH_KING                  = 11,

    // NPC entries
    NPC_LORD_MARROWGAR              = 36612,
    NPC_LADY_DEATHWHISPER           = 36855,
    NPC_DEATHBRINGER_SAURFANG       = 37813,
    NPC_FESTERGUT                   = 36626,
    NPC_ROTFACE                     = 36627,
    NPC_PROFESSOR_PUTRICIDE         = 36678,
    NPC_TALDARAM                    = 37973,
    NPC_VALANAR                     = 37970,
    NPC_KELESETH                    = 37972,
    NPC_QUEEN_LANATHEL              = 37955,
    NPC_VALITHRIA                   = 36789,
    NPC_SINDRAGOSA                  = 36853,
    NPC_LICH_KING                   = 36597,

    // boss-related and other NPCs
    NPC_DEATHWHISPER_SPAWN_STALKER  = 37947,
    NPC_OVERLORD_SAURFANG           = 37187,
    NPC_KORKRON_REAVER              = 37920,
    NPC_MURADIN_BRONZEBEARD         = 37200,        // Saurfang's encounter and at the instance entrance
    NPC_SKYBREAKER_MARINE           = 37380,
    NPC_ALLIANCE_MARINE             = 37830,
    NPC_BLOOD_ORB_CONTROL           = 38008,
    NPC_LANATHEL_INTRO              = 38004,
    NPC_VALITHRIA_QUEST             = 38589,
    NPC_VALITHRIA_COMBAT_TRIGGER    = 38752,
    NPC_MURADIN                     = 36948,        // Gunship Battle's encounter(?)
    NPC_TIRION                      = 38995,
    NPC_MENETHIL                    = 38579,
    NPC_FROSTMOURNE_TRIGGER         = 38584,
    NPC_FROSTMOURNE_HOLDER          = 27880,
    NPC_STINKY                      = 37025,
    NPC_PRECIOUS                    = 37217,
    NPC_PUDDLE_STALKER              = 37013,        // related to Festergut and Rotface
    NPC_RIMEFANG                    = 37533,
    NPC_SPINESTALKER                = 37534,

    // GameObjects entries
    GO_ICEWALL_1                    = 201911,
    GO_ICEWALL_2                    = 201910,
    GO_MARROWGAR_DOOR               = 201857,       // Marrowgar combat door

    GO_ORATORY_DOOR                 = 201563,
    GO_DEATHWHISPER_ELEVATOR        = 202220,

    GO_SAURFANG_DOOR                = 201825,

    GO_GREEN_PLAGUE                 = 201370,       // Rotface combat door
    GO_ORANGE_PLAGUE                = 201371,       // Festergut combat door
    GO_SCIENTIST_DOOR               = 201372,       // Putricide combat door
    GO_SCIENTIST_DOOR_COLLISION     = 201612,       // Putricide pathway doors
    GO_SCIENTIST_DOOR_ORANGE        = 201613,
    GO_SCIENTIST_DOOR_GREEN         = 201614,
    GO_GREEN_VALVE                  = 201615,       // Valves used to release the Gas / Oozes in order to open the pathway to Putricide - triggers event 23426
    GO_ORANGE_VALVE                 = 201616,       // triggers event 23438
    GO_ORANGE_TUBE                  = 201617,
    GO_GREEN_TUBE                   = 201618,

    //GO_BLOODWING_DOOR             = 201920,       // not used
    GO_CRIMSON_HALL_DOOR            = 201376,       // Council combat door
    GO_COUNCIL_DOOR_1               = 201377,
    GO_COUNCIL_DOOR_2               = 201378,
    GO_BLOODPRINCE_DOOR             = 201746,       // Lanathel combat door
    GO_ICECROWN_GRATE               = 201755,       // Lanathel trap door

    //GO_FROSTWING_DOOR             = 201919,       // not used
    GO_GREEN_DRAGON_ENTRANCE        = 201375,       // Valithria combat door
    GO_GREEN_DRAGON_EXIT            = 201374,
    GO_VALITHRIA_DOOR_1             = 201381,       // Valithria event doors
    GO_VALITHRIA_DOOR_2             = 201382,
    GO_VALITHRIA_DOOR_3             = 201383,
    GO_VALITHRIA_DOOR_4             = 201380,
    GO_SINDRAGOSA_SHORTCUT_ENTRANCE = 201369,       // Shortcut doors are opened only after the trash before Sindragosa is cleared
    GO_SINDRAGOSA_SHORTCUT_EXIT     = 201379,
    GO_SINDRAGOSA_ENTRANCE          = 201373,

    GO_FROZENTRONE_TRANSPORTER      = 202223,
    GO_ICESHARD_1                   = 202142,
    GO_ICESHARD_2                   = 202141,
    GO_ICESHARD_3                   = 202143,
    GO_ICESHARD_4                   = 202144,
    GO_FROSTY_WIND                  = 202188,
    GO_FROSTY_EDGE                  = 202189,
    GO_SNOW_EDGE                    = 202190,
    GO_ARTHAS_PLATFORM              = 202161,
    GO_ARTHAS_PRECIPICE             = 202078,

    GO_PLAGUE_SIGIL                 = 202182,       // Possible used after each wing is cleared
    GO_FROSTWING_SIGIL              = 202181,
    GO_BLOODWING_SIGIL              = 202183,

    // Loot chests
    GO_SAURFANG_CACHE               = 202239,
    GO_SAURFANG_CACHE_25            = 202240,
    GO_SAURFANG_CACHE_10_H          = 202238,
    GO_SAURFANG_CACHE_25_H          = 202241,

    GO_GUNSHIP_ARMORY_A             = 201872,
    GO_GUNSHIP_ARMORY_A_25          = 201873,
    GO_GUNSHIP_ARMORY_A_10H         = 201874,
    GO_GUNSHIP_ARMORY_A_25H         = 201875,

    GO_GUNSHIP_ARMORY_H             = 202177,
    GO_GUNSHIP_ARMORY_H_25          = 202178,
    GO_GUNSHIP_ARMORY_H_10H         = 202179,
    GO_GUNSHIP_ARMORY_H_25H         = 202180,

    GO_DREAMWALKER_CACHE            = 201959,
    GO_DREAMWALKER_CACHE_25         = 202339,
    GO_DREAMWALKER_CACHE_10_H       = 202338,
    GO_DREAMWALKER_CACHE_25_H       = 202340,

    // Achievement criterias
    ACHIEV_CRIT_BONED_10N                  = 12775,     // Lord Marrowgar, achievs 4534, 4610
    ACHIEV_CRIT_BONED_25N                  = 12962,
    ACHIEV_CRIT_BONED_10H                  = 13393,
    ACHIEV_CRIT_BONED_25H                  = 13394,

    ACHIEV_CRIT_DANCES_WITH_OOZES_10N      = 12984,     // Rotface, achievs 4538, 4614
    ACHIEV_CRIT_DANCES_WITH_OOZES_25N      = 12966,
    ACHIEV_CRIT_DANCES_WITH_OOZES_10H      = 12985,
    ACHIEV_CRIT_DANCES_WITH_OOZES_25H      = 12983,

    ACHIEV_CRIT_NAUSEA_10N                 = 12987,     // Professor Putricide, achievs 4578, 4616
    ACHIEV_CRIT_NAUSEA_25N                 = 12968,
    ACHIEV_CRIT_NAUSEA_10H                 = 12988,
    ACHIEV_CRIT_NAUSEA_25H                 = 12981,

    ACHIEV_CRIT_ORB_WHISPERER_10N          = 13033,     // Blood Prince Council, achievs 4582, 4617
    ACHIEV_CRIT_ORB_WHISPERER_25N          = 12969,
    ACHIEV_CRIT_ORB_WHISPERER_10H          = 13034,
    ACHIEV_CRIT_ORB_WHISPERER_25H          = 13032,

    ACHIEV_CRIT_ONCE_BITTEN_TWICE_SHY_10N  = 12780,     // Blood-Queen Lana'thel, achievs 4539, 4618
    ACHIEV_CRIT_ONCE_BITTEN_TWICE_SHY_25N  = 13012,
    ACHIEV_CRIT_ONCE_BITTEN_TWICE_SHY_10V  = 13011,
    ACHIEV_CRIT_ONCE_BITTEN_TWICE_SHY_25V  = 13013,
};

class MANGOS_DLL_DECL instance_icecrown_citadel : public ScriptedInstance
{
    public:
        instance_icecrown_citadel(Map *pMap);

        void Initialize();
        bool IsEncounterInProgress() const;

        void OnPlayerEnter(Player* pPlayer);
        void OnCreatureCreate(Creature* pCreature);
        void OnObjectCreate(GameObject* pGo);

        void SetData(uint32 uiType, uint32 uiData);
        uint32 GetData(uint32 uiType);

        const char* Save() { return m_strInstData.c_str(); }
        void Load(const char* strIn);

        // Open Putricide door in a few seconds
        void DoPreparePutricideDoor() { m_uiPutricideValveTimer = 15000; }

        bool CheckAchievementCriteriaMeet(uint32 uiCriteriaId, Player const* pSource, Unit const* pTarget = NULL, uint32 uiMiscvalue1 = 0);

        void Update(uint32 uiDiff);

    private:
        std::string m_strInstData;
        uint32 m_auiEncounter[MAX_ENCOUNTER];

        uint32 m_uiTeam;                                    // Team of first entered player, used on the Gunship event
        uint32 m_uiPutricideValveTimer;
};

#endif
