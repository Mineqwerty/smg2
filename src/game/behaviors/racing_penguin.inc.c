// racing_penguin.inc.c

struct RacingPenguinData {
    s16 text;
    f32 radius;
    f32 height;
};

static struct RacingPenguinData sRacingPenguinData[] = {
    { DIALOG_055, 200.0f, 200.0f },
    { DIALOG_164, 350.0f, 250.0f },
};

void bhv_racing_penguin_init(void) {
    if (gMarioState->numStars == 120) {
        cur_obj_scale(8.0f);
        o->header.gfx.scale[1] = 5.0f;
        o->oBehParams2ndByte = 1;
    }
}

static void racing_penguin_act_wait_for_mario(void) {
    if (o->oTimer > o->oRacingPenguinInitTextCooldown && o->oPosY - gMarioObject->oPosY <= 0.0f
        && cur_obj_can_mario_activate_textbox_2(400.0f, 400.0f)) {
        o->oAction = RACING_PENGUIN_ACT_SHOW_INIT_TEXT;
    }
}

static void racing_penguin_act_show_init_text(void) {
    
}

static void racing_penguin_act_prepare_for_race(void) {
    
}

static void racing_penguin_act_race(void) {
    
}

static void racing_penguin_act_finish_race(void) {
    
}

static void racing_penguin_act_show_final_text(void) {
    
}

void bhv_racing_penguin_update(void) {
    
}

void bhv_penguin_race_finish_line_update(void) {
    
}

void bhv_penguin_race_shortcut_check_update(void) {
    
}
