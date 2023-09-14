// TODO: find a better name for this file

#include <unordered_map>
#include <cstdint>
#include <string>
#include "Cutscene_Commands.h"

#define ENUM_TO_STRING(name) { (uint32_t)CutsceneCommands::name, #name }

const std::unordered_map<uint32_t, std::string> csOoTEnumNameToString = {
	ENUM_TO_STRING(CS_CMD_PLAYER_CUE),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_1_0),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_0_0),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_1_1),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_0_1),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_0_2),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_0_3),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_1_2),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_2_0),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_3_0),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_4_0),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_6_0),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_0_4),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_1_3),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_2_1),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_3_1),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_4_1),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_0_5),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_1_4),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_2_2),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_3_2),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_4_2),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_5_0),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_0_6),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_4_3),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_1_5),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_7_0),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_2_3),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_3_3),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_6_1),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_3_4),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_4_4),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_5_1),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_6_2),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_6_3),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_7_1),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_8_0),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_3_5),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_1_6),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_3_6),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_3_7),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_2_4),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_1_7),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_2_5),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_1_8),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_2_6),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_2_7),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_3_8),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_0_7),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_5_2),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_1_9),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_4_5),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_1_10),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_2_8),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_3_9),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_4_6),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_5_3),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_0_8),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_6_4),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_7_2),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_5_4),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_0_9),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_1_11),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_0_10),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_2_9),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_0_11),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_3_10),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_0_12),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_7_3),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_7_4),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_6_5),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_1_12),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_2_10),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_1_13),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_0_13),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_1_14),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_2_11),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_0_14),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_1_15),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_2_12),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_3_11),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_4_7),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_5_5),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_6_6),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_1_16),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_2_13),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_3_12),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_7_5),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_4_8),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_5_6),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_6_7),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_0_15),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_0_16),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_1_17),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_7_6),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_9_0),
	ENUM_TO_STRING(CS_CMD_ACTOR_CUE_0_17),
};

#undef ENUM_TO_STRING

// see https://github.com/zeldaret/oot/blob/823e47a0f8e9fb9fab89bc61b57f45488ff6debe/include/z64cutscene.h#L167-L204
const std::string csOoTMiscTypes[] = {
	"CS_MISC_UNIMPLEMENTED_0",
	"CS_MISC_RAIN",
	"CS_MISC_LIGHTNING",
	"CS_MISC_SET_CSFLAG_0",
	"CS_MISC_UNIMPLEMENTED_4",
	"CS_MISC_UNIMPLEMENTED_5",
	"CS_MISC_LIFT_FOG",
	"CS_MISC_CLOUDY_SKY",
	"CS_MISC_FADE_KOKIRI_GRASS_ENV_ALPHA",
	"CS_MISC_SNOW",
	"CS_MISC_SET_CSFLAG_1",
	"CS_MISC_DEKU_TREE_DEATH",
	"CS_MISC_STOP_CUTSCENE",
	"CS_MISC_TRIFORCE_FLASH",
	"CS_MISC_SET_LOCKED_VIEWPOINT",
	"CS_MISC_SHOW_TITLE_CARD",
	"CS_MISC_QUAKE_START",
	"CS_MISC_QUAKE_STOP",
	"CS_MISC_STOP_STORM_AND_ADVANCE_TO_DAY",
	"CS_MISC_SET_FLAG_FAST_WINDMILL",
	"CS_MISC_SET_FLAG_WELL_DRAINED",
	"CS_MISC_SET_FLAG_LAKE_HYLIA_RESTORED",
	"CS_MISC_VISMONO_BLACK_AND_WHITE",
	"CS_MISC_VISMONO_SEPIA",
	"CS_MISC_HIDE_ROOM",
	"CS_MISC_TIME_ADVANCE_TO_NIGHT",
	"CS_MISC_SET_TIME_BASED_LIGHT_SETTING",
	"CS_MISC_RED_PULSATING_LIGHTS",
	"CS_MISC_HALT_ALL_ACTORS",
	"CS_MISC_RESUME_ALL_ACTORS",
	"CS_MISC_SET_CSFLAG_3",
	"CS_MISC_SET_CSFLAG_4",
	"CS_MISC_SANDSTORM_FILL",
	"CS_MISC_SUNSSONG_START",
	"CS_MISC_FREEZE_TIME",
	"CS_MISC_LONG_SCARECROW_SONG",
};

// see https://github.com/zeldaret/oot/blob/823e47a0f8e9fb9fab89bc61b57f45488ff6debe/include/z64cutscene.h#L206-L212
const std::string csOoTTextTypes[] = {
	"CS_TEXT_NORMAL",
	"CS_TEXT_CHOICE",
	"CS_TEXT_OCARINA_ACTION",
	"CS_TEXT_GORON_RUBY",
	"CS_TEXT_ZORA_SAPPHIRE",
};

// see https://github.com/zeldaret/oot/blob/823e47a0f8e9fb9fab89bc61b57f45488ff6debe/include/z64cutscene.h#L219-233
const std::string csOoTTransitionType[] = {
	"CS_TRANS_GRAY_FILL_IN",
	"CS_TRANS_BLUE_FILL_IN",
	"CS_TRANS_RED_FILL_OUT",
	"CS_TRANS_GREEN_FILL_OUT",
	"CS_TRANS_GRAY_FILL_OUT",
	"CS_TRANS_BLUE_FILL_OUT",
	"CS_TRANS_RED_FILL_IN",
	"CS_TRANS_GREEN_FILL_IN",
	"CS_TRANS_TRIGGER_INSTANCE",
	"CS_TRANS_BLACK_FILL_OUT",
	"CS_TRANS_BLACK_FILL_IN",
	"CS_TRANS_BLACK_FILL_OUT_TO_HALF",
	"CS_TRANS_BLACK_FILL_IN_FROM_HALF",
};

// see https://github.com/zeldaret/oot/blob/823e47a0f8e9fb9fab89bc61b57f45488ff6debe/include/z64cutscene.h#L235-356
const std::string csOoTDestinationType[] = {
	"CS_DEST_UNIMPLEMENTED_0",
	"CS_DEST_CUTSCENE_MAP_GANON_HORSE",
	"CS_DEST_CUTSCENE_MAP_THREE_GODDESSES",
	"CS_DEST_GERUDO_VALLEY_DIN_PART_1",
	"CS_DEST_DEATH_MOUNTAIN_TRAIL_NAYRU",
	"CS_DEST_KOKIRI_FOREST_FARORE",
	"CS_DEST_CUTSCENE_MAP_TRIFORCE_CREATION",
	"CS_DEST_KOKIRI_FOREST_RECEIVE_KOKIRI_EMERALD",
	"CS_DEST_TEMPLE_OF_TIME_FROM_MASTER_SWORD",
	"CS_DEST_GERUDO_VALLEY_DIN_PART_2",
	"CS_DEST_LINKS_HOUSE_INTRO",
	"CS_DEST_KOKIRI_FOREST_INTRO",
	"CS_DEST_DEATH_MOUNTAIN_TRAIL_FROM_GORON_RUBY",
	"CS_DEST_ZORAS_FOUNTAIN_FROM_ZORAS_SAPPHIRE",
	"CS_DEST_KOKIRI_FOREST_FROM_KOKIRI_EMERALD",
	"CS_DEST_TEMPLE_OF_TIME_KOKIRI_EMERALD_RESTORED",
	"CS_DEST_TEMPLE_OF_TIME_GORON_RUBY_RESTORED",
	"CS_DEST_TEMPLE_OF_TIME_ZORAS_SAPPHIRE_RESTORED",
	"CS_DEST_TEMPLE_OF_TIME_AFTER_LIGHT_MEDALLION",
	"CS_DEST_DEATH_MOUNTAIN_TRAIL",
	"CS_DEST_UNIMPLEMENTED_14",
	"CS_DEST_LAKE_HYLIA_WATER_RESTORED",
	"CS_DEST_DESERT_COLOSSUS_REQUIEM",
	"CS_DEST_CUTSCENE_MAP_GANONDORF_DEFEATED_CREDITS",
	"CS_DEST_JABU_JABU",
	"CS_DEST_CHAMBER_OF_SAGES_LIGHT_MEDALLION",
	"CS_DEST_TEMPLE_OF_TIME_KOKIRI_EMERALD_RESTORED_2",
	"CS_DEST_TEMPLE_OF_TIME_GORON_RUBY_RESTORED_2",
	"CS_DEST_TEMPLE_OF_TIME_ZORAS_SAPPHIRE_RESTORED_2",
	"CS_DEST_CHAMBER_OF_SAGES_FOREST_MEDALLION",
	"CS_DEST_CHAMBER_OF_SAGES_FIRE_MEDALLION",
	"CS_DEST_CHAMBER_OF_SAGES_WATER_MEDALLION",
	"CS_DEST_HYRULE_FIELD_FLASHBACK",
	"CS_DEST_HYRULE_FIELD_FROM_ZELDA_ESCAPE",
	"CS_DEST_CUTSCENE_MAP_GANONDORF_FROM_MASTER_SWORD",
	"CS_DEST_HYRULE_FIELD_INTRO_DREAM",
	"CS_DEST_UNIMPLEMENTED_24",
	"CS_DEST_UNIMPLEMENTED_25",
	"CS_DEST_CUTSCENE_MAP_SHEIKAH_LEGEND",
	"CS_DEST_TEMPLE_OF_TIME_ZELDA_REVEAL",
	"CS_DEST_TEMPLE_OF_TIME_GET_LIGHT_ARROWS",
	"CS_DEST_LAKE_HYLIA_FROM_LAKE_RESTORED",
	"CS_DEST_KAKARIKO_VILLAGE_DRAIN_WELL",
	"CS_DEST_WINDMILL_FROM_WELL_DRAINED",
	"CS_DEST_TEMPLE_OF_TIME_FROM_ALL_STONES_RESTORED",
	"CS_DEST_UNIMPLEMENTED_2D",
	"CS_DEST_TEMPLE_OF_TIME_AFTER_LIGHT_MEDALLION_ALT",
	"CS_DEST_KAKARIKO_VILLAGE_NOCTURNE_PART_2",
	"CS_DEST_DESERT_COLOSSUS_FROM_REQUIEM",
	"CS_DEST_TEMPLE_OF_TIME_FROM_LIGHT_ARROWS",
	"CS_DEST_KAKARIKO_VILLAGE_FROM_NOCTURNE",
	"CS_DEST_HYRULE_FIELD_FROM_ZELDAS_COURTYARD",
	"CS_DEST_TEMPLE_OF_TIME_SONG_OF_TIME",
	"CS_DEST_HYRULE_FIELD_FROM_SONG_OF_TIME",
	"CS_DEST_GERUDO_VALLEY_CREDITS",
	"CS_DEST_GERUDO_FORTRESS_CREDITS",
	"CS_DEST_KAKARIKO_VILLAGE_CREDITS",
	"CS_DEST_DEATH_MOUNTAIN_TRAIL_CREDITS_PART_1",
	"CS_DEST_GORON_CITY_CREDITS",
	"CS_DEST_LAKE_HYLIA_CREDITS",
	"CS_DEST_ZORAS_FOUNTAIN_CREDITS crashes",
	"CS_DEST_ZORAS_DOMAIN_CREDITS",
	"CS_DEST_KOKIRI_FOREST_CREDITS_PART_1",
	"CS_DEST_KOKIRI_FOREST_CREDITS_PART_2",
	"CS_DEST_HYRULE_FIELD_CREDITS",
	"CS_DEST_LON_LON_RANCH_CREDITS_PART_1_ALT",
	"CS_DEST_KAKARIKO_VILLAGE_FROM_TRAIL_OWL",
	"CS_DEST_HYRULE_FIELD_FROM_LAKE_HYLIA_OWL",
	"CS_DEST_CUTSCENE_MAP_DEKU_SPROUT_PART_2",
	"CS_DEST_KOKIRI_FOREST_DEKU_SPROUT_PART_3",
	"CS_DEST_DEATH_MOUNTAIN_TRAIL_CREDITS_PART_2",
	"CS_DEST_TEMPLE_OF_TIME_CREDITS",
	"CS_DEST_ZELDAS_COURTYARD_CREDITS",
	"CS_DEST_LON_LON_RANCH_CREDITS_PART_1",
	"CS_DEST_LON_LON_RANCH_CREDITS_PART_2",
	"CS_DEST_LON_LON_RANCH_CREDITS_PART_3",
	"CS_DEST_LON_LON_RANCH_CREDITS_PART_4",
	"CS_DEST_LON_LON_RANCH_CREDITS_PART_5",
	"CS_DEST_LON_LON_RANCH_CREDITS_PART_6",
	"CS_DEST_LON_LON_RANCH_1",
	"CS_DEST_LON_LON_RANCH_2",
	"CS_DEST_LON_LON_RANCH_3",
	"CS_DEST_LON_LON_RANCH_4",
	"CS_DEST_LON_LON_RANCH_5",
	"CS_DEST_LON_LON_RANCH_6",
	"CS_DEST_LON_LON_RANCH_7",
	"CS_DEST_LON_LON_RANCH_8",
	"CS_DEST_LON_LON_RANCH_9",
	"CS_DEST_LON_LON_RANCH_10",
	"CS_DEST_LON_LON_RANCH_11",
	"CS_DEST_LON_LON_RANCH_12",
	"CS_DEST_LON_LON_RANCH_13",
	"CS_DEST_LON_LON_RANCH_14",
	"CS_DEST_LON_LON_RANCH_15",
	"CS_DEST_LON_LON_RANCH_FROM_EPONAS_SONG",
	"CS_DEST_STONES_RESTORED_CONDITIONAL",
	"CS_DEST_DESERT_COLOSSUS_FROM_CHAMBER_OF_SAGES",
	"CS_DEST_GRAVEYARD_FROM_CHAMBER_OF_SAGES",
	"CS_DEST_DEATH_MOUNTAIN_CRATER_FROM_CHAMBER_OF_SAGES",
	"CS_DEST_SACRED_FOREST_MEADOW_WARP_PAD",
	"CS_DEST_KOKIRI_FOREST_FROM_CHAMBER_OF_SAGES",
	"CS_DEST_DESERT_COLOSSUS_FROM_NABOORU_CAPTURE",
	"CS_DEST_TEMPLE_OF_TIME_FRONT_OF_PEDESTAL",
	"CS_DEST_HYRULE_FIELD_TITLE_SCREEN",
	"CS_DEST_TITLE_SCREEN_DEMO",
	"CS_DEST_GRAVEYARD_SUNS_SONG_PART_2",
	"CS_DEST_ROYAL_FAMILYS_TOMB_SUNS_SONG_PART_3",
	"CS_DEST_GANONS_CASTLE_DISPEL_FOREST_BEAM",
	"CS_DEST_GANONS_CASTLE_DISPEL_WATER_BEAM",
	"CS_DEST_GANONS_CASTLE_DISPEL_SHADOW_BEAM",
	"CS_DEST_GANONS_CASTLE_DISPEL_FIRE_BEAM",
	"CS_DEST_GANONS_CASTLE_DISPEL_LIGHT_BEAM",
	"CS_DEST_GANONS_CASTLE_DISPEL_SPIRIT_BEAM",
	"CS_DEST_GANONS_CASTLE_DISPEL_BARRIER_CONDITONAL",
	"CS_DEST_HYRULE_FIELD_FROM_FAIRY_OCARINA",
	"CS_DEST_HYRULE_FIELD_FROM_IMPA_ESCORT",
	"CS_DEST_FROM_RAURU_FINAL_MESSAGE_CONDITIONAL",
	"CS_DEST_HYRULE_FIELD_CREDITS_SKY",
	"CS_DEST_GANON_BATTLE_TOWER_COLLAPSE",
	"CS_DEST_ZELDAS_COURTYARD_RECEIVE_LETTER",
};
