const Collision bob_area_1_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(4),
	COL_VERTEX(-5095, -72, 5085),
	COL_VERTEX(5150, -72, 5085),
	COL_VERTEX(5150, -72, -5160),
	COL_VERTEX(-5095, -72, -5160),
	COL_TRI_INIT(SURFACE_DEFAULT, 2),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI_STOP(),
	COL_END()
};
