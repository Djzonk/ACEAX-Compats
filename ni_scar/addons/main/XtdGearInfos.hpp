#define XTDSCARL(CLASSNAME,CAMO,GL,BARREL,RAILEXTENSION) \
class CLASSNAME { \
    model = QGVAR(scarl); \
    camo = CAMO; \
    gl = GL; \
    barrel = BARREL; \
    railExtension = RAILEXTENSION; \
};
#define XTDSCARH(CLASSNAME,CAMO,GL,BARREL,RAILEXTENSION) \
class CLASSNAME { \
    model = QGVAR(scarh); \
    camo = CAMO; \
    gl = GL; \
    barrel = BARREL; \
    railExtension = RAILEXTENSION; \
};
#define XTDSCARL300(CLASSNAME,CAMO,GL,BARREL,RAILEXTENSION) \
class CLASSNAME { \
    model = QGVAR(scarl300); \
    camo = CAMO; \
    gl = GL; \
    barrel = BARREL; \
    railExtension = RAILEXTENSION; \
};
#define XTDSCARCAMOONLY(CLASSNAME,MODEL,CAMO) \
class CLASSNAME { \
    model = MODEL; \
    camo = CAMO; \
};
#define XTDMK17(CLASSNAME,MOD,CAMO,CALIBER,BARREL,GL) \
class CLASSNAME { \
    model = QGVAR(mk17); \
    mod = MOD; \
    camo = CAMO; \
    caliber = CALIBER; \
    barrel = BARREL; \
    gl = GL; \
};

class XtdGearInfos {
    class CfgWeapons {
        //SCAR-H
        XTDSCARH(hlc_wp_SCARH_STD, "tan", "no", "std", "no")
        XTDSCARH(hlc_wp_SCARH_STD_SRX, "tan", "no", "std", "yes")
        XTDSCARH(hlc_wp_SCARH_STD_EGLM, "tan", "yes", "std", "no")
        XTDSCARH(hlc_WP_SCARH_CQC, "tan", "no", "cqc", "no")
        XTDSCARH(hlc_wp_SCARH_CQC_SRX, "tan", "no", "cqc", "yes")
        XTDSCARH(hlc_wp_SCARH_CQC_EGLM, "tan", "yes", "cqc", "no")
        XTDSCARH(hlc_WP_SCARH_DMR, "tan", "no", "lb", "no")

        XTDSCARH(hlc_wp_SCARH_STD_Blk, "black", "no", "std", "no")
        XTDSCARH(hlc_wp_SCARH_STD_SRX_Blk, "black", "no", "std", "yes")
        XTDSCARH(hlc_wp_SCARH_STD_EGLM_Blk, "black", "yes", "std", "no")
        XTDSCARH(hlc_wp_SCARH_CQC_Blk, "black", "no", "cqc", "no")
        XTDSCARH(hlc_wp_SCARH_CQC_SRX_Blk, "black", "no", "cqc", "yes")
        XTDSCARH(hlc_wp_SCARH_CQC_EGLM_Blk, "black", "yes", "cqc", "no")
        XTDSCARH(hlc_wp_SCARH_DMR_Blk, "black", "no", "lb", "no")

        XTDSCARH(hlc_wp_SCARH_STD_camo, "camo", "no", "std", "no")
        XTDSCARH(hlc_wp_SCARH_STD_SRX_camo, "camo", "no", "std", "yes")
        XTDSCARH(hlc_wp_SCARH_STD_EGLM_camo, "camo", "yes", "std", "no")
        XTDSCARH(hlc_wp_SCARH_CQC_camo, "camo", "no", "cqc", "no")
        XTDSCARH(hlc_wp_SCARH_CQC_SRX_camo, "camo", "no", "cqc", "yes")
        XTDSCARH(hlc_wp_SCARH_CQC_EGLM_camo, "camo", "yes", "cqc", "no")
        XTDSCARH(hlc_wp_SCARH_DMR_camo, "camo", "no", "lb", "no")
        //SCAR-L
        XTDSCARL(hlc_wp_SCARL_STD, "tan", "no", "std", "no")
        XTDSCARL(hlc_WP_SCARL_CQC, "tan", "no", "cqc", "no")
        XTDSCARL(hlc_WP_SCARL_DMR, "tan", "no", "lb", "no")
        XTDSCARL(hlc_wp_SCARL_STD_SRX, "tan", "no", "std", "yes")
        XTDSCARL(hlc_wp_SCARL_STD_EGLM, "tan", "yes", "std", "no")
        XTDSCARL(hlc_wp_SCARL_CQC_EGLM, "tan", "yes", "cqc", "no")

        XTDSCARL(hlc_wp_SCARL_STD_Blk, "black", "no", "std", "no")
        XTDSCARL(hlc_wp_SCARL_CQC_Blk, "black", "no", "cqc", "no")
        XTDSCARL(hlc_wp_SCARL_DMR_Blk, "black", "no", "lb", "no")
        XTDSCARL(hlc_wp_SCARL_STD_SRX_Blk, "black", "no", "std", "yes")
        XTDSCARL(hlc_wp_SCARL_STD_EGLM_Blk, "black", "yes", "std", "no")
        XTDSCARL(hlc_wp_SCARL_CQC_EGLM_Blk, "black", "yes", "cqc", "no")

