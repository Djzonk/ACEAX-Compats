#define XTDAK74(CLASSNAME,RAIL,WEAR) \
class CLASSNAME { \
    model = QGVAR(ak74); \
    rail = QUOTE(RAIL); \
    wear = QUOTE(WEAR); \
};
#define XTDAK74M(CLASSNAME,GL,RAIL) \
class CLASSNAME { \
    model = QGVAR(ak74); \
    gl = QUOTE(GL); \
    rail = QUOTE(RAIL); \
};


class hlc_rifle_slr107u {
    model = QGVAR(slr107u);
    rail = "no";
};
class hlc_rifle_slr107u_MTK {
    model = QGVAR(slr107u);
    rail = "yes";
};

class hlc_rifle_ak12 {
    model = QGVAR(ak12);
    variant = "standard";
    gl = "no";
};
class hlc_rifle_ak12GL {
    model = QGVAR(ak12);
    variant = "standard";
    gl = "yes";
};
class hlc_rifle_aku12 {
    model = QGVAR(ak12);
    variant = "u";
    gl = "no";
};

class hlc_rifle_akm {
    model = QGVAR(akm);
    gl = "no";
    rail = "no";
};
class hlc_rifle_akmgl {
    model = QGVAR(akm);
    gl = "yes";
    rail = "no";
};
class hlc_rifle_akm_MTK {
    model = QGVAR(akm);
    gl = "no";
    rail = "yes";
};

class hlc_rifle_aks74 {
    model = QGVAR(aks);
    variant = "standard";
    rail = "no";
    gl = "no";
};
class hlc_rifle_aks74_GL {
    model = QGVAR(aks);
    variant = "standard";
    rail = "no";
    gl = "yes";
};
class hlc_rifle_aks74_MTK {
    model = QGVAR(aks);
    variant = "standard";
    rail = "yes";
    gl = "no";
};
class hlc_rifle_aks74u {
    model = QGVAR(aks);
    variant = "u";
    rail = "no";
    gl = "no";
};
class hlc_rifle_aks74u_MTK {
    model = QGVAR(aks);
    variant = "u";
    rail = "yes";
    gl = "no";
};

class hlc_rifle_aek971 {
    model = QGVAR(aek);
    rail = "no";
    wear = "no";
};
class hlc_rifle_aek971_mtk {
    model = QGVAR(aek);
    rail = "yes";
    wear = "no";
};
class hlc_rifle_aek971worn {
    model = QGVAR(aek);
    rail = "no";
    wear = "yes";
};

class hlc_rifle_rpk {
    model = QGVAR(rpk);
    variant = "rpk";
};
class hlc_rifle_rpk74n {
    model = QGVAR(rpk);
    variant = "rpk74";
};
class hlc_rifle_RPK12 {
    model = QGVAR(rpk);
    variant = "rpk12";
};

XTDAK74(hlc_rifle_ak74, no, no)
XTDAK74(hlc_rifle_ak74_MTK, yes, no)
XTDAK74(hlc_rifle_ak74_dirty, no, wear1)
XTDAK74(hlc_rifle_ak74_dirty2, no, wear2)

XTDAK74M(hlc_rifle_ak74m, no, no)
XTDAK74M(hlc_rifle_ak74m_gl, yes, no)
XTDAK74M(hlc_rifle_ak74m_MTK,  no, yes)






