#include <ultra64.h>
#include "sm64.h"
#include "surface_terrains.h"
#include "geo_commands.h"

#include "make_const_nonconst.h"

// Note: This bin does not use bin IDs, unlike the other segmented bins.
#include "mario/model.inc.c"

#include "bubble/model.inc.c"

#include "walk_smoke/model.inc.c"

#include "burn_smoke/model.inc.c"

#include "small_water_splash/model.inc.c"

#include "water_wave/model.inc.c"

#include "sparkle/model.inc.c"

#include "water_splash/model.inc.c"

#include "white_particle_small/model.inc.c"

#include "sparkle_animation/model.inc.c"

#ifdef S2DEX_TEXT_ENGINE
#include "src/s2d_engine/config.h"
#include FONT_C_FILE
#endif

#include "car/model.inc.c"
#include "car/anims/data.inc.c"
#include "car/anims/table.inc.c"
#include "trollface/model.inc.c"
#include "fastflower/model.inc.c"
#include "tv/model.inc.c"
#include "tv/collision.inc.c"
#include "screwdriver/model.inc.c"
#include "joop/model.inc.c"
#include "joop/anims/data.inc.c"
#include "joop/anims/table.inc.c"
#include "cutter_hand/model.inc.c"