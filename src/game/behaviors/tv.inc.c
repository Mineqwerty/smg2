void bhv_tv_loop(void) {
    /*
    if (o->oTimer > 1495) {
        o->oTimer = 0;
    }

    extern const u8 eman_tl_textures_dma[];
    extern u8 tv_tlbase_rgba16[];
    u8 *tlTextures = segmented_to_virtual(&tv_tlbase_rgba16);

    dma_read(tlTextures, ((o->oTimer / 5)*4096) + eman_tl_textures_dma, ((o->oTimer / 5)*4096) + eman_tl_textures_dma + 4096);

    extern const u8 eman_tr_textures_dma[];
    extern u8 tv_trbase_rgba16[];
    u8 *trTextures = segmented_to_virtual(&tv_trbase_rgba16);

    dma_read(trTextures, ((o->oTimer / 5)*4096) + eman_tr_textures_dma, ((o->oTimer / 5)*4096) + eman_tr_textures_dma + 4096);

    extern const u8 eman_bl_textures_dma[];
    extern u8 tv_blbase_rgba16[];
    u8 *blTextures = segmented_to_virtual(&tv_blbase_rgba16);

    dma_read(blTextures, ((o->oTimer / 5)*4096) + eman_bl_textures_dma, ((o->oTimer / 5)*4096) + eman_bl_textures_dma + 4096);

    extern const u8 eman_br_textures_dma[];
    extern u8 tv_brbase_rgba16[];
    u8 *brTextures = segmented_to_virtual(&tv_brbase_rgba16);

    dma_read(brTextures, ((o->oTimer / 5)*4096) + eman_br_textures_dma, ((o->oTimer / 5)*4096) + eman_br_textures_dma + 4096);
    */

   
}

void bhv_screwdriver_loop(void) {
    if (o->oAction == 0 && gMarioState->action == ACT_PUNCHING || gMarioState->action == ACT_MOVE_PUNCHING || gMarioState->action == ACT_JUMP_KICK) {
        if (o->oDistanceToMario < 200.0f) {
            o->oAction = 1;
            play_sound(SOUND_ACTION_HIT_2, gMarioState->marioObj->header.gfx.cameraToObject);
        }
    }

    if (o->oAction == 1) {
        o->oPosZ += 20.0f;
        o->oFaceAngleYaw += 0x800;
        o->oFaceAngleRoll += 0x700;
        o->oFaceAnglePitch += 0x600;
        play_transition(WARP_TRANSITION_FADE_INTO_COLOR, 120, 05, 12, 245);
        o->oAction = 2;
        o->oTimer = 0;
        play_sound(SOUND_RADIATION, gMarioState->marioObj->header.gfx.cameraToObject);
    }

    if (o->oAction == 2){
        o->oPosZ += 20.0f;
        o->oFaceAngleYaw += 0x800;
        o->oFaceAngleRoll += 0x700;
        o->oFaceAnglePitch += 0x600;

        if (o->oTimer == 90) {
            play_sound(SOUND_RADIATION, gMarioState->marioObj->header.gfx.cameraToObject);
        }
        if (o->oTimer > 150) {
        initiate_warp(LEVEL_THI, 1, 0x0A, 0);
        }
    }


}