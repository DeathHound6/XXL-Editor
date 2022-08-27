#include "ClassRegister.h"
#include "KEnvironment.h"

#include "CKManager.h"
#include "CKHook.h"
#include "CKGroup.h"
#include "CKComponent.h"
#include "CKCamera.h"
#include "CKCinematicNode.h"
#include "CKDictionary.h"
#include "CKGeometry.h"
#include "CKNode.h"
#include "CKLogic.h"
#include "CKGraphical.h"
#include "CKGameX2.h"
#include "CKGameOG.h"

void ClassRegister::registerClassesForXXL1PC(KEnvironment& kenv)
{
	// XXL1 PC/GC Original+Romaster

	kenv.addFactory<CKServiceManager>();
	kenv.addFactory<CKGraphic>();
	kenv.addFactory<CKSoundManager>();

	kenv.addFactory<CKServiceLife>();
	kenv.addFactory<CKSrvCollision>();
	kenv.addFactory<CKSrvCamera>();
	kenv.addFactory<CKSrvCinematic>();
	kenv.addFactory<CKSrvEvent>();
	kenv.addFactory<CKSrvPathFinding>();
	kenv.addFactory<CKSrvDetector>();
	kenv.addFactory<CKSrvMarker>();
	kenv.addFactory<CKSrvAvoidance>();
	kenv.addFactory<CKSrvSekensor>();
	kenv.addFactory<CKSrvBeacon>();
	kenv.addFactory<CKSrvShadow>();
	kenv.addFactory<CKSrvProjectiles>();
	kenv.addFactory<CKSrvFx>();

	kenv.addFactory<CKHkPressionStone>();
	kenv.addFactory<CKHkAsterix>();
	kenv.addFactory<CKHkObelix>();
	kenv.addFactory<CKHkIdefix>();
	kenv.addFactory<CKHkMachinegun>();
	kenv.addFactory<CKHkTorch>();
	kenv.addFactory<CKHkHearth>();
	kenv.addFactory<CKHkDrawbridge>();
	kenv.addFactory<CKHkMegaAshtray>();
	kenv.addFactory<CKHkBoat>();
	kenv.addFactory<CKHkCorkscrew>();
	kenv.addFactory<CKHkTurnstile>();
	kenv.addFactory<CKHkLifter>();
	kenv.addFactory<CKHkActivator>();
	kenv.addFactory<CKHkRotaryBeam>();
	kenv.addFactory<CKHkLightPillar>();
	kenv.addFactory<CKHkWind>();
	kenv.addFactory<CKHkJumpingRoman>();
	kenv.addFactory<CKHkWaterJet>();
	kenv.addFactory<CKHkPowderKeg>();
	kenv.addFactory<CKHkTriangularTurtle>();
	kenv.addFactory<CKHkBasicEnemy>();
	kenv.addFactory<CKHkRomanArcher>();
	kenv.addFactory<CKHkAnimatedCharacter>();
	kenv.addFactory<CKHkSwingDoor>();
	kenv.addFactory<CKHkSlideDoor>();
	kenv.addFactory<CKHkCrumblyZone>();
	kenv.addFactory<CKHkHelmetCage>();
	kenv.addFactory<CKHkSquareTurtle>();
	kenv.addFactory<CKHkTeleBridge>();
	kenv.addFactory<CKHkCrate>();
	kenv.addFactory<CKHkBasicBonus>();
	kenv.addFactory<CKHkDonutTurtle>();
	kenv.addFactory<CKHkPyramidalTurtle>();
	kenv.addFactory<CKHkRollingStone>();
	kenv.addFactory<CKHkInterfaceBase>();
	kenv.addFactory<CKHkInterfaceEvolution>();
	kenv.addFactory<CKHkCatapult>();
	kenv.addFactory<CKHkInterfacePause>();
	kenv.addFactory<CKHkInterfaceInGame>();
	kenv.addFactory<CKHkInterfaceOption>();
	kenv.addFactory<CKHkInterfaceMain>();
	kenv.addFactory<CKHkInterfaceLoadSave>();
	kenv.addFactory<CKHkInterfaceCloth>();
	kenv.addFactory<CKHkInterfaceShop>();
	kenv.addFactory<CKHkPushPullAsterix>();
	kenv.addFactory<CKHkBasicEnemyLeader>();
	kenv.addFactory<CKHkTelepher>();
	kenv.addFactory<CKHkTowedTelepher>();
	kenv.addFactory<CKHkBumper>();
	kenv.addFactory<CKHkClueMan>();
	kenv.addFactory<CKHkSky>();
	kenv.addFactory<CKHkRocketRoman>();
	kenv.addFactory<CKHkJetPackRoman>();
	kenv.addFactory<CKHkWildBoar>();
	kenv.addFactory<CKHkAsterixShop>();
	kenv.addFactory<CKHkWater>();
	kenv.addFactory<CKHkMobileTower>();
	kenv.addFactory<CKHkBoss>();
	kenv.addFactory<CKHkInterfaceDemo>();
	kenv.addFactory<CKHkWaterFx>();
	kenv.addFactory<CKHkHighGrass>();
	kenv.addFactory<CKHkWaterFall>();
	kenv.addFactory<CKHkInterfaceGallery>();
	kenv.addFactory<CKHkTrioCatapult>();
	kenv.addFactory<CKHkObelixCatapult>();
	kenv.addFactory<CKHkInterfaceOpening>();
	kenv.addFactory<CKHkAsterixCheckpoint>();
	kenv.addFactory<CKHkBonusSpitter>();
	kenv.addFactory<CKHkLight>();
	kenv.addFactory<CKHkParkourSteleAsterix>();

	kenv.addFactory<CKHkAsterixLife>();
	kenv.addFactory<CKHkBoatLife>();
	kenv.addFactory<CKHkObelixLife>();
	kenv.addFactory<CKHkMecaLife>();
	kenv.addFactory<CKHkIdefixLife>();
	kenv.addFactory<CKHkEnemyLife>();
	kenv.addFactory<CKHkTriangularTurtleLife>();
	kenv.addFactory<CKHkAnimatedCharacterLife>();
	kenv.addFactory<CKHkSquareTurtleLife>();
	kenv.addFactory<CKHkDonutTurtleLife>();
	kenv.addFactory<CKHkPyramidalTurtleLife>();
	kenv.addFactory<CKHkCatapultLife>();
	kenv.addFactory<CKHkSkyLife>();
	kenv.addFactory<CKHkWaterLife>();
	kenv.addFactory<CKHkBossLife>();
	kenv.addFactory<CKHkWaterFxLife>();
	kenv.addFactory<CKHkAsterixCheckpointLife>();
	kenv.addFactory<CKHkWaterFallLife>();

	kenv.addFactory<CKGroupRoot>();
	kenv.addFactory<CKGrpMeca>();
	kenv.addFactory<CKGrpTrio>();
	kenv.addFactory<CKGrpBoat>();
	kenv.addFactory<CKGrpSquadEnemy>();
	kenv.addFactory<CKGrpEnemy>();
	kenv.addFactory<CKGrpPoolSquad>();
	kenv.addFactory<CKGrpWalkingCharacter>();
	kenv.addFactory<CKGrpBonus>();
	kenv.addFactory<CKGrpFrontEnd>();
	kenv.addFactory<CKGrpCatapult>();
	kenv.addFactory<CKGrpMap>();
	kenv.addFactory<CKGrpStorageStd>();
	kenv.addFactory<CKGrpCrate>();
	kenv.addFactory<CKGrpBonusPool>();
	kenv.addFactory<CKGrpAsterixBonusPool>();
	kenv.addFactory<CKGrpSquadJetPack>();
	kenv.addFactory<CKGrpWildBoarPool>();
	kenv.addFactory<CKGrpAsterixCheckpoint>();
	kenv.addFactory<CKGrpBonusSpitter>();
	kenv.addFactory<CKGrpLight>();

	kenv.addFactory<CKGrpTrioLife>();
	kenv.addFactory<CKGrpMecaLife>();
	kenv.addFactory<CKGrpBonusLife>();
	kenv.addFactory<CKGrpMapLife>();
	kenv.addFactory<CKGrpEnemyLife>();
	kenv.addFactory<CKGrpAsterixCheckpointLife>();

	kenv.addFactory<CKGrpMecaCpntAsterix>();
	kenv.addFactory<CKCrateCpnt>();
	kenv.addFactory<CKBasicEnemyCpnt>();
	kenv.addFactory<CKBasicEnemyLeaderCpnt>();
	kenv.addFactory<CKJumpingRomanCpnt>();
	kenv.addFactory<CKRomanArcherCpnt>();
	kenv.addFactory<CKShadowCpnt>();
	kenv.addFactory<CKRocketRomanCpnt>();
	kenv.addFactory<CKBonusCpnt>();
	kenv.addFactory<CKJetPackRomanCpnt>();
	kenv.addFactory<CKWildBoarCpnt>();
	kenv.addFactory<CKMobileTowerCpnt>();
	kenv.addFactory<CKTriangularTurtleCpnt>();
	kenv.addFactory<CKSquareTurtleCpnt>();
	kenv.addFactory<CKDonutTurtleCpnt>();
	kenv.addFactory<CKPyramidalTurtleCpnt>();

	kenv.addFactory<CKCamera>();
	kenv.addFactory<CKCameraRigidTrack>();
	kenv.addFactory<CKCameraClassicTrack>();
	kenv.addFactory<CKCameraPathTrack>();
	kenv.addFactory<CKCameraFixTrack>();
	kenv.addFactory<CKCameraAxisTrack>();
	kenv.addFactory<CKCameraSpyTrack>();
	kenv.addFactory<CKCameraPassivePathTrack>();

	kenv.addFactory<CKLogicalAnd>();
	kenv.addFactory<CKLogicalOr>();
	kenv.addFactory<CKPlayAnimCinematicBloc>();
	kenv.addFactory<CKPathFindingCinematicBloc>();
	kenv.addFactory<CKFlaggedPathCinematicBloc>();
	kenv.addFactory<CKGroupBlocCinematicBloc>();
	kenv.addFactory<CKAttachObjectsCinematicBloc>();
	kenv.addFactory<CKStreamCinematicBloc>();
	kenv.addFactory<CKRandLogicalDoor>();
	kenv.addFactory<CKParticleCinematicBloc>();
	kenv.addFactory<CKStreamAloneCinematicBloc>();
	kenv.addFactory<CKStreamGroupBlocCinematicBloc>();
	kenv.addFactory<CKManageEventCinematicBloc>();
	kenv.addFactory<CKManagerEventStopCinematicBloc>();
	kenv.addFactory<CKStartDoor>();
	kenv.addFactory<CKSekensorCinematicBloc>();
	kenv.addFactory<CKDisplayPictureCinematicBloc>();
	kenv.addFactory<CKManageCameraCinematicBloc>();
	kenv.addFactory<CKStartEventCinematicBloc>();
	kenv.addFactory<CKSkyCinematicBloc>();
	kenv.addFactory<CKLightningCinematicBloc>();
	kenv.addFactory<CKPlaySoundCinematicBloc>();
	kenv.addFactory<CKPauseCinematicBloc>();
	kenv.addFactory<CKTeleportCinematicBloc>();
	kenv.addFactory<CKEndDoor>();

	kenv.addFactory<CTextureDictionary>();
	kenv.addFactory<CAnimationDictionary>();
	kenv.addFactory<CKSoundDictionary>();
	kenv.addFactory<CKSoundDictionaryID>();

	kenv.addFactory<CKParticleGeometry>();
	kenv.addFactory<CKGeometry>();
	kenv.addFactory<CKSkinGeometry>();

	kenv.addFactory<CSGRootNode>();
	kenv.addFactory<CSGSectorRoot>();
	kenv.addFactory<CNode>();
	kenv.addFactory<CKDynBSphereProjectile>();
	kenv.addFactory<CSGBranch>();
	kenv.addFactory<CGlowNodeFx>();
	kenv.addFactory<CClone>();
	kenv.addFactory<CKBoundingSphere>();
	kenv.addFactory<CKDynamicBoundingSphere>();
	kenv.addFactory<CKAABB>();
	kenv.addFactory<CKOBB>();
	kenv.addFactory<CParticlesNodeFx>();
	kenv.addFactory<CAnimatedNode>();
	kenv.addFactory<CAnimatedClone>();
	kenv.addFactory<CKAACylinder>();
	kenv.addFactory<CSkyNodeFx>();
	kenv.addFactory<CFogBoxNodeFx>();
	kenv.addFactory<CTrailNodeFx>();

	kenv.addFactory<CKPFGraphTransition>();
	kenv.addFactory<CKBundle>();
	kenv.addFactory<CKSector>();
	kenv.addFactory<CKLevel>();
	kenv.addFactory<CKCameraSector>();
	kenv.addFactory<CKCoreManager>();
	kenv.addFactory<CKSpline4>();
	kenv.addFactory<CKChoreoKey>();
	kenv.addFactory<CKPFGraphNode>();
	kenv.addFactory<CKSas>();
	kenv.addFactory<CGround>();
	kenv.addFactory<CDynamicGround>();
	kenv.addFactory<CWall>();
	kenv.addFactory<CKFlaggedPath>();
	kenv.addFactory<CKMsgAction>();
	kenv.addFactory<CKChoreography>();
	kenv.addFactory<CKLine>();
	kenv.addFactory<CKSpline4L>();
	kenv.addFactory<CKCinematicScene>();
	kenv.addFactory<CKCinematicSceneData>();
	kenv.addFactory<CKDefaultGameManager>();
	kenv.addFactory<CKAsterixGameManager>();
	kenv.addFactory<CKAsterixSlideFP>();
	kenv.addFactory<CLocManager>();
	kenv.addFactory<CKSekens>();
	kenv.addFactory<CKMeshKluster>();
	kenv.addFactory<CKBeaconKluster>();
	kenv.addFactory<CKProjectileTypeScrap>();
	kenv.addFactory<CKProjectileTypeAsterixBomb>();
	kenv.addFactory<CKProjectileTypeBallisticPFX>();
	kenv.addFactory<CKFlashNode2dFx>();
	kenv.addFactory<CKElectricArcNodeFx>();
	kenv.addFactory<CKQuadNodeFx>();
	kenv.addFactory<CKLightningObjectNodeFx>();
	kenv.addFactory<CKFilterNode2dFx>();
	kenv.addFactory<CKExplosionNodeFx>();

	kenv.addFactory<CCloneManager>();
	kenv.addFactory<CAnimationManager>();
	kenv.addFactory<CManager2d>();
	kenv.addFactory<CMenuManager>();
	kenv.addFactory<CContainer2d>();
	kenv.addFactory<CScene2d>();
	kenv.addFactory<CMessageBox2d>();
	kenv.addFactory<CText2d>();
	kenv.addFactory<CColorTextButton2d>();
	kenv.addFactory<CBillboard2d>();
	kenv.addFactory<CBillboard2dList>();
	kenv.addFactory<CBillboardButton2d>();
}

