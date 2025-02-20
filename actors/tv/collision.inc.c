const Collision tv_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(17),
	COL_VERTEX(-595, -389, 221),
	COL_VERTEX(-595, 389, 221),
	COL_VERTEX(-595, 389, -221),
	COL_VERTEX(-595, -389, -221),
	COL_VERTEX(595, 389, -221),
	COL_VERTEX(595, -389, -221),
	COL_VERTEX(595, 389, 221),
	COL_VERTEX(595, -389, 221),
	COL_VERTEX(0, 0, 278),
	COL_VERTEX(0, 342, 278),
	COL_VERTEX(-524, 342, 278),
	COL_VERTEX(-524, 0, 278),
	COL_VERTEX(-524, -342, 278),
	COL_VERTEX(524, 342, 278),
	COL_VERTEX(524, 0, 278),
	COL_VERTEX(524, -342, 278),
	COL_VERTEX(0, -342, 278),
	COL_TRI_INIT(SURFACE_DEFAULT, 30),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(3, 2, 4),
	COL_TRI(3, 4, 5),
	COL_TRI(5, 4, 6),
	COL_TRI(5, 6, 7),
	COL_TRI(8, 9, 10),
	COL_TRI(8, 10, 11),
	COL_TRI(3, 5, 7),
	COL_TRI(3, 7, 0),
	COL_TRI(4, 2, 1),
	COL_TRI(4, 1, 6),
	COL_TRI(0, 12, 11),
	COL_TRI(11, 10, 1),
	COL_TRI(11, 1, 0),
	COL_TRI(6, 13, 14),
	COL_TRI(14, 15, 7),
	COL_TRI(14, 7, 6),
	COL_TRI(7, 15, 16),
	COL_TRI(16, 12, 0),
	COL_TRI(16, 0, 7),
	COL_TRI(1, 10, 9),
	COL_TRI(9, 13, 6),
	COL_TRI(9, 6, 1),
	COL_TRI(16, 8, 11),
	COL_TRI(16, 11, 12),
	COL_TRI(15, 14, 8),
	COL_TRI(15, 8, 16),
	COL_TRI(14, 13, 9),
	COL_TRI(14, 9, 8),
	COL_TRI_STOP(),
	COL_END()
};
