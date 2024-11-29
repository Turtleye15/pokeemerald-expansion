static const u32 sFieldMugshotGfx_TestNormal[] = INCBIN_U32("graphics/field_mugshots/test/normal.4bpp.lz");
static const u32 sFieldMugshotGfx_TestAlt[] = INCBIN_U32("graphics/field_mugshots/test/alt.4bpp.lz");
static const u16 sFieldMugshotPal_TestNormal[] = INCBIN_U16("graphics/field_mugshots/test/normal.gbapal");
static const u16 sFieldMugshotPal_TestAlt[] = INCBIN_U16("graphics/field_mugshots/test/alt.gbapal");


static const u32 sFieldMugshotGfx_IsabellNormal[] = INCBIN_U32("graphics/field_mugshots/isabell/normal.4bpp.lz");
static const u16 sFieldMugshotPal_IsabellNormal[] = INCBIN_U16("graphics/field_mugshots/isabell/normal.gbapal");
static const u32 sFieldMugshotGfx_IsabellAlt[] = INCBIN_U32("graphics/field_mugshots/isabell/alt.4bpp.lz");
static const u16 sFieldMugshotPal_IsabellAlt[] = INCBIN_U16("graphics/field_mugshots/isabell/alt.gbapal");

static const u32 sFieldMugshotGfx_DaniaNormal[] = INCBIN_U32("graphics/field_mugshots/dania/normal.4bpp.lz");
static const u16 sFieldMugshotPal_Dania[] = INCBIN_U16("graphics/field_mugshots/dania/normal.gbapal");

static const u32 sFieldMugshotGfx_CecileNormal[] = INCBIN_U32("graphics/field_mugshots/cecile/normal.4bpp.lz");
static const u32 sFieldMugshotGfx_CecileAlt[] = INCBIN_U32("graphics/field_mugshots/cecile/alt.4bpp.lz");
static const u16 sFieldMugshotPal_Cecile[] = INCBIN_U16("graphics/field_mugshots/cecile/normal.gbapal");

struct MugshotGfx
{
    const u32 *gfx;
    const u16 *pal;
};

static const struct MugshotGfx sFieldMugshots[MUGSHOT_COUNT][EMOTE_COUNT] =
{
    [MUGSHOT_TEST] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_TestNormal,
            .pal = sFieldMugshotPal_TestNormal,
        },

        [EMOTE_ALT] =
        {
            .gfx = sFieldMugshotGfx_TestAlt,
            .pal = sFieldMugshotPal_TestAlt,
        },
    },

    [MUGSHOT_ISABELL] =
       {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_IsabellNormal,
            .pal = sFieldMugshotPal_IsabellNormal,
        },

        [EMOTE_ALT] =
        {
            .gfx = sFieldMugshotGfx_IsabellAlt,
            .pal = sFieldMugshotPal_IsabellAlt,
        },
    },
    [MUGSHOT_DANIA] =
       {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_DaniaNormal,
            .pal = sFieldMugshotPal_Dania,
        },
    },

    [MUGSHOT_CECILE] =
       {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_CecileNormal,
            .pal = sFieldMugshotPal_Cecile,
        },

        [EMOTE_ALT] =
        {
            .gfx = sFieldMugshotGfx_CecileAlt,
            .pal = sFieldMugshotPal_Cecile,
        },
    },
};