        XTDSCARL(hlc_wp_SCARL_STD_camo, "camo", "no", "std", "no")
        XTDSCARL(hlc_wp_SCARL_CQC_camo, "camo", "no", "cqc", "no")
        XTDSCARL(hlc_wp_SCARL_DMR_camo, "camo", "no", "lb", "no")
        XTDSCARL(hlc_wp_SCARL_STD_SRX_camo, "camo", "no", "std", "yes")
        XTDSCARL(hlc_wp_SCARL_STD_EGLM_camo, "camo", "yes", "std", "no")
        XTDSCARL(hlc_wp_SCARL_CQC_EGLM_camo, "camo", "yes", "cqc", "no")
        //SCARL 300 BLACKOUT
        XTDSCARL300(hlc_wp_SCARL_STD_300AAC, "tan", "no", "std", "no")
        XTDSCARL300(hlc_WP_SCARL_CQC_300AAC, "tan", "no", "cqc", "no")
        XTDSCARL300(hlc_wp_SCARL_STD_300AAC_SRX, "tan", "no", "std", "yes")
        XTDSCARL300(hlc_wp_SCARL_CQC_300AAC_EGLM, "tan", "yes", "cqc", "no")
        XTDSCARL300(hlc_wp_SCARL_STD_300AAC_EGLM, "tan", "yes", "std", "no")

        XTDSCARL300(hlc_wp_SCARL_STD_300AAC_Blk, "black", "no", "std", "no")
        XTDSCARL300(hlc_wp_SCARL_CQC_300AAC_Blk, "black", "no", "cqc", "no")
        XTDSCARL300(hlc_wp_SCARL_STD_300AAC_SRX_Blk, "black", "no", "std", "yes")
        XTDSCARL300(hlc_wp_SCARL_CQC_300AAC_EGLM_Blk, "black", "yes", "cqc", "no")
        XTDSCARL300(hlc_wp_SCARL_STD_300AAC_EGLM_Blk, "black", "yes", "std", "no")

        XTDSCARL300(hlc_wp_SCARL_STD_300AAC_camo, "camo", "no", "std", "no")
        XTDSCARL300(hlc_wp_SCARL_CQC_300AAC_camo, "camo", "no", "cqc", "no")
        XTDSCARL300(hlc_wp_SCARL_STD_300AAC_SRX_camo, "camo", "no", "std", "yes")
        XTDSCARL300(hlc_wp_SCARL_CQC_300AAC_EGLM_camo, "camo", "yes", "cqc", "no")
        XTDSCARL300(hlc_wp_SCARL_STD_300AAC_EGLM_camo, "camo", "yes", "std", "no")
        //SCAR-SC
        XTDSCARCAMOONLY(hlc_wp_SCAR_PDW, QGVAR(scarsc), "tan")
        XTDSCARCAMOONLY(hlc_wp_SCAR_PDW_Blk, QGVAR(scarsc), "black")
        XTDSCARCAMOONLY(hlc_wp_SCAR_PDW_camo, QGVAR(scarsc), "camo")
        //FN TPR
        XTDSCARCAMOONLY(hlc_WP_SSR, QGVAR(tpr), "tan")
        XTDSCARCAMOONLY(hlc_wp_SSR_Blk, QGVAR(tpr), "black")
        XTDSCARCAMOONLY(hlc_wp_SSR_camo, QGVAR(tpr), "camo")
        //MK 17
        XTDMK17(hlc_wp_MK17, "0", "tan", "762nato", "std", "no")
        XTDMK17(hlc_wp_MK17_AGC, "0", "tan", "762nato", "std", "yes")
        XTDMK17(hlc_wp_Mk17_camo, "0", "camo", "762nato", "std", "no")
        XTDMK17(hlc_wp_MK17_AGC_camo, "0", "camo", "762nato", "std", "yes")
        XTDMK17(hlc_wp_Mk17_CQC, "0", "tan", "762nato", "cqc", "no")
        XTDMK17(hlc_wp_Mk17_CQC_camo, "0", "camo", "762nato", "cqc", "no")
        XTDMK17(hlc_wp_MK17_CQC_AGC, "0", "tan", "762nato", "cqc", "yes")
        XTDMK17(hlc_wp_MK17_CQC_AGC_camo, "0", "camo", "762nato", "cqc", "yes")
        XTDMK17(hlc_WP_Mk17IUR, "iur", "tan", "762nato", "std", "no")
        XTDMK17(hlc_wp_MK17IUR_camo, "iur", "camo", "762nato", "std", "no")
        XTDMK17(hlc_wp_MK17IUR_AGC, "iur", "tan", "762nato", "std", "yes")
        XTDMK17(hlc_wp_MK17IUR_AGC_camo, "iur", "camo", "762nato", "std", "yes")
        XTDMK17(hlc_wp_MK17IUR_556, "iur", "tan", "556nato", "std", "no")
        XTDMK17(hlc_wp_MK17IUR_556_camo, "iur", "camo", "556nato", "std", "no")
        XTDMK17(hlc_wp_MK17IUR_556_AGC, "iur", "tan", "556nato", "std", "yes")
        XTDMK17(hlc_wp_MK17IUR_556_AGC_camo, "iur", "camo", "556nato", "std", "yes")
        XTDMK17(hlc_wp_MK17IUR_300, "iur", "tan", "300", "std", "no")
        XTDMK17(hlc_wp_MK17IUR_300_camo, "iur", "camo", "300", "std", "no")
        XTDMK17(hlc_wp_MK17IUR_300_AGC, "iur", "tan", "300", "std", "yes")
        XTDMK17(hlc_wp_MK17IUR_300_AGC_camo, "iur", "camo", "300", "std", "yes")
        XTDMK17(hlc_wp_MK17IUR_762R, "iur", "tan", "762ak", "std", "no")
        XTDMK17(hlc_wp_MK17IUR_762R_camo, "iur", "camo", "762ak", "std", "no")


    };
};