void ClassRegister::registerClassesForXXL1Console(KEnvironment& kenv)
{
	// XXL1 PS2

	kenv.addFactory<CKServiceManager>();

	kenv.addFactory<CKSrvCollision>();
	kenv.addFactory<CKSrvCinematic>();
	//kenv.addFactory<CKSrvEvent>();
	kenv.addFactory<CKSrvPathFinding>();
	kenv.addFactory<CKSrvDetector>();
	kenv.addFactory<CKSrvMarker>();
	kenv.addFactory<CKSrvBeacon>();
	kenv.addFactory<CKSrvShadow>();
	kenv.addFactory<CKSrvFx>();

	kenv.addFactory<CKHkPressionStone>();
	kenv.addFactory<CKHkAsterix>();
	kenv.addFactory<CKHkObelix>();
	kenv.addFactory<CKHkIdefix>();
	kenv.addFactory<CKHkMachinegun>();
	kenv.addFactory<CKHkTorch>();
	kenv.addFactory<CKHkHearth>();
	kenv.addFactory<CKHkDrawbridge>();
	kenv.addFactory<CKHkMegaAshtray>();
	kenv.addFactory<CKHkBoat>();
	kenv.addFactory<CKHkCorkscrew>();
	kenv.addFactory<CKHkTurnstile>();
	kenv.addFactory<CKHkLifter>();
	kenv.addFactory<CKHkActivator>();
	kenv.addFactory<CKHkRotaryBeam>();
	kenv.addFactory<CKHkLightPillar>();
	kenv.addFactory<CKHkWind>();
	kenv.addFactory<CKHkJumpingRoman>();
	kenv.addFactory<CKHkWaterJet>();
	kenv.addFactory<CKHkPowderKeg>();
	kenv.addFactory<CKHkTriangularTurtle>();
	kenv.addFactory<CKHkBasicEnemy>();
	kenv.addFactory<CKHkRomanArcher>();
	kenv.addFactory<CKHkAnimatedCharacter>();
	kenv.addFactory<CKHkSwingDoor>();
	kenv.addFactory<CKHkSlideDoor>();
	kenv.addFactory<CKHkCrumblyZone>();
	kenv.addFactory<CKHkHelmetCage>();
	kenv.addFactory<CKHkSquareTurtle>();
	kenv.addFactory<CKHkTeleBridge>();
	kenv.addFactory<CKHkCrate>();
	kenv.addFactory<CKHkBasicBonus>();
	kenv.addFactory<CKHkDonutTurtle>();
	kenv.addFactory<CKHkPyramidalTurtle>();
	kenv.addFactory<CKHkRollingStone>();
	kenv.addFactory<CKHkInterfaceBase>();
	kenv.addFactory<CKHkInterfaceEvolution>();
	kenv.addFactory<CKHkCatapult>();
	kenv.addFactory<CKHkInterfacePause>();
	kenv.addFactory<CKHkInterfaceInGame>();
	kenv.addFactory<CKHkInterfaceOption>();
	kenv.addFactory<CKHkInterfaceMain>();
	kenv.addFactory<CKHkInterfaceLoadSave>();
	kenv.addFactory<CKHkInterfaceCloth>();
	kenv.addFactory<CKHkInterfaceShop>();
	kenv.addFactory<CKHkPushPullAsterix>();
	kenv.addFactory<CKHkBasicEnemyLeader>();
	kenv.addFactory<CKHkTelepher>();
	kenv.addFactory<CKHkTowedTelepher>();
	kenv.addFactory<CKHkBumper>();
	kenv.addFactory<CKHkClueMan>();
	kenv.addFactory<CKHkSky>();
	kenv.addFactory<CKHkRocketRoman>();
	kenv.addFactory<CKHkJetPackRoman>();
	kenv.addFactory<CKHkWildBoar>();
	kenv.addFactory<CKHkAsterixShop>();
	kenv.addFactory<CKHkWater>();
	kenv.addFactory<CKHkMobileTower>();
	kenv.addFactory<CKHkBoss>();
	kenv.addFactory<CKHkInterfaceDemo>();
	kenv.addFactory<CKHkWaterFx>();
	kenv.addFactory<CKHkHighGrass>();
	kenv.addFactory<CKHkWaterFall>();
	kenv.addFactory<CKHkInterfaceGallery>();
	kenv.addFactory<CKHkTrioCatapult>();
	kenv.addFactory<CKHkObelixCatapult>();
	kenv.addFactory<CKHkInterfaceOpening>();
	kenv.addFactory<CKHkAsterixCheckpoint>();
	kenv.addFactory<CKHkBonusSpitter>();
	kenv.addFactory<CKHkLight>();

	kenv.addFactory<CKHkAsterixLife>();
	kenv.addFactory<CKHkBoatLife>();
	kenv.addFactory<CKHkObelixLife>();
	kenv.addFactory<CKHkMecaLife>();
	kenv.addFactory<CKHkIdefixLife>();
	kenv.addFactory<CKHkEnemyLife>();
	kenv.addFactory<CKHkTriangularTurtleLife>();
	kenv.addFactory<CKHkAnimatedCharacterLife>();
	kenv.addFactory<CKHkSquareTurtleLife>();
	kenv.addFactory<CKHkDonutTurtleLife>();
	kenv.addFactory<CKHkPyramidalTurtleLife>();
	kenv.addFactory<CKHkCatapultLife>();
	kenv.addFactory<CKHkSkyLife>();
	kenv.addFactory<CKHkWaterLife>();
	kenv.addFactory<CKHkBossLife>();
	kenv.addFactory<CKHkWaterFxLife>();
	kenv.addFactory<CKHkAsterixCheckpointLife>();
	kenv.addFactory<CKHkWaterFallLife>();

	kenv.addFactory<CKGroupRoot>();
	kenv.addFactory<CKGrpMeca>();
	kenv.addFactory<CKGrpTrio>();
	kenv.addFactory<CKGrpBoat>();
	kenv.addFactory<CKGrpSquadEnemy>();
	kenv.addFactory<CKGrpEnemy>();
	kenv.addFactory<CKGrpPoolSquad>();
	kenv.addFactory<CKGrpWalkingCharacter>();
	kenv.addFactory<CKGrpBonus>();
	kenv.addFactory<CKGrpFrontEnd>();
	kenv.addFactory<CKGrpCatapult>();
	kenv.addFactory<CKGrpMap>();
	kenv.addFactory<CKGrpStorageStd>();
	kenv.addFactory<CKGrpCrate>();
	kenv.addFactory<CKGrpBonusPool>();
	kenv.addFactory<CKGrpAsterixBonusPool>();
	kenv.addFactory<CKGrpSquadJetPack>();
	kenv.addFactory<CKGrpWildBoarPool>();
	kenv.addFactory<CKGrpAsterixCheckpoint>();
	kenv.addFactory<CKGrpBonusSpitter>();
	kenv.addFactory<CKGrpLight>();

	kenv.addFactory<CKGrpTrioLife>();
	kenv.addFactory<CKGrpMecaLife>();
	kenv.addFactory<CKGrpBonusLife>();
	kenv.addFactory<CKGrpMapLife>();
	kenv.addFactory<CKGrpEnemyLife>();
	kenv.addFactory<CKGrpAsterixCheckpointLife>();

	kenv.addFactory<CKCrateCpnt>();
	kenv.addFactory<CKBasicEnemyCpnt>();
	kenv.addFactory<CKBasicEnemyLeaderCpnt>();
	kenv.addFactory<CKJumpingRomanCpnt>();
	kenv.addFactory<CKRomanArcherCpnt>();
	kenv.addFactory<CKShadowCpnt>();
	kenv.addFactory<CKRocketRomanCpnt>();
	kenv.addFactory<CKJetPackRomanCpnt>();
	kenv.addFactory<CKMobileTowerCpnt>();
	kenv.addFactory<CKTriangularTurtleCpnt>();
	kenv.addFactory<CKSquareTurtleCpnt>();
	kenv.addFactory<CKDonutTurtleCpnt>();
	kenv.addFactory<CKPyramidalTurtleCpnt>();

	//kenv.addFactory<CKCinematicBloc>();
	//kenv.addFactory<CKCinematicDoor>();
	kenv.addFactory<CKLogicalAnd>();
	kenv.addFactory<CKLogicalOr>();
	kenv.addFactory<CKPlayAnimCinematicBloc>();
	kenv.addFactory<CKPathFindingCinematicBloc>();
	kenv.addFactory<CKFlaggedPathCinematicBloc>();
	kenv.addFactory<CKGroupBlocCinematicBloc>();
	kenv.addFactory<CKAttachObjectsCinematicBloc>();
	kenv.addFactory<CKStreamCinematicBloc>();
	kenv.addFactory<CKRandLogicalDoor>();
	kenv.addFactory<CKParticleCinematicBloc>();
	kenv.addFactory<CKStreamAloneCinematicBloc>();
	kenv.addFactory<CKStreamGroupBlocCinematicBloc>();
	kenv.addFactory<CKManageEventCinematicBloc>();
	kenv.addFactory<CKManagerEventStopCinematicBloc>();
	kenv.addFactory<CKStartDoor>();
	kenv.addFactory<CKSekensorCinematicBloc>();
	kenv.addFactory<CKDisplayPictureCinematicBloc>();
	kenv.addFactory<CKManageCameraCinematicBloc>();
	kenv.addFactory<CKStartEventCinematicBloc>();
	kenv.addFactory<CKSkyCinematicBloc>();
	kenv.addFactory<CKLightningCinematicBloc>();
	kenv.addFactory<CKPlaySoundCinematicBloc>();

	kenv.addFactory<CAnimationDictionary>();
	kenv.addFactory<CKSoundDictionaryID>();

	kenv.addFactory<CKPFGraphTransition>();
	kenv.addFactory<CKBundle>();
	kenv.addFactory<CKSector>();
	kenv.addFactory<CKSpline4>();
	kenv.addFactory<CKChoreoKey>();
	kenv.addFactory<CKPFGraphNode>();
	kenv.addFactory<CKSas>();
	kenv.addFactory<CGround>();
	kenv.addFactory<CDynamicGround>();
	kenv.addFactory<CKFlaggedPath>();
	kenv.addFactory<CKMsgAction>();
	kenv.addFactory<CKChoreography>();
	kenv.addFactory<CKLine>();
	kenv.addFactory<CKSpline4L>();
	kenv.addFactory<CKCinematicScene>();
	kenv.addFactory<CKCinematicSceneData>();
	kenv.addFactory<CKMeshKluster>();
	kenv.addFactory<CKBeaconKluster>();
	kenv.addFactory<CKFlashNode2dFx>();
	kenv.addFactory<CKElectricArcNodeFx>();
	kenv.addFactory<CKQuadNodeFx>();
	kenv.addFactory<CKLightningObjectNodeFx>();
	kenv.addFactory<CKFilterNode2dFx>();
	kenv.addFactory<CKExplosionNodeFx>();
}

