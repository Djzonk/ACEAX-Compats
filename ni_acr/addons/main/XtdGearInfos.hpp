#define XTDACR(CLASSNAME,CAMO,BARREL,GL) \
class CLASSNAME { \
    model = QGVAR(acr); \
    camo = CAMO; \
    barrel = BARREL; \
    gl = GL; \
};
#define XTDACR68(CLASSNAME,CAMO,BARREL,GL) \
class CLASSNAME { \
    model = QGVAR(acr68); \
    camo = CAMO; \
    barrel = BARREL; \
    gl = GL; \
};


class XtdGearInfos {
    class CfgWeapons {
        //ACR
        XTDACR(hlc_rifle_ACR_SBR_tan, "tan", "compact", "no")
        XTDACR(hlc_rifle_ACR_SBR_black, "black", "compact", "no")
        XTDACR(hlc_rifle_ACR_SBR_green, "green", "compact", "no")
        XTDACR(hlc_rifle_ACR_Carb_tan, "tan", "carbine", "no")
        XTDACR(hlc_rifle_ACR_Carb_black, "black", "carbine", "no")
        XTDACR(hlc_rifle_ACR_Carb_green, "green", "carbine", "no")
        XTDACR(hlc_rifle_ACR_MID_tan, "tan", "mid", "no")
        XTDACR(hlc_rifle_ACR_MID_black, "black", "mid", "no")
        XTDACR(hlc_rifle_ACR_MID_green, "green", "mid", "no")
        XTDACR(hlc_rifle_ACR_full_tan, "tan", "long", "no")
        XTDACR(hlc_rifle_ACR_full_black, "black", "long", "no")
        XTDACR(hlc_rifle_ACR_full_green, "green", "long", "no")
        //GL
        XTDACR(hlc_rifle_ACR_GL_SBR_tan, "tan", "compact", "yes")
        XTDACR(hlc_rifle_ACR_GL_SBR_black, "black", "compact", "yes")
        XTDACR(hlc_rifle_ACR_GL_SBR_green, "green", "compact", "yes")
        XTDACR(hlc_rifle_ACR_GL_Carb_tan, "tan", "carbine", "yes")
        XTDACR(hlc_rifle_ACR_GL_Carb_black, "black", "carbine", "yes")
        XTDACR(hlc_rifle_ACR_GL_Carb_green, "green", "carbine", "yes")
        XTDACR(hlc_rifle_ACR_GL_MID_tan, "tan", "mid", "yes")
        XTDACR(hlc_rifle_ACR_GL_MID_black, "black", "mid", "yes")
        XTDACR(hlc_rifle_ACR_GL_MID_green, "green", "mid", "yes")

        //ACR 6.8
        XTDACR68(hlc_rifle_ACR68_SBR_tan, "tan", "compact", "no")
        XTDACR68(hlc_rifle_ACR68_SBR_black, "black", "compact", "no")
        XTDACR68(hlc_rifle_ACR68_SBR_green, "green", "compact", "no")
        XTDACR68(hlc_rifle_ACR68_Carb_tan, "tan", "carbine", "no")
        XTDACR68(hlc_rifle_ACR68_Carb_black, "black", "carbine", "no")
        XTDACR68(hlc_rifle_ACR68_Carb_green, "green", "carbine", "no")
        XTDACR68(hlc_rifle_ACR68_MID_tan, "tan", "mid", "no")
        XTDACR68(hlc_rifle_ACR68_MID_black, "black", "mid", "no")
        XTDACR68(hlc_rifle_ACR68_MID_green, "green", "mid", "no")
        XTDACR68(hlc_rifle_ACR68_full_tan, "tan", "long", "no")
        XTDACR68(hlc_rifle_ACR68_full_black, "black", "long", "no")
        XTDACR68(hlc_rifle_ACR68_full_green, "green", "long", "no")
        //GL
        XTDACR68(hlc_rifle_ACR68_GL_SBR_tan, "tan", "compact", "yes")
        XTDACR68(hlc_rifle_ACR68_GL_SBR_black, "black", "compact", "yes")
        XTDACR68(hlc_rifle_ACR68_GL_SBR_green, "green", "compact", "yes")
        XTDACR68(hlc_rifle_ACR68_GL_Carb_tan, "tan", "carbine", "yes")
        XTDACR68(hlc_rifle_ACR68_GL_Carb_black, "black", "carbine", "yes")
        XTDACR68(hlc_rifle_ACR68_GL_Carb_green, "green", "carbine", "yes")
        XTDACR68(hlc_rifle_ACR68_GL_MID_tan, "tan", "mid", "yes")
        XTDACR68(hlc_rifle_ACR68_GL_MID_black, "black", "mid", "yes")
        XTDACR68(hlc_rifle_ACR68_GL_MID_green, "green", "mid", "yes")

        class hlc_rifle_ACR_SBR_cliffhanger {
                model = QGVAR(acr_cliffhanger);
                gl = "no";
        };
        class hlc_rifle_ACR_GL_SBR_cliffhanger {
                model = QGVAR(acr_cliffhanger);
                gl = "yes";
        };
    };
};
