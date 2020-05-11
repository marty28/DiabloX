/**
 * @file missiles.h
 *
 * Interface of missile functionality.
 */
#ifndef __MISSILES_H__
#define __MISSILES_H__

extern int missileactive[MAXMISSILES];
extern int missileavail[MAXMISSILES];
extern MissileStruct missile[MAXMISSILES];
extern int nummissiles;
extern BOOL ManashieldFlag;
extern ChainStruct chain[MAXMISSILES];
extern BOOL MissilePreFlag;
extern int numchains;

void GetDamageAmt(int i, int *mind, int *maxd);
BOOL CheckBlock(int fx, int fy, int tx, int ty);
int FindClosest(int sx, int sy, int rad);
int GetSpellLevel(int id, int sn);
int GetDirection8(int x1, int y1, int x2, int y2);
int GetDirection16(int x1, int y1, int x2, int y2);
void DeleteMissile(int mi, int i);
void GetMissileVel(int i, int sx, int sy, int dx, int dy, int v);
void PutMissile(int i);
void GetMissilePos(int i);
void MoveMissilePos(int i);
BOOL MonsterTrapHit(int m, int mindam, int maxdam, int dist, int t, BOOLEAN shift);
BOOL MonsterMHit(int pnum, int m, int mindam, int maxdam, int dist, int t, BOOLEAN shift);
BOOL PlayerMHit(int pnum, int m, int dist, int mind, int maxd, int mtype, BOOLEAN shift, int earflag);
BOOL Plr2PlrMHit(int pnum, int p, int mindam, int maxdam, int dist, int mtype, BOOLEAN shift);
void CheckMissileCol(int i, int mindam, int maxdam, BOOL shift, int mx, int my, BOOLEAN nodel);
void SetMissAnim(int mi, int animtype);
void SetMissDir(int mi, int dir);
void LoadMissileGFX(BYTE mi);
void InitMissileGFX();
void FreeMissileGFX(int mi);
void FreeMissiles();
void FreeMissiles2();
void InitMissiles();
void AddLArrow(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddArrow(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void GetVileMissPos(int mi, int dx, int dy);
void AddRndTeleport(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddFirebolt(int mi, int sx, int sy, int dx, int dy, int midir, char micaster, int id, int dam);
void AddMagmaball(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void miss_null_33(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddTeleport(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddLightball(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddFirewall(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddFireball(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddLightctrl(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddLightning(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddMisexp(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddWeapexp(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
BOOL CheckIfTrig(int x, int y);
void AddTown(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddFlash(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddFlash2(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddManashield(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddFiremove(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddGuardian(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddChain(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void miss_null_11(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void miss_null_12(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void miss_null_13(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddRhino(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void miss_null_32(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddFlare(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddAcid(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void miss_null_1D(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddAcidpud(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddStone(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddGolem(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddEtherealize(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void miss_null_1F(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void miss_null_23(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddBoom(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddHeal(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddHealOther(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddElement(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddIdentify(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddFirewallC(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddInfra(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddWave(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddNova(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddBlodboil(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddRepair(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddRecharge(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddDisarm(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddApoca(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddFlame(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddFlamec(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddCbolt(int mi, int sx, int sy, int dx, int dy, int midir, char micaster, int id, int dam);
void AddHbolt(int mi, int sx, int sy, int dx, int dy, int midir, char micaster, int id, int dam);
void AddResurrect(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddResurrectBeam(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddTelekinesis(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddBoneSpirit(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddRportal(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
void AddDiabApoca(int mi, int sx, int sy, int dx, int dy, int midir, char mienemy, int id, int dam);
int AddMissile(int sx, int sy, int dx, int dy, int midir, int mitype, char micaster, int id, int midam, int spllvl);
int Sentfire(int i, int sx, int sy);
void MI_Dummy(int i);
void MI_Golem(int i);
void MI_SetManashield(int i);
void MI_LArrow(int i);
void MI_Arrow(int i);
void MI_Firebolt(int i);
void MI_Lightball(int i);
void mi_null_33(int i);
void MI_Acidpud(int i);
void MI_Firewall(int i);
void MI_Fireball(int i);
void MI_Lightctrl(int i);
void MI_Lightning(int i);
void MI_Town(int i);
void MI_Flash(int i);
void MI_Flash2(int i);
void MI_Manashield(int i);
void MI_Etherealize(int i);
void MI_Firemove(int i);
void MI_Guardian(int i);
void MI_Chain(int i);
void mi_null_11(int i);
void MI_Weapexp(int i);
void MI_Misexp(int i);
void MI_Acidsplat(int i);
void MI_Teleport(int i);
void MI_Stone(int i);
void MI_Boom(int i);
void MI_Rhino(int i);
void mi_null_32(int i);
void MI_FirewallC(int i);
void MI_Infra(int i);
void MI_Apoca(int i);
void MI_Wave(int i);
void MI_Nova(int i);
void MI_Blodboil(int i);
void MI_Flame(int i);
void MI_Flamec(int i);
void MI_Cbolt(int i);
void MI_Hbolt(int i);
void MI_Element(int i);
void MI_Bonespirit(int i);
void MI_ResurrectBeam(int i);
void MI_Rportal(int i);
void ProcessMissiles();
void missiles_process_charge();
void ClearMissileSpot(int mi);

/* rdata */

extern int XDirAdd[8];
extern int YDirAdd[8];

#endif /* __MISSILES_H__ */