void scroll_bowser_1_dl_Circle_mesh_layer_1_vtx_1() {
	int i = 0;
	int count = 128;
	int width = 64 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(bowser_1_dl_Circle_mesh_layer_1_vtx_1);

	deltaX = (int)(1.0 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_bowser_1() {
	scroll_bowser_1_dl_Circle_mesh_layer_1_vtx_1();
}
