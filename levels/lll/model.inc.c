Lights1 lll_dl_f3d_material_001_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Vtx lll_dl_Plane_mesh_layer_1_vtx_0[4] = {
	{{{-481, 0, 481},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{7478, 0, 481},0, {1008, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{7478, 0, -481},0, {1008, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-481, 0, -481},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx lll_dl_Plane_mesh_layer_1_tri_0[] = {
	gsSPVertex(lll_dl_Plane_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Gfx mat_lll_dl_f3d_material_001[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(lll_dl_f3d_material_001_lights),
	gsSPEndDisplayList(),
};

Gfx lll_dl_Plane_mesh_layer_1[] = {
	gsSPDisplayList(mat_lll_dl_f3d_material_001),
	gsSPDisplayList(lll_dl_Plane_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx lll_dl_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

