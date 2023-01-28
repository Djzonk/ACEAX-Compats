#define XTDC96(CLASSNAME,VARIANT,BARRELLENGTH,STOCK,WEAR) \
class CLASSNAME { \
    model = QGVAR(c96); \
    variant = QUOTE(VARIANT); \
    barrelLength = QUOTE(BARRELLENGTH); \
    stock = QUOTE(STOCK); \
    wear = QUOTE(WEAR); \
};


XTDC96(hlc_pistol_c96_Wartime, standard, long, no, no)
XTDC96(hlc_pistol_c96_Custom, custom, long, yes, no)
XTDC96(hlc_pistol_c96_Wartime_stock, standard, long, yes, no)
XTDC96(hlc_pistol_c96_Wartime_Worn, standard, long, no, yes)
XTDC96(hlc_pistol_c96_Wartime_Worn_stock, standard, long, yes, yes)
XTDC96(hlc_pistol_c96_Prussian, prussian, long, no, no)
XTDC96(hlc_pistol_c96_Prussian_stock, prussian, long, yes, no)
XTDC96(hlc_pistol_c96_Prussian_Rework, prussian, short, no, yes)
XTDC96(hlc_pistol_c96_Prussian_Rework_Stock, prussian, short, yes, yes)
XTDC96(hlc_pistol_c96_Bolo, standard, short, no, no)
XTDC96(hlc_pistol_c96_Bolo_stock, standard, short, yes, no)
XTDC96(hlc_pistol_c96_Bolo_Worn, standard, short, no, yes)
XTDC96(hlc_pistol_c96_Bolo_Worn_Stock, standard, short, yes, yes)
XTDC96(hlc_pistol_c96_Bolo_Worn_Stock, standard, short, yes, yes)
XTDC96(hlc_pistol_M712, fullauto, long, no, no)
XTDC96(hlc_pistol_M712_stock, fullauto, long, yes, no)
XTDC96(hlc_pistol_M712_worn, fullauto, long, no, yes)
XTDC96(hlc_pistol_M712_worn_Stock, fullauto, long, yes, yes)
