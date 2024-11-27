#ifndef GUARD_tilesets_H
#define GUARD_tilesets_H

extern const u32 gTilesetTiles_General[];
extern const u16 gTilesetPalettes_General[][16];

extern const struct Tileset * const gTilesetPointer_SecretBase;
extern const struct Tileset * const gTilesetPointer_SecretBaseRedCave;

extern const struct Tileset gTileset_Building;
extern const struct Tileset gTileset_BrendansMaysHouse;

//My primaries
extern const struct Tileset gTileset_golden_fields;

enum TilesetsPrimary
{
    TILESET_VANILLA,
    TILESET_GOLDEN_FIELDS,
};

#endif //GUARD_tilesets_H
