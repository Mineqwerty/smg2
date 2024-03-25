#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/castle_grounds/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_castle_grounds_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _outside_yay0SegmentRomStart, _outside_yay0SegmentRomEnd), 
	LOAD_YAY0(0x06, _group12_yay0SegmentRomStart, _group12_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group12_geoSegmentRomStart, _group12_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_13), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, castle_grounds_geo_0006F4), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_VCUTM_GRILL, castle_grounds_geo_00070C), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_FLAG, castle_grounds_geo_000660), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CANNON_GRILL, castle_grounds_geo_000724), 
	LOAD_MODEL_FROM_GEO(MODEL_LAKITU, sussy_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, castle_grounds_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOWSER_1, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BITDW, 0x04, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x14, LEVEL_CASTLE_GROUNDS, 0x01, 0x15, WARP_NO_CHECKPOINT),
		WARP_NODE(0x15, LEVEL_CASTLE_GROUNDS, 0x01, 0x14, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_RED_COIN, 372, 812, -2776, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_BOBOMB_BUDDY, 491, 671, 137, 0, 0, 0, 0x00000000, bhvHiddenRedCoinStar),
		OBJECT(MODEL_RED_COIN, 2062, 498, -152, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -1924, 1699, 2646, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 2367, 605, -2334, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -2687, 1055, -235, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -1017, 100, 7776, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -857, 100, 2518, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 572, 1125, 1406, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_EXCLAMATION_BOX, 1491, 497, -445, 0, 0, 0, (7 << 16), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, 1771, 497, -445, 0, 0, 0, (7 << 16), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, 2063, 497, -445, 0, 0, 0, (7 << 16), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, 1491, 497, -155, 0, 0, 0, (7 << 16), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, 1771, 497, -155, 0, 0, 0, (7 << 16), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, 2063, 497, -155, 0, 0, 0, (6 << 16), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, 1491, 497, 128, 0, 0, 0, (7 << 16), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, 1771, 497, 128, 0, 0, 0, (7 << 16), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, 2063, 497, 128, 0, 0, 0, (7 << 16), bhvExclamationBox),
		OBJECT(MODEL_CHUCKYA, -2539, 442, -401, 0, 0, 0, 0x00000000, bhvChuckya),
		OBJECT(MODEL_CHUCKYA, -2887, 442, -384, 0, 0, 0, 0x00000000, bhvChuckya),
		OBJECT(MODEL_CHUCKYA, -2559, 442, -42, 0, 0, 0, 0x00000000, bhvChuckya),
		OBJECT(MODEL_CHUCKYA, -2892, 442, -40, 0, 0, 0, 0x00000000, bhvChuckya),
		OBJECT(MODEL_CHUCKYA, -2693, 846, -238, 0, 0, 0, 0x00000000, bhvChuckya),
		OBJECT(MODEL_EXCLAMATION_BOX, 2765, 321, 1797, 0, 0, 0, (9 << 16), bhvExclamationBox),
		OBJECT(MODEL_CASTLE_WOODEN_DOOR, -857, 100, 2388, 0, 0, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_CASTLE_WOODEN_DOOR, -857, 100, 2652, 0, 0, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_CASTLE_WOODEN_DOOR, -990, 100, 2520, 0, 90, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_CASTLE_WOODEN_DOOR, -725, 100, 2520, 0, 90, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_CASTLE_WOODEN_DOOR, -951, 100, 2427, 0, 45, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_CASTLE_WOODEN_DOOR, -764, 100, 2613, 0, 45, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_CASTLE_WOODEN_DOOR, -951, 100, 2613, 0, 135, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_CASTLE_WOODEN_DOOR, -764, 100, 2427, 0, 135, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -688, 100, 3262, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -861, 100, 3262, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -1039, 100, 3262, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -1216, 100, 3262, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -1417, 100, 3262, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_NONE, -857, 100, 2518, 0, 0, 0, (20 << 16), bhvFadingWarp),
		OBJECT(MODEL_NONE, -1049, 208, 7764, 0, 0, 0, (10 << 24) | (21 << 16), bhvFadingWarp),
		OBJECT(MODEL_EXCLAMATION_BOX, -1698, 325, 8378, 0, 0, 0, (7 << 16), bhvExclamationBox),
		OBJECT(MODEL_WOODEN_SIGNPOST, 2883, 100, 1917, 0, 96, 0, (1 << 16), bhvMessagePanel),
		OBJECT(MODEL_WOODEN_SIGNPOST, 1052, 100, 94, 0, -94, 0, (2 << 16), bhvMessagePanel),
		OBJECT(MODEL_WOODEN_SIGNPOST, -1325, 100, 1596, 0, -172, 0, (3 << 16), bhvMessagePanel),
		OBJECT(MODEL_WOODEN_SIGNPOST, 2869, 100, 2582, 0, 96, 0, (4 << 16), bhvMessagePanel),
		OBJECT(MODEL_WOODEN_SIGNPOST, -166, 715, -2628, 0, 68, 0, (0 << 16), bhvMessagePanel),
		OBJECT(MODEL_CASTLE_WOODEN_DOOR, -2700, 100, 3273, 0, 0, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_NONE, 0, 200, 0, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, 0, 200, 0),
		TERRAIN(castle_grounds_area_1_collision),
		MACRO_OBJECTS(castle_grounds_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 0, 200, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
