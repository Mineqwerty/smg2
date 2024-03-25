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
#include "levels/thi/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_thi_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _thi_segment_7SegmentRomStart, _thi_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _grass_yay0SegmentRomStart, _grass_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _ccm_skybox_yay0SegmentRomStart, _ccm_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group11_yay0SegmentRomStart, _group11_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group11_geoSegmentRomStart, _group11_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_12), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_THI_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, thi_geo_0005F0), 
	LOAD_MODEL_FROM_GEO(MODEL_THI_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_THI_HUGE_ISLAND_TOP, thi_geo_0005B0), 
	LOAD_MODEL_FROM_GEO(MODEL_THI_TINY_ISLAND_TOP, thi_geo_0005C8), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, thi_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_SSL, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(11, LEVEL_THI, 0x01, 24, WARP_NO_CHECKPOINT),
		WARP_NODE(12, LEVEL_THI, 0x01, 17, WARP_NO_CHECKPOINT),
		WARP_NODE(13, LEVEL_THI, 0x01, 31, WARP_NO_CHECKPOINT),
		WARP_NODE(14, LEVEL_THI, 0x01, 22, WARP_NO_CHECKPOINT),
		WARP_NODE(15, LEVEL_THI, 0x01, 11, WARP_NO_CHECKPOINT),
		WARP_NODE(16, LEVEL_THI, 0x01, 49, WARP_NO_CHECKPOINT),
		WARP_NODE(17, LEVEL_THI, 0x01, 29, WARP_NO_CHECKPOINT),
		WARP_NODE(18, LEVEL_THI, 0x01, 17, WARP_NO_CHECKPOINT),
		WARP_NODE(19, LEVEL_THI, 0x01, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_THI, 0x01, 21, WARP_NO_CHECKPOINT),
		WARP_NODE(21, LEVEL_THI, 0x01, 14, WARP_NO_CHECKPOINT),
		WARP_NODE(22, LEVEL_THI, 0x01, 45, WARP_NO_CHECKPOINT),
		WARP_NODE(23, LEVEL_THI, 0x01, 37, WARP_NO_CHECKPOINT),
		WARP_NODE(24, LEVEL_THI, 0x01, 19, WARP_NO_CHECKPOINT),
		WARP_NODE(25, LEVEL_THI, 0x01, 41, WARP_NO_CHECKPOINT),
		WARP_NODE(26, LEVEL_THI, 0x01, 38, WARP_NO_CHECKPOINT),
		WARP_NODE(27, LEVEL_THI, 0x01, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(28, LEVEL_THI, 0x01, 35, WARP_NO_CHECKPOINT),
		WARP_NODE(29, LEVEL_THI, 0x01, 47, WARP_NO_CHECKPOINT),
		WARP_NODE(30, LEVEL_THI, 0x01, 26, WARP_NO_CHECKPOINT),
		WARP_NODE(31, LEVEL_THI, 0x01, 23, WARP_NO_CHECKPOINT),
		WARP_NODE(32, LEVEL_THI, 0x01, 21, WARP_NO_CHECKPOINT),
		WARP_NODE(33, LEVEL_THI, 0x01, 51, WARP_NO_CHECKPOINT),
		WARP_NODE(34, LEVEL_THI, 0x01, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(35, LEVEL_THI, 0x01, 13, WARP_NO_CHECKPOINT),
		WARP_NODE(36, LEVEL_THI, 0x01, 41, WARP_NO_CHECKPOINT),
		WARP_NODE(37, LEVEL_THI, 0x01, 22, WARP_NO_CHECKPOINT),
		WARP_NODE(38, LEVEL_THI, 0x01, 26, WARP_NO_CHECKPOINT),
		WARP_NODE(39, LEVEL_THI, 0x01, 31, WARP_NO_CHECKPOINT),
		WARP_NODE(40, LEVEL_THI, 0x01, 25, WARP_NO_CHECKPOINT),
		WARP_NODE(41, LEVEL_THI, 0x01, 31, WARP_NO_CHECKPOINT),
		WARP_NODE(42, LEVEL_THI, 0x01, 29, WARP_NO_CHECKPOINT),
		WARP_NODE(43, LEVEL_THI, 0x01, 12, WARP_NO_CHECKPOINT),
		WARP_NODE(44, LEVEL_THI, 0x01, 31, WARP_NO_CHECKPOINT),
		WARP_NODE(45, LEVEL_THI, 0x01, 11, WARP_NO_CHECKPOINT),
		WARP_NODE(46, LEVEL_THI, 0x01, 27, WARP_NO_CHECKPOINT),
		WARP_NODE(47, LEVEL_THI, 0x01, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(48, LEVEL_THI, 0x01, 33, WARP_NO_CHECKPOINT),
		WARP_NODE(49, LEVEL_THI, 0x01, 25, WARP_NO_CHECKPOINT),
		WARP_NODE(50, LEVEL_THI, 0x01, 23, WARP_NO_CHECKPOINT),
		WARP_NODE(51, LEVEL_THI, 0x01, 11, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_THI_WARP_PIPE, 14, 54, -622, 0, 0, 0, (11 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, 31, 54, 496, 0, 0, 0, (13 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, 568, 54, -59, 0, 0, 0, (12 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, -551, 54, -77, 0, 0, 0, (14 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, -6323, 54, -622, 0, 0, 0, (48 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, -6306, 54, 496, 0, 0, 0, (50 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, -5770, 54, -59, 0, 0, 0, (47 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, -6888, 54, -77, 0, 0, 0, (49 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, 5803, 54, -622, 0, 0, 0, (18 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, 5820, 54, 496, 0, 0, 0, (16 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, 6356, 54, -59, 0, 0, 0, (17 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, 5238, 54, -77, 0, 0, 0, (15 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, 2919, 54, -3289, 0, 0, 0, (20 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, 2936, 54, -2171, 0, 0, 0, (21 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, 3472, 54, -2726, 0, 0, 0, (22 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, 2354, 54, -2744, 0, 0, 0, (19 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, -2690, 54, 3700, 0, 0, 0, (23 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, -2673, 54, 4818, 0, 0, 0, (26 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, -2136, 54, 4263, 0, 0, 0, (25 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, -3255, 54, 4245, 0, 0, 0, (24 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, -3150, 54, -4900, 0, 0, 0, (27 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, -3133, 54, -3783, 0, 0, 0, (30 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, -2596, 54, -4337, 0, 0, 0, (28 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, -3715, 54, -4355, 0, 0, 0, (29 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, 2783, 54, 3179, 0, 0, 0, (31 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, 2800, 54, 4296, 0, 0, 0, (34 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, 3337, 54, 3742, 0, 0, 0, (33 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, 2218, 54, 3724, 0, 0, 0, (32 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, 1651, 54, -6835, 0, 0, 0, (35 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, 1667, 54, -5717, 0, 0, 0, (37 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, 2204, 54, -6272, 0, 0, 0, (38 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, 1085, 54, -6290, 0, 0, 0, (36 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, -6323, 54, 6531, 0, 0, 0, (41 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, -6306, 54, 7649, 0, 0, 0, (40 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, -5770, 54, 7094, 0, 0, 0, (39 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, -6888, 54, 7076, 0, 0, 0, (42 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, 6399, 54, 4635, 0, 0, 0, (46 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, 6416, 54, 5753, 0, 0, 0, (45 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, 6953, 54, 5198, 0, 0, 0, (43 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, 5834, 54, 5180, 0, 0, 0, (44 << 16), bhvWarpPipe),
		OBJECT(MODEL_THI_WARP_PIPE, -6553, 54, -5273, 0, 0, 0, (51 << 16), bhvWarpPipe),
		OBJECT(MODEL_STAR, -6520, 345, -6273, 0, 0, 0, (0 << 16), bhvStar),
		OBJECT(MODEL_NONE, 0, 200, 0, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, 0, 200, 0),
		TERRAIN(thi_area_1_collision),
		MACRO_OBJECTS(thi_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_STREAMED_HEY),
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