void ClassRegister::registerClassesForXXL2PlusPC(KEnvironment& kenv)
{
	// XXL2+ PC

	kenv.addFactory<CKServiceManager>();

	kenv.addFactory<CKServiceLife>();
	kenv.addFactory<CKSrvCollision>();
	kenv.addFactory<CKSrvCamera>();
	kenv.addFactory<CKSrvCinematic>();
	kenv.addFactory<CKSrvPathFinding>();
	kenv.addFactory<CKSrvAvoidance>();
	kenv.addFactory<CKSrvSekensor>();
	kenv.addFactory<CKSrvBeacon>();
	kenv.addFactory<CKSrvShadow>();
	kenv.addFactory<CKSrvProjectiles>();
	kenv.addFactory<CKSrvFx>();
	kenv.addFactory<CKSrvCounter>();
	kenv.addFactory<CKSrvTrigger>();
	kenv.addFactory<CKSrvDetect>();
	kenv.addFactory<CKSrvMusic>();

	kenv.addFactory<CKHkBasicBonus>();
	kenv.addFactory<CKHkCrate>();
	//---
	kenv.addFactory<GameX2::CKHkShoppingArea>();
	kenv.addFactory<GameX2::CKHkBonusSpitter>();
	kenv.addFactory<GameX2::CKHkPressionStone>();
	kenv.addFactory<GameX2::CKHkActivator>();
	kenv.addFactory<GameX2::CKHkDoor>();
	kenv.addFactory<GameX2::CKHkCrumblyZone>();
	//kenv.addFactory<GameX2::CKHkCrate>();
	//kenv.addFactory<GameX2::CKHkBasicBonus>();
	kenv.addFactory<GameX2::CKHkTelepher>();
	kenv.addFactory<GameX2::CKHkTelepherTowed>();
	kenv.addFactory<GameX2::CKHkA2JetPackEnemy>();
	kenv.addFactory<GameX2::CKHkMovableCharacter>();
	kenv.addFactory<GameX2::CKHkA2Hero>();
	kenv.addFactory<GameX2::CKHkLockMachineGun>();
	kenv.addFactory<GameX2::CKHkA2PotionStone>();
	kenv.addFactory<GameX2::CKHkA2Enemy>();
	kenv.addFactory<GameX2::CKHkCrumblyZoneAnimated>();
	kenv.addFactory<GameX2::CKHkDynamicObject>();
	kenv.addFactory<GameX2::CKHkPlatform>();
	kenv.addFactory<GameX2::CKHkWeatherCenter>();
	kenv.addFactory<GameX2::CKHkEnemyTarget>();
	kenv.addFactory<GameX2::CKHkEnemyTargetPit>();
	kenv.addFactory<GameX2::CKHkWaterWork>();
	kenv.addFactory<GameX2::CKHkSwitch>();
	kenv.addFactory<GameX2::CKHkCounter>();
	kenv.addFactory<GameX2::CKHkA2InvincibleEnemy>();
	kenv.addFactory<GameX2::CKHkCorridorEnemy>();
	kenv.addFactory<GameX2::CKHkTelepherAuto>();
	kenv.addFactory<GameX2::CKHkA2ArcherEnemy>();
	kenv.addFactory<GameX2::CKHkPushBomb>();
	kenv.addFactory<GameX2::CKHkMovableBloc>();
	kenv.addFactory<GameX2::CKHkParticlesSequencer>();
	kenv.addFactory<GameX2::CKHkA2TurtleEnemy>();
	kenv.addFactory<GameX2::CKHkCatapult>();
	kenv.addFactory<GameX2::CKHkA2Boss>();
	kenv.addFactory<GameX2::CKHkRollingBarrel>();
	kenv.addFactory<GameX2::CKHkFoldawayBridge>();
	kenv.addFactory<GameX2::CKHkBumper>();
	kenv.addFactory<GameX2::CKHkToll>();
	kenv.addFactory<GameX2::CKHkSlotMachine>();
	kenv.addFactory<GameX2::CKHkA2BossTrap>();
	kenv.addFactory<GameX2::CKHkCheckPoint>();
	kenv.addFactory<GameX2::CKHkA2CrumblyZone>();
	kenv.addFactory<GameX2::CKHkA2MarioEnemy>();
	kenv.addFactory<GameX2::CKHkA2DeathFx>();
	kenv.addFactory<GameX2::CKHkBonusHolder>();
	//---
	kenv.addFactory<GameOG::CKHkLightRay>();
	kenv.addFactory<GameOG::CKHkLightReceptacle>();
	kenv.addFactory<GameOG::CKHkFixedMirror>();
	kenv.addFactory<GameOG::CKHkOrientableMirror>();
	kenv.addFactory<GameOG::CKHkPushStack>();
	kenv.addFactory<GameOG::CKHkPressionStoneGroup>();
	//kenv.addFactory<GameOG::CKHkPressionStone>();
	kenv.addFactory<GameOG::CKCameraBeacon>();
	kenv.addFactory<GameOG::CKHkSavePoint>();
	kenv.addFactory<GameOG::CKHkA3Enemy>();
	kenv.addFactory<GameOG::CKHkBar>();
	kenv.addFactory<GameOG::CKHkPushObstacle>();
	kenv.addFactory<GameOG::CKHkPushStackType1>();
	kenv.addFactory<GameOG::CKHkPushStackType2>();
	kenv.addFactory<GameOG::CKHkButterflyBridge>();
	kenv.addFactory<GameOG::CKHkPushKillObject>();
	kenv.addFactory<GameOG::CKHkTrackerManager>();
	kenv.addFactory<GameOG::CKHkLinkedBeacon>();
	kenv.addFactory<GameOG::CKHkA3BurriedBonus>();
	kenv.addFactory<GameOG::CKHkScrapShower>();
	kenv.addFactory<GameOG::CKHkA3Compass>();
	kenv.addFactory<GameOG::CKHkLedge>();
	kenv.addFactory<GameOG::CKHkHeroBall>();
	kenv.addFactory<GameOG::CKHkHeroBallSpawner>();
	//kenv.addFactory<GameOG::CKHkDoor>();
	//kenv.addFactory<GameOG::CKHkCrumblyZone>();
	kenv.addFactory<GameOG::CKHkHeroActivator>();
	kenv.addFactory<GameOG::CKHkPxObject>();
	//kenv.addFactory<GameOG::CKHkBasicBonus>();
	kenv.addFactory<GameOG::CKHkA3Hero>();
	kenv.addFactory<GameOG::CKHkA3StepPlatformAirlock>();
	kenv.addFactory<GameOG::CKHkA3BirdZone>();
	kenv.addFactory<GameOG::CKHkA3Bird>();
	kenv.addFactory<GameOG::CKHkA3BirdCage>();
	kenv.addFactory<GameOG::CKHkEnemyTarget>();
	kenv.addFactory<GameOG::CKHkA3SoundActivator>();
	kenv.addFactory<GameOG::CKHkCounterWithDisplay>();
	kenv.addFactory<GameOG::CKHkA3PotionSpawner>();
	kenv.addFactory<GameOG::CKHkOlympicGameFrog>();
	kenv.addFactory<GameOG::CKHkFrogBall>();
	kenv.addFactory<GameOG::CKHkCrapombeBall>();
	kenv.addFactory<GameOG::CKHkBonusDistributor>();
	kenv.addFactory<GameOG::CKHkOlympicGameChar>();
	kenv.addFactory<GameOG::CKHkChar>();
	kenv.addFactory<GameOG::CKHkOlympicGameArena>();
	kenv.addFactory<GameOG::CKHkLaunchQuakeCamera>();
	kenv.addFactory<GameOG::CKHkOlympicGameJump>();
	kenv.addFactory<GameOG::CKHkMoss>();
	kenv.addFactory<GameOG::CKHkA3Moss>();
	kenv.addFactory<GameOG::CKHkOlympicGameJavelin>();
	kenv.addFactory<GameOG::CKHkOlympicGameRope>();
	kenv.addFactory<GameOG::CKHkOlympicGameHammer>();
	kenv.addFactory<GameOG::CKHkOlympicGameRace>();
	kenv.addFactory<GameOG::CKHkOlympicGameMusicalFight>();
	kenv.addFactory<GameOG::CKHkA3SeparationManager>();
	kenv.addFactory<GameOG::CKHkA3DDR>();
	kenv.addFactory<GameOG::CKHkA3PassManager>();
	//kenv.addFactory<GameOG::CKHkTelepher>();
	//kenv.addFactory<GameOG::CKHkTelepherTowed>();
	//kenv.addFactory<GameOG::CKHkMovableCharacter>();
	//kenv.addFactory<GameOG::CKHkCrumblyZoneAnimated>();
	//kenv.addFactory<GameOG::CKHkDynamicObject>();
	//kenv.addFactory<GameOG::CKHkPlatform>();
	//kenv.addFactory<GameOG::CKHkWeatherCenter>();
	//kenv.addFactory<GameOG::CKHkParticlesSequencer>();
	//kenv.addFactory<GameOG::CKHkRollingBarrel>();
	//kenv.addFactory<GameOG::CKHkFoldawayBridge>();


	kenv.addFactory<CKGroupRoot>();
	kenv.addFactory<CKGrpSquadX2>();
	kenv.addFactory<CKGrpPoolSquad>();
	kenv.addFactory<CKGrpBonusPool>();
	kenv.addFactory<CKGrpA2BonusPool>();
	kenv.addFactory<CKGrpBonusX2>();
	kenv.addFactory<CKGrpA3BonusPool>();
	//---
	kenv.addFactory<GameX2::CKGrpA2Boss>();
	kenv.addFactory<GameX2::CKGrpMeca>();
	//kenv.addFactory<GameX2::CKGrpSquad>();
	//kenv.addFactory<GameX2::CKGrpPoolSquad>();
	kenv.addFactory<GameX2::CKGrpCrate>();
	//kenv.addFactory<GameX2::CKGrpBonusPool>();
	kenv.addFactory<GameX2::CKGrpA2Hero>();
	kenv.addFactory<GameX2::CKGrpA2LevelPotion>();
	kenv.addFactory<GameX2::CKGrpLevelManager>();
	//kenv.addFactory<GameX2::CKGrpA2BonusPool>();
	//kenv.addFactory<GameX2::CKGrpBonus>();
	kenv.addFactory<GameX2::CKGrpA2Enemy>();
	kenv.addFactory<GameX2::CKGrpFightZone>();
	kenv.addFactory<GameX2::CKGrpMecaLast>();
	kenv.addFactory<GameX2::CKCommonBaseGroup>();
	kenv.addFactory<GameX2::CKFightZoneSectorGrpRoot>();
	kenv.addFactory<GameX2::CKGrpA2FoodBasket>();
	//---
	kenv.addFactory<GameOG::CKGrpStorage>();
	kenv.addFactory<GameOG::CKGrpPushStack>();
	kenv.addFactory<GameOG::CKGrpA3BurriedBonus>();
	//kenv.addFactory<GameOG::CKGrpSquad>();
	//kenv.addFactory<GameOG::CKGrpA3BonusPool>();
	kenv.addFactory<GameOG::CKGrpA3Hero>();
	kenv.addFactory<GameOG::CKGrpA3Meca>();
	kenv.addFactory<GameOG::CKGrpA3BirdCage>();
	kenv.addFactory<GameOG::CKGrpA3LevelPotion>();
	//kenv.addFactory<GameOG::CKGrpPoolSquad>();
	//kenv.addFactory<GameOG::CKGrpBonusPool>();
	//kenv.addFactory<GameOG::CKGrpLevelManager>();
	//kenv.addFactory<GameOG::CKGrpBonus>();
	//kenv.addFactory<GameOG::CKGrpA3Enemy>();
	//kenv.addFactory<GameOG::CKGrpFightZone>();
	//kenv.addFactory<GameOG::CKGrpMecaLast>();
	//kenv.addFactory<GameOG::CKCommonBaseGroup>();
	//kenv.addFactory<GameOG::CKFightZoneSectorGrpRoot>();

	kenv.addFactory<CKCrateCpnt>();
	//
	kenv.addFactory<GameX2::CKCorridorEnemyCpnt>();
	kenv.addFactory<GameX2::CKTargetCpnt>();
	kenv.addFactory<GameX2::CKCrumblyZoneCpnt>();
	kenv.addFactory<GameX2::CKCatapultCpnt>();
	kenv.addFactory<GameX2::CKShadowCpnt>();
	kenv.addFactory<GameX2::CKBonusCpnt>();
	kenv.addFactory<GameX2::CKA2EnemyCpnt>();
	kenv.addFactory<GameX2::CKA2JetPackEnemyCpnt>();
	kenv.addFactory<GameX2::CKWeatherPreset>();
	kenv.addFactory<GameX2::CKA2PotionStoneCpnt>();
	kenv.addFactory<GameX2::CKMecaCpnt>();
	kenv.addFactory<GameX2::CKBonusSpitterCpnt>();
	kenv.addFactory<GameX2::CKA2InvincibleEnemyCpnt>();
	kenv.addFactory<GameX2::CKA2ArcherEnemyCpnt>();
	kenv.addFactory<GameX2::CKPushBombCpnt>();
	kenv.addFactory<GameX2::CKPushCpnt>();
	kenv.addFactory<GameX2::CKParticlesSequencerCpnt>();
	kenv.addFactory<GameX2::CKMovableBlocCpnt>();
	kenv.addFactory<GameX2::CKRollingBarrelCpnt>();
	kenv.addFactory<GameX2::CKBumperCpnt>();
	kenv.addFactory<GameX2::CKA2ComboTwisterData>();
	kenv.addFactory<GameX2::CKA2ComboMenhirRainData>();
	kenv.addFactory<GameX2::CKSMCpnt>();
	kenv.addFactory<GameX2::CKA2ComboLightningData>();
	kenv.addFactory<GameX2::CKA2MarioEnemyCpnt>();
	kenv.addFactory<GameX2::CKTelepherTowedCpnt>();
	kenv.addFactory<GameX2::CKBonusHolderCpnt>();

	kenv.addFactory<CKCamera>();
	kenv.addFactory<CKCameraRigidTrack>();
	//kenv.addFactory<CKCameraClassicTrack>();
	kenv.addFactory<CKCameraPathTrack>();
	kenv.addFactory<CKCameraFixTrack>();
	kenv.addFactory<CKCameraAxisTrack>();
	//kenv.addFactory<CKCameraSpyTrack>();
	kenv.addFactory<CKCameraPassivePathTrack>();
	kenv.addFactory<CKCameraBalistTrack>();
	kenv.addFactory<CKCameraClassicTrack2>();
	kenv.addFactory<CKCameraFirstPersonTrack>();

	kenv.addFactory<CKLogicalAnd>();
	kenv.addFactory<CKLogicalOr>();
	kenv.addFactory<CKPlayAnimCinematicBloc>();
	kenv.addFactory<CKPathFindingCinematicBloc>();
	kenv.addFactory<CKFlaggedPathCinematicBloc>();
	kenv.addFactory<CKGroupBlocCinematicBloc>();
	kenv.addFactory<CKAttachObjectsCinematicBloc>();
	kenv.addFactory<CKParticleCinematicBloc>();
	kenv.addFactory<CKStartDoor>();
	kenv.addFactory<CKSekensorCinematicBloc>();
	kenv.addFactory<CKDisplayPictureCinematicBloc>();
	kenv.addFactory<CKManageCameraCinematicBloc>();
	kenv.addFactory<CKStartEventCinematicBloc>();
	kenv.addFactory<CKLightningCinematicBloc>();
	kenv.addFactory<CKPlaySoundCinematicBloc>();
	kenv.addFactory<CKPauseCinematicBloc>();
	kenv.addFactory<CKTeleportCinematicBloc>();
	kenv.addFactory<CKEndDoor>();
	kenv.addFactory<CKPlayVideoCinematicBloc>();
	kenv.addFactory<CKFlashUICinematicBloc>();
	kenv.addFactory<CKLockUnlockCinematicBloc>();

	kenv.addFactory<CAnimationDictionary>();
	kenv.addFactory<CTextureDictionary>();
	kenv.addFactory<CKSoundDictionary>();
	kenv.addFactory<CKSoundDictionaryID>();

	kenv.addFactory<CKParticleGeometry>();
	kenv.addFactory<CKGeometry>();
	kenv.addFactory<CKSkinGeometry>();

	kenv.addFactory<CSGRootNode>();
	kenv.addFactory<CSGSectorRoot>();
	kenv.addFactory<CNode>();
	kenv.addFactory<CKDynBSphereProjectile>();
	kenv.addFactory<CSGLeaf>();
	kenv.addFactory<CSGBranch>();
	kenv.addFactory<CGlowNodeFx>();
	kenv.addFactory<CClone>();
	kenv.addFactory<CKBoundingSphere>();
	kenv.addFactory<CKDynamicBoundingSphere>();
	kenv.addFactory<CKAABB>();
	kenv.addFactory<CKOBB>();
	kenv.addFactory<CParticlesNodeFx>();
	kenv.addFactory<CAnimatedNode>();
	kenv.addFactory<CAnimatedClone>();
	kenv.addFactory<CKAACylinder>();
	kenv.addFactory<CSkyNodeFx>();
	kenv.addFactory<CFogBoxNodeFx>();
	kenv.addFactory<CTrailNodeFx>();
	kenv.addFactory<CSGLight>();
	kenv.addFactory<CCloudsNodeFx>();
	kenv.addFactory<CZoneNode>();
	kenv.addFactory<CSpawnNode>();
	kenv.addFactory<CSpawnAnimatedNode>();

	kenv.addFactory<CSGAnchor>();
	kenv.addFactory<CSGBkgRootNode>();

	kenv.addFactory<CKPFGraphTransition>();
	kenv.addFactory<CKBundle>();
	kenv.addFactory<CKSector>();
	kenv.addFactory<CKLevel>();
	kenv.addFactory<CKCameraSector>();
	kenv.addFactory<CKCoreManager>();
	kenv.addFactory<CKSpline4>();
	kenv.addFactory<CKChoreoKey>();
	kenv.addFactory<CKPFGraphNode>();
	kenv.addFactory<CKSas>();
	kenv.addFactory<CGround>();
	kenv.addFactory<CDynamicGround>();
	kenv.addFactory<CKFlaggedPath>();
	kenv.addFactory<CKChoreography>();
	kenv.addFactory<CKLine>();
	kenv.addFactory<CKSpline4L>();
	kenv.addFactory<CKCinematicScene>();
	kenv.addFactory<CKCinematicSceneData>();
	kenv.addFactory<CLocManager>();
	kenv.addFactory<CKMeshKluster>();
	kenv.addFactory<CKBeaconKluster>();
	kenv.addFactory<CKProjectileTypeScrap>();
	kenv.addFactory<CKProjectileTypeBallisticPFX>();
	kenv.addFactory<CKTimeCounter>();
	kenv.addFactory<CKIntegerCounter>();
	kenv.addFactory<CKCombiner>();
	kenv.addFactory<CKComparator>();
	kenv.addFactory<CKComparedData>();
	kenv.addFactory<CKTrigger>();
	kenv.addFactory<CKDetectorBase>();
	kenv.addFactory<CKSectorDetector>();
	kenv.addFactory<CMultiGeometry>();
	kenv.addFactory<CKDetectorEvent>();
	kenv.addFactory<CKDetectedMovable>();
	kenv.addFactory<CKTriggerDomain>();
	kenv.addFactory<CKSound>();
	kenv.addFactory<CSGHotSpot>();
	kenv.addFactory<CMaterial>();
	kenv.addFactory<CKMusicPlayList>();
	kenv.addFactory<CKDetectorMusic>();
	kenv.addFactory<CMultiGeometryBasic>();
	kenv.addFactory<CKCameraQuakeDatas>();
	kenv.addFactory<CKA2GameState>();
	kenv.addFactory<CKCameraFogDatas>();
	kenv.addFactory<CKA3GameState>();
	kenv.addFactory<CKTriggerSynchro>();
	kenv.addFactory<CKStreamObject>();
	kenv.addFactory<CKStreamWave>();
	kenv.addFactory<CKDisplayBox>();
	// FxDatas
	kenv.addFactory<CKScreenColorFxData>();
	kenv.addFactory<CKFlashFxData>();
	kenv.addFactory<CKElectricArcFxData>();
	kenv.addFactory<CKExplosionFxData>();
	kenv.addFactory<CKShockWaveFxData>();
	kenv.addFactory<CKFireBallFxData>();
	kenv.addFactory<CKDistortionFxData>();
	kenv.addFactory<CKWaterWaveFxData>();
	kenv.addFactory<CKWaterSplashFxData>();
	kenv.addFactory<CKPowerBallFxData>();
	//
	kenv.addFactory<CKFlashNode2dFx>();
	kenv.addFactory<CKElectricArcNodeFx>();
	kenv.addFactory<CKQuadNodeFx>();
	kenv.addFactory<CKLightningObjectNodeFx>();
	kenv.addFactory<CKFilterNode2dFx>();
	kenv.addFactory<CKExplosionNodeFx>();


	kenv.addFactory<CCloneManager>();
	kenv.addFactory<CAnimationManager>();
	kenv.addFactory<CBillboard2d>();
	kenv.addFactory<CManager2d>();
	kenv.addFactory<CSectorAnimation>();
	kenv.addFactory<CLightManager>();
	kenv.addFactory<CLightSet>();
}

void ClassRegister::registerClassesForXXL2PlusConsole(KEnvironment& kenv)
{
	// XXL2+ console

	kenv.addFactory<CKServiceManager>();
	
	kenv.addFactory<CKServiceLife>();
	kenv.addFactory<CKSrvCollision>();
	kenv.addFactory<CKSrvCinematic>();
	kenv.addFactory<CKSrvPathFinding>();
	kenv.addFactory<CKSrvAvoidance>();
	kenv.addFactory<CKSrvSekensor>();
	kenv.addFactory<CKSrvBeacon>();
	kenv.addFactory<CKSrvProjectiles>();
	kenv.addFactory<CKSrvCounter>();
	kenv.addFactory<CKSrvTrigger>();
	kenv.addFactory<CKSrvDetect>();
	kenv.addFactory<CKSrvMusic>();

	//kenv.addFactory<CKHkBasicBonus>();

	//kenv.addFactory<CKGrpSquadX2>();
	//kenv.addFactory<CKGrpPoolSquad>();
	//kenv.addFactory<CKGrpA2BonusPool>();

	//kenv.addFactory<CKCrateCpnt>();

	kenv.addFactory<CKLogicalAnd>();
	kenv.addFactory<CKLogicalOr>();
	kenv.addFactory<CKPlayAnimCinematicBloc>();
	kenv.addFactory<CKPathFindingCinematicBloc>();
	kenv.addFactory<CKFlaggedPathCinematicBloc>();
	kenv.addFactory<CKGroupBlocCinematicBloc>();
	kenv.addFactory<CKAttachObjectsCinematicBloc>();
	kenv.addFactory<CKParticleCinematicBloc>();
	kenv.addFactory<CKStartDoor>();
	kenv.addFactory<CKSekensorCinematicBloc>();
	kenv.addFactory<CKDisplayPictureCinematicBloc>();
	kenv.addFactory<CKManageCameraCinematicBloc>();
	kenv.addFactory<CKStartEventCinematicBloc>();
	kenv.addFactory<CKLightningCinematicBloc>();
	kenv.addFactory<CKPlaySoundCinematicBloc>();
	kenv.addFactory<CKPauseCinematicBloc>();
	kenv.addFactory<CKTeleportCinematicBloc>();
	kenv.addFactory<CKEndDoor>();
	kenv.addFactory<CKPlayVideoCinematicBloc>();
	kenv.addFactory<CKFlashUICinematicBloc>();
	kenv.addFactory<CKLockUnlockCinematicBloc>();

	kenv.addFactory<CAnimationDictionary>();
	kenv.addFactory<CTextureDictionary>();
	//kenv.addFactory<CKSoundDictionary>();

	kenv.addFactory<CKParticleGeometry>();
	kenv.addFactory<CKGeometry>();
	kenv.addFactory<CKSkinGeometry>();

	kenv.addFactory<CSGRootNode>();
	kenv.addFactory<CSGSectorRoot>();
	kenv.addFactory<CNode>();
	kenv.addFactory<CKDynBSphereProjectile>();
	kenv.addFactory<CSGLeaf>();
	kenv.addFactory<CSGBranch>();
	kenv.addFactory<CGlowNodeFx>();
	kenv.addFactory<CClone>();
	kenv.addFactory<CKBoundingSphere>();
	kenv.addFactory<CKDynamicBoundingSphere>();
	kenv.addFactory<CKAABB>();
	kenv.addFactory<CKOBB>();
	kenv.addFactory<CParticlesNodeFx>();
	kenv.addFactory<CAnimatedNode>();
	kenv.addFactory<CAnimatedClone>();
	kenv.addFactory<CKAACylinder>();
	kenv.addFactory<CSkyNodeFx>();
	//kenv.addFactory<CFogBoxNodeFx>();
	//kenv.addFactory<CTrailNodeFx>();
	kenv.addFactory<CSGLight>();
	kenv.addFactory<CCloudsNodeFx>();
	kenv.addFactory<CZoneNode>();
	kenv.addFactory<CSpawnNode>();
	kenv.addFactory<CSpawnAnimatedNode>();
	//
	kenv.addFactory<CSGAnchor>();
	kenv.addFactory<CSGBkgRootNode>();
	//
	kenv.addFactory<CKPartlyUnknown<CNodeFx, 26>>();
	kenv.addFactory<CKPartlyUnknown<CNodeFx, 27>>();
	kenv.addFactory<CKPartlyUnknown<CNode, 28>>();

	kenv.addFactory<CKPFGraphTransition>();
	kenv.addFactory<CKBundle>();
	kenv.addFactory<CKSector>();
	kenv.addFactory<CKLevel>();
	kenv.addFactory<CKCameraSector>();
	kenv.addFactory<CKCoreManager>();
	kenv.addFactory<CKSpline4>();
	kenv.addFactory<CKChoreoKey>();
	kenv.addFactory<CKPFGraphNode>();
	kenv.addFactory<CKSas>();
	kenv.addFactory<CGround>();
	kenv.addFactory<CDynamicGround>();
	kenv.addFactory<CKFlaggedPath>();
	kenv.addFactory<CKChoreography>();
	kenv.addFactory<CKLine>();
	kenv.addFactory<CKSpline4L>();
	kenv.addFactory<CKCinematicScene>();
	kenv.addFactory<CKCinematicSceneData>();
	kenv.addFactory<CLocManager>();
	kenv.addFactory<CKMeshKluster>();
	kenv.addFactory<CKBeaconKluster>();
	kenv.addFactory<CKTimeCounter>();
	kenv.addFactory<CKIntegerCounter>();
	kenv.addFactory<CKCombiner>();
	kenv.addFactory<CKComparator>();
	kenv.addFactory<CKComparedData>();
	kenv.addFactory<CKTrigger>();
	kenv.addFactory<CKDetectorBase>();
	kenv.addFactory<CKSectorDetector>();
	kenv.addFactory<CMultiGeometry>();
	kenv.addFactory<CKDetectorEvent>();
	kenv.addFactory<CKDetectedMovable>();
	kenv.addFactory<CKTriggerDomain>();
	kenv.addFactory<CSGHotSpot>();
	//kenv.addFactory<CMaterial>();
	//kenv.addFactory<CKMusicPlayList>();
	kenv.addFactory<CKDetectorMusic>();
	kenv.addFactory<CMultiGeometryBasic>();
	kenv.addFactory<CKA2GameState>();
	kenv.addFactory<CKA3GameState>();
	kenv.addFactory<CKTriggerSynchro>();
	//kenv.addFactory<CKStreamObject>();
	kenv.addFactory<CKDisplayBox>();

	kenv.addFactory<CCloneManager>();
	//kenv.addFactory<CAnimationManager>();
	kenv.addFactory<CBillboard2d>();
	kenv.addFactory<CManager2d>();
	//kenv.addFactory<CSectorAnimation>();
	kenv.addFactory<CLightManager>();
	kenv.addFactory<CLightSet>();
}

void ClassRegister::registerClasses(KEnvironment& kenv, int gameVersion, int gamePlatform, bool isRemaster)
{
	if (gameVersion <= KEnvironment::KVERSION_XXL1 && (gamePlatform == KEnvironment::PLATFORM_PC || gamePlatform == KEnvironment::PLATFORM_GCN)) {
		registerClassesForXXL1PC(kenv);
	}
	else if (gameVersion <= KEnvironment::KVERSION_XXL1) {
		registerClassesForXXL1Console(kenv);
	}
	else if (gamePlatform == KEnvironment::PLATFORM_PC) {
		registerClassesForXXL2PlusPC(kenv);
	}
	else {
		registerClassesForXXL2PlusConsole(kenv);
		if (gameVersion <= KEnvironment::KVERSION_OLYMPIC) {
			kenv.addFactory<CKHkBasicBonus>();
			kenv.addFactory<CKGrpSquadX2>();
			kenv.addFactory<CKGrpPoolSquad>();
			kenv.addFactory<CKGrpA2BonusPool>();
			kenv.addFactory<CKGrpBonusX2>();
			kenv.addFactory<CKGrpA3BonusPool>();
			kenv.addFactory<CKCrateCpnt>();
		}
		if (gamePlatform == KEnvironment::PLATFORM_WII || gamePlatform == KEnvironment::PLATFORM_X360) {
			// ...
		}
	}
}
