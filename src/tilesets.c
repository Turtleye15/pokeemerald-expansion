#include "global.h"
#include "tilesets.h"
#include "tileset_anims.h"
#include "global.fieldmap.h"

#include "data/tilesets/graphics.h"
#include "data/tilesets/metatiles.h"
#include "data/tilesets/headers.h"

u16 GetPrimaryTilesetIdCurrentMap(void)
{
    if (gMapHeader.mapLayout->primaryTileset == &gTileset_golden_fields)
        return TILESET_GOLDEN_FIELDS;
    else
        return TILESET_VANILLA;
}