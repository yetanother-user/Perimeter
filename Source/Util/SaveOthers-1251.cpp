// TODO: change encoding to utf-8

#include "StdAfx.h"
#include "Save.h"
#include "EditArchive.h"
#include "XPrmArchive.h"
#include "BinaryArchive.h"

BEGIN_ENUM_DESCRIPTOR(Difficulty, "Difficulty")
REGISTER_ENUM(DIFFICULTY_EASY, "������")
REGISTER_ENUM(DIFFICULTY_NORMAL, "����������")
REGISTER_ENUM(DIFFICULTY_HARD, "������� ")
REGISTER_ENUM(DIFFICULTY_MAX, "DIFFICULTY_MAX")
END_ENUM_DESCRIPTOR(Difficulty)

BEGIN_ENUM_DESCRIPTOR(terBelligerent, "������� �������")
REGISTER_ENUM(BELLIGERENT_NONE, "�����")
REGISTER_ENUM(BELLIGERENT_EXODUS0, "��������� 1")
REGISTER_ENUM(BELLIGERENT_EXODUS1, "��������� 2")
REGISTER_ENUM(BELLIGERENT_HARKBACKHOOD0, "����������� 1")
REGISTER_ENUM(BELLIGERENT_HARKBACKHOOD1, "����������� 2")
REGISTER_ENUM(BELLIGERENT_EMPIRE0, "������� 1")
REGISTER_ENUM(BELLIGERENT_EMPIRE1, "������� 2")
REGISTER_ENUM(BELLIGERENT_EMPIRE_VICE, "��������� ���������")
REGISTER_ENUM(BELLIGERENT_EXODUS2, "����� ��������� 1")
REGISTER_ENUM(BELLIGERENT_EXODUS3, "����� ��������� 2")
REGISTER_ENUM(BELLIGERENT_EXODUS4, "����� ��������� 3")
REGISTER_ENUM(BELLIGERENT_EMPIRE2, "����� ��������� ��������� 1")
REGISTER_ENUM(BELLIGERENT_EMPIRE3, "����� ��������� ��������� 2")
REGISTER_ENUM(BELLIGERENT_EMPIRE4, "����� ��������� ��������� 3")
END_ENUM_DESCRIPTOR(terBelligerent)

BEGIN_ENUM_DESCRIPTOR(terUnitAttributeID, "������������� �����")
REGISTER_ENUM(UNIT_ATTRIBUTE_ANY, "�����")
REGISTER_ENUM(UNIT_ATTRIBUTE_NONE, "����� ")
REGISTER_ENUM(UNIT_ATTRIBUTE_CORE, "����")
REGISTER_ENUM(UNIT_ATTRIBUTE_RELAY, "�����������")
REGISTER_ENUM(UNIT_ATTRIBUTE_COLLECTOR, "���������")
REGISTER_ENUM(UNIT_ATTRIBUTE_SOLDIER_PLANT, "����� �� ������������ ������")
REGISTER_ENUM(UNIT_ATTRIBUTE_OFFICER_PLANT, "����� �� ������������ ��������")
REGISTER_ENUM(UNIT_ATTRIBUTE_TECHNIC_PLANT, "����� �� ������������ ��������")
REGISTER_ENUM(UNIT_ATTRIBUTE_COMMANDER, "��������� �����")
REGISTER_ENUM(UNIT_ATTRIBUTE_LASER_STATION1, "����������� ��������� ������ ������� 1")
REGISTER_ENUM(UNIT_ATTRIBUTE_ROCKET_STATION1, "����������� ��������� ������ ������� 1")
REGISTER_ENUM(UNIT_ATTRIBUTE_BOMB_STATION1, "����������� ��������� ������ ������� 1")
REGISTER_ENUM(UNIT_ATTRIBUTE_FLY_STATION1, "����������� ������ ���������� ������� 1")
REGISTER_ENUM(UNIT_ATTRIBUTE_SUBTERRA_STATION1, "����������� ��������� ���������� ������� 1")
REGISTER_ENUM(UNIT_ATTRIBUTE_EXODUS_STATION1, "����������� ���������� ������� 1")
REGISTER_ENUM(UNIT_ATTRIBUTE_EMPIRE_STATION1, "����������� ������� ������� 1")
REGISTER_ENUM(UNIT_ATTRIBUTE_HARKBACK_STATION1, "����������� �������������� ������� 1")
REGISTER_ENUM(UNIT_ATTRIBUTE_LASER_STATION2, "����������� ��������� ������ ������� 2")
REGISTER_ENUM(UNIT_ATTRIBUTE_ROCKET_STATION2, "����������� ��������� ������ ������� 2")
REGISTER_ENUM(UNIT_ATTRIBUTE_BOMB_STATION2, "����������� ��������� ������ ������� 2")
REGISTER_ENUM(UNIT_ATTRIBUTE_FLY_STATION2, "����������� ������ ���������� ������� 2")
REGISTER_ENUM(UNIT_ATTRIBUTE_SUBTERRA_STATION2, "����������� ��������� ���������� ������� 2")
REGISTER_ENUM(UNIT_ATTRIBUTE_EXODUS_STATION2, "����������� ���������� ������� 2")
REGISTER_ENUM(UNIT_ATTRIBUTE_EMPIRE_STATION2, "����������� ������� ������� 2")
REGISTER_ENUM(UNIT_ATTRIBUTE_HARKBACK_STATION2, "����������� �������������� ������� 2")
REGISTER_ENUM(UNIT_ATTRIBUTE_LASER_STATION3, "����������� ��������� ������ ������� 3")
REGISTER_ENUM(UNIT_ATTRIBUTE_ROCKET_STATION3, "����������� ��������� ������ ������� 3")
REGISTER_ENUM(UNIT_ATTRIBUTE_BOMB_STATION3, "����������� ��������� ������ ������� 3")
REGISTER_ENUM(UNIT_ATTRIBUTE_EXODUS_STATION3, "����������� ���������� ������� 3")
REGISTER_ENUM(UNIT_ATTRIBUTE_EMPIRE_STATION3, "����������� ������� ������� 3")
REGISTER_ENUM(UNIT_ATTRIBUTE_HARKBACK_STATION3, "����������� �������������� ������� 3")
//REGISTER_ENUM(UNIT_ATTRIBUTE_ELECTRO_STATION1, "����������� �������������� ������ ������� 1")
//REGISTER_ENUM(UNIT_ATTRIBUTE_ELECTRO_STATION2, "����������� �������������� ������ ������� 2")
//REGISTER_ENUM(UNIT_ATTRIBUTE_ELECTRO_STATION3, "����������� �������������� ������ ������� 3")
REGISTER_ENUM(UNIT_ATTRIBUTE_CORRIDOR_ALPHA, "������� �����")
REGISTER_ENUM(UNIT_ATTRIBUTE_CORRIDOR_OMEGA, "������� �����")
REGISTER_ENUM(UNIT_ATTRIBUTE_STATIC_BOMB, "��������-�����")
REGISTER_ENUM(UNIT_ATTRIBUTE_LASER_CANNON, "������������ �������� �����")
//REGISTER_ENUM(UNIT_ATTRIBUTE_ELECTRO_CANNON, "������������ ������������� �����")
REGISTER_ENUM(UNIT_ATTRIBUTE_ROCKET_LAUNCHER, "������������ �������� �����")
REGISTER_ENUM(UNIT_ATTRIBUTE_GUN_HOWITZER, "������������ �������")
REGISTER_ENUM(UNIT_ATTRIBUTE_GUN_SUBCHASER, "������������ ��������� ������ ��������� ������")
REGISTER_ENUM(UNIT_ATTRIBUTE_GUN_SCUM_DISRUPTOR, "������������ ��������� ��� ������� ���������� �����������")
REGISTER_ENUM(UNIT_ATTRIBUTE_GUN_BALLISTIC, "������������ ��������� ��� ������� �������������� ������")
REGISTER_ENUM(UNIT_ATTRIBUTE_GUN_FILTH_NAVIGATOR, "������������ ��������� ��� ������ ������� � �������� �����")
REGISTER_ENUM(UNIT_ATTRIBUTE_SCUM_SPOT, "���� ����")
REGISTER_ENUM(UNIT_ATTRIBUTE_SCUM_SPOT2, "���� ���� 2")
REGISTER_ENUM(UNIT_ATTRIBUTE_SCUM_SPOT3, "���� ���� 3")
REGISTER_ENUM(UNIT_ATTRIBUTE_SCUM_SPOT4, "���� ���� 4")
REGISTER_ENUM(UNIT_ATTRIBUTE_BLACK_HOLE, "������ ����")
REGISTER_ENUM(UNIT_ATTRIBUTE_STRUCTURE_MAX, "--------------------------")
REGISTER_ENUM(UNIT_ATTRIBUTE_FRAME, "�����")
REGISTER_ENUM(UNIT_ATTRIBUTE_TERRAIN_MASTER, "��������")
REGISTER_ENUM(UNIT_ATTRIBUTE_TRUCK, "����")
REGISTER_ENUM(UNIT_ATTRIBUTE_BUILD_MASTER, "������")
REGISTER_ENUM(UNIT_ATTRIBUTE_BUILDING_BLOCK, "����")
REGISTER_ENUM(UNIT_ATTRIBUTE_SOLDIER, "������� ������")
REGISTER_ENUM(UNIT_ATTRIBUTE_OFFICER, "������� ������")
REGISTER_ENUM(UNIT_ATTRIBUTE_TECHNIC, "������� ������")
REGISTER_ENUM(UNIT_ATTRIBUTE_SNIPER, "�������")
REGISTER_ENUM(UNIT_ATTRIBUTE_ROCKER, "�����")
REGISTER_ENUM(UNIT_ATTRIBUTE_MORTAR, "������")
REGISTER_ENUM(UNIT_ATTRIBUTE_CEPTOR, "������")
REGISTER_ENUM(UNIT_ATTRIBUTE_GYROID, "������")
REGISTER_ENUM(UNIT_ATTRIBUTE_WARGON, "������")
REGISTER_ENUM(UNIT_ATTRIBUTE_BOMBER, "������")
REGISTER_ENUM(UNIT_ATTRIBUTE_R_PROJECTOR, "�-��������")
REGISTER_ENUM(UNIT_ATTRIBUTE_UNSEEN, "���������")
REGISTER_ENUM(UNIT_ATTRIBUTE_STRAFER, "��������")
REGISTER_ENUM(UNIT_ATTRIBUTE_DISINTEGRATOR, "�������������")
REGISTER_ENUM(UNIT_ATTRIBUTE_SCUM_SPLITTER, "��������")
REGISTER_ENUM(UNIT_ATTRIBUTE_SCUM_TWISTER, "�������")
REGISTER_ENUM(UNIT_ATTRIBUTE_SCUM_HEATER, "������")
REGISTER_ENUM(UNIT_ATTRIBUTE_SCUM_THROWER, "��������")
REGISTER_ENUM(UNIT_ATTRIBUTE_EXTIRPATOR, "�����������")
REGISTER_ENUM(UNIT_ATTRIBUTE_LEECH, "�����")
REGISTER_ENUM(UNIT_ATTRIBUTE_LEAMO, "����")
REGISTER_ENUM(UNIT_ATTRIBUTE_SCUMER, "������")
REGISTER_ENUM(UNIT_ATTRIBUTE_DIGGER, "������")
REGISTER_ENUM(UNIT_ATTRIBUTE_PIERCER, "������")
REGISTER_ENUM(UNIT_ATTRIBUTE_FILTH_SPOT0, "�����-������� �������")
REGISTER_ENUM(UNIT_ATTRIBUTE_FILTH_SPOT1, "�����-������� ����")
REGISTER_ENUM(UNIT_ATTRIBUTE_FILTH_SPOT2, "�����-������� ���")
REGISTER_ENUM(UNIT_ATTRIBUTE_FILTH_SPOT3, "�����-������� ������")
//REGISTER_ENUM(UNIT_ATTRIBUTE_EFLAIR, "Eflair")
//REGISTER_ENUM(UNIT_ATTRIBUTE_IMPALER, "Impaler")
//REGISTER_ENUM(UNIT_ATTRIBUTE_CONDUCTOR,	"Conductor")
REGISTER_ENUM(UNIT_ATTRIBUTE_LEGIONARY_MAX, "--------------------------")
REGISTER_ENUM(UNIT_ATTRIBUTE_SQUAD, "�����")
REGISTER_ENUM(UNIT_ATTRIBUTE_FILTH_ANTS, "������� �������")
REGISTER_ENUM(UNIT_ATTRIBUTE_FILTH_WASP, "������� ���")
REGISTER_ENUM(UNIT_ATTRIBUTE_FILTH_WASP_EYE, "����� ��� � ���")
REGISTER_ENUM(UNIT_ATTRIBUTE_FILTH_DRAGON_HEAD, "������� ���� (������)")
REGISTER_ENUM(UNIT_ATTRIBUTE_FILTH_DRAGON_BODY, "������� ���� (����)")
REGISTER_ENUM(UNIT_ATTRIBUTE_FILTH_DRAGON_TAIL, "������� ���� (�����)")
REGISTER_ENUM(UNIT_ATTRIBUTE_FILTH_GHOST, "������� ����������")
REGISTER_ENUM(UNIT_ATTRIBUTE_FILTH_EYE, "������� ����")
REGISTER_ENUM(UNIT_ATTRIBUTE_FILTH_CROW, "������� �����")
REGISTER_ENUM(UNIT_ATTRIBUTE_FILTH_DAEMON, "������� �����")
REGISTER_ENUM(UNIT_ATTRIBUTE_FILTH_RAT, "������� �����")
REGISTER_ENUM(UNIT_ATTRIBUTE_FILTH_WORM, "������� �����")
REGISTER_ENUM(UNIT_ATTRIBUTE_FILTH_SHARK, "UNIT_ATTRIBUTE_FILTH_SHARK")
REGISTER_ENUM(UNIT_ATTRIBUTE_FILTH_VOLCANO, "UNIT_ATTRIBUTE_FILTH_VOLCANO")
REGISTER_ENUM(UNIT_ATTRIBUTE_FILTH_VOLCANO_SCUM_DISRUPTOR, "UNIT_ATTRIBUTE_FILTH_VOLCANO_SCUM_DISRUPTOR")
REGISTER_ENUM(UNIT_ATTRIBUTE_FILTH_ANTS2, "UNIT_ATTRIBUTE_FILTH_ANTS2")
REGISTER_ENUM(UNIT_ATTRIBUTE_FILTH_SNAKE, "UNIT_ATTRIBUTE_FILTH_SNAKE")
REGISTER_ENUM(UNIT_ATTRIBUTE_FILTH_DRAGON_HEAD2, "UNIT_ATTRIBUTE_FILTH_DRAGON_HEAD2")
REGISTER_ENUM(UNIT_ATTRIBUTE_FILTH_DRAGON_BODY2, "UNIT_ATTRIBUTE_FILTH_DRAGON_BODY2")
REGISTER_ENUM(UNIT_ATTRIBUTE_FILTH_DRAGON_TAIL2, "UNIT_ATTRIBUTE_FILTH_DRAGON_TAIL2")

REGISTER_ENUM(UNIT_ATTRIBUTE_FILTH_A_ANTS,"UNIT_ATTRIBUTE_FILTH_A_ANTS")
REGISTER_ENUM(UNIT_ATTRIBUTE_FILTH_A_CROW,"UNIT_ATTRIBUTE_FILTH_A_CROW")
REGISTER_ENUM(UNIT_ATTRIBUTE_FILTH_A_DAEMON,"UNIT_ATTRIBUTE_FILTH_A_DAEMON")
REGISTER_ENUM(UNIT_ATTRIBUTE_FILTH_A_DRAGON_HEAD,"UNIT_ATTRIBUTE_FILTH_A_DRAGON_HEAD")
REGISTER_ENUM(UNIT_ATTRIBUTE_FILTH_A_DRAGON_BODY,"UNIT_ATTRIBUTE_FILTH_A_DRAGON_BODY")
REGISTER_ENUM(UNIT_ATTRIBUTE_FILTH_A_DRAGON_TAIL,"UNIT_ATTRIBUTE_FILTH_A_DRAGON_TAIL")
REGISTER_ENUM(UNIT_ATTRIBUTE_FILTH_A_EYE,"UNIT_ATTRIBUTE_FILTH_A_EYE")
REGISTER_ENUM(UNIT_ATTRIBUTE_FILTH_A_RAT,"UNIT_ATTRIBUTE_FILTH_A_RAT")
REGISTER_ENUM(UNIT_ATTRIBUTE_FILTH_A_SPIDER,"UNIT_ATTRIBUTE_FILTH_A_SPIDER")
REGISTER_ENUM(UNIT_ATTRIBUTE_FILTH_A_WASP,"UNIT_ATTRIBUTE_FILTH_A_WASP")
REGISTER_ENUM(UNIT_ATTRIBUTE_FILTH_A_WORM,"UNIT_ATTRIBUTE_FILTH_A_WORM")

REGISTER_ENUM(UNIT_ATTRIBUTE_CEPTOR_MISSILE, "UNIT_ATTRIBUTE_CEPTOR_MISSILE")
REGISTER_ENUM(UNIT_ATTRIBUTE_PROJECTOR_MISSILE, "UNIT_ATTRIBUTE_PROJECTOR_MISSILE")
REGISTER_ENUM(UNIT_ATTRIBUTE_ROCKER_MISSILE, "UNIT_ATTRIBUTE_ROCKER_MISSILE")
REGISTER_ENUM(UNIT_ATTRIBUTE_GUN_ROCKET_MISSILE, "UNIT_ATTRIBUTE_GUN_ROCKET_MISSILE")
REGISTER_ENUM(UNIT_ATTRIBUTE_BALLISTIC_MISSILE, "UNIT_ATTRIBUTE_BALLISTIC_MISSILE")
REGISTER_ENUM(UNIT_ATTRIBUTE_WARGON_BULLET, "UNIT_ATTRIBUTE_WARGON_BULLET")
REGISTER_ENUM(UNIT_ATTRIBUTE_MORTAR_BULLET, "UNIT_ATTRIBUTE_MORTAR_BULLET")
REGISTER_ENUM(UNIT_ATTRIBUTE_GUN_HOWITZER_BULLET, "UNIT_ATTRIBUTE_GUN_HOWITZER_BULLET")
REGISTER_ENUM(UNIT_ATTRIBUTE_SCUM_THROWER_BULLET, "UNIT_ATTRIBUTE_SCUM_THROWER_BULLET")
REGISTER_ENUM(UNIT_ATTRIBUTE_SOLDIER_BULLET, "UNIT_ATTRIBUTE_SOLDIER_BULLET")
REGISTER_ENUM(UNIT_ATTRIBUTE_STRAFER_BULLET, "UNIT_ATTRIBUTE_STRAFER_BULLET")
REGISTER_ENUM(UNIT_ATTRIBUTE_EXTIRPATOR_BULLET, "UNIT_ATTRIBUTE_EXTIRPATOR_BULLET")
REGISTER_ENUM(UNIT_ATTRIBUTE_PIERCER_BULLET, "UNIT_ATTRIBUTE_PIERCER_BULLET")
REGISTER_ENUM(UNIT_ATTRIBUTE_GUN_SUBCHASER_BULLET, "UNIT_ATTRIBUTE_GUN_SUBCHASER_BULLET")
REGISTER_ENUM(UNIT_ATTRIBUTE_SCUM_HEATER_CRATER, "UNIT_ATTRIBUTE_SCUM_HEATER_CRATER")
REGISTER_ENUM(UNIT_ATTRIBUTE_PIERCER_MOVEMENT_CRATER, "UNIT_ATTRIBUTE_PIERCER_MOVEMENT_CRATER")
REGISTER_ENUM(UNIT_ATTRIBUTE_SCUM_TWISTER_CRATER, "UNIT_ATTRIBUTE_SCUM_TWISTER_CRATER")
REGISTER_ENUM(UNIT_ATTRIBUTE_SCUM_STORM, "UNIT_ATTRIBUTE_SCUM_STORM")
REGISTER_ENUM(UNIT_ATTRIBUTE_FRAME_KAPUT_CRATER, "UNIT_ATTRIBUTE_FRAME_KAPUT_CRATER")
REGISTER_ENUM(UNIT_ATTRIBUTE_NATURE_TORPEDO, "UNIT_ATTRIBUTE_NATURE_TORPEDO")
REGISTER_ENUM(UNIT_ATTRIBUTE_NATURE_FAULT, "UNIT_ATTRIBUTE_NATURE_FAULT")
REGISTER_ENUM(UNIT_ATTRIBUTE_MONK, "UNIT_ATTRIBUTE_MONK")
REGISTER_ENUM(UNIT_ATTRIBUTE_ALPHA_POTENTIAL, "UNIT_ATTRIBUTE_ALPHA_POTENTIAL")
REGISTER_ENUM(UNIT_ATTRIBUTE_FILTH_SPOT, "UNIT_ATTRIBUTE_FILTH_SPOT")
REGISTER_ENUM(UNIT_ATTRIBUTE_GEO_INFLUENCE, "UNIT_ATTRIBUTE_GEO_INFLUENCE")
REGISTER_ENUM(UNIT_ATTRIBUTE_GEO_BREAK, "UNIT_ATTRIBUTE_GEO_BREAK")
REGISTER_ENUM(UNIT_ATTRIBUTE_GEO_FAULT, "UNIT_ATTRIBUTE_GEO_FAULT")
REGISTER_ENUM(UNIT_ATTRIBUTE_GEO_HEAD, "UNIT_ATTRIBUTE_GEO_HEAD")
REGISTER_ENUM(UNIT_ATTRIBUTE_BOMB_BULLET, "UNIT_ATTRIBUTE_BOMB_BULLET")
REGISTER_ENUM(UNIT_ATTRIBUTE_DEBRIS_BULLET, "UNIT_ATTRIBUTE_DEBRIS_BULLET")
REGISTER_ENUM(UNIT_ATTRIBUTE_DEBRIS_INSECT, "UNIT_ATTRIBUTE_DEBRIS_INSECT")
REGISTER_ENUM(UNIT_ATTRIBUTE_DEBRIS_UNIT, "UNIT_ATTRIBUTE_DEBRIS_UNIT")
REGISTER_ENUM(UNIT_ATTRIBUTE_DEBRIS_STRUCTURE, "UNIT_ATTRIBUTE_DEBRIS_STRUCTURE")
REGISTER_ENUM(UNIT_ATTRIBUTE_DESTRUCTION_CRATER, "UNIT_ATTRIBUTE_DESTRUCTION_CRATER")
REGISTER_ENUM(UNIT_ATTRIBUTE_DESTRUCTION_CRATER_NOZP, "UNIT_ATTRIBUTE_DESTRUCTION_CRATER_NOZP")
REGISTER_ENUM(UNIT_ATTRIBUTE_DESTRUCTION_CRATER_NO_DESTRUCT_ALL_ZEROPLAST, "UNIT_ATTRIBUTE_DESTRUCTION_CRATER_NO_DESTRUCT_ALL_ZEROPLAST")
REGISTER_ENUM(UNIT_ATTRIBUTE_DEBRIS_CRATER, "UNIT_ATTRIBUTE_DEBRIS_CRATER")
REGISTER_ENUM(UNIT_ATTRIBUTE_SCUM_MISSILE_CRATER, "UNIT_ATTRIBUTE_SCUM_MISSILE_CRATER")
REGISTER_ENUM(UNIT_ATTRIBUTE_SCUM_DISRUPTOR_CRATER, "UNIT_ATTRIBUTE_SCUM_DISRUPTOR_CRATER")
REGISTER_ENUM(UNIT_ATTRIBUTE_BOMB_MISSILE_CRATER, "UNIT_ATTRIBUTE_BOMB_MISSILE_CRATER")
REGISTER_ENUM(UNIT_ATTRIBUTE_BOMBIE_MISSILE_CRATER, "UNIT_ATTRIBUTE_BOMBIE_MISSILE_CRATER")
REGISTER_ENUM(UNIT_ATTRIBUTE_ROCKET_MISSILE_CRATER, "UNIT_ATTRIBUTE_ROCKET_MISSILE_CRATER")
REGISTER_ENUM(UNIT_ATTRIBUTE_VOLCANO_CRATER, "UNIT_ATTRIBUTE_VOLCANO_CRATER")
REGISTER_ENUM(UNIT_ATTRIBUTE_NATURE_MOUNTAIN, "UNIT_ATTRIBUTE_NATURE_MOUNTAIN")
REGISTER_ENUM(UNIT_ATTRIBUTE_NATURE_WORM, "UNIT_ATTRIBUTE_NATURE_WORM")
REGISTER_ENUM(UNIT_ATTRIBUTE_NATURE_RIFT, "UNIT_ATTRIBUTE_NATURE_RIFT")
REGISTER_ENUM(UNIT_ATTRIBUTE_NATURE_CLEFT, "UNIT_ATTRIBUTE_NATURE_CLEFT")
REGISTER_ENUM(UNIT_ATTRIBUTE_NATURE_FACE, "UNIT_ATTRIBUTE_NATURE_FACE")
REGISTER_ENUM(UNIT_ATTRIBUTE_STATIC_NATURE, "UNIT_ATTRIBUTE_STATIC_NATURE")
REGISTER_ENUM(UNIT_ATTRIBUTE_FALL_TREE, "UNIT_ATTRIBUTE_FALL_TREE")
REGISTER_ENUM(UNIT_ATTRIBUTE_MARK, "UNIT_ATTRIBUTE_MARK")
REGISTER_ENUM(UNIT_ATTRIBUTE_FALL_STRUCTURE, "UNIT_ATTRIBUTE_FALL_STRUCTURE")
REGISTER_ENUM(UNIT_ATTRIBUTE_UNIT_CORPSE, "UNIT_ATTRIBUTE_UNIT_CORPSE")
REGISTER_ENUM(UNIT_ATTRIBUTE_BUILDING_HOLOGRAM, "UNIT_ATTRIBUTE_BUILDING_HOLOGRAM")
REGISTER_ENUM(UNIT_ATTRIBUTE_BUILDING_UNINSTALL, "UNIT_ATTRIBUTE_BUILDING_UNINSTALL")
REGISTER_ENUM(UNIT_ATTRIBUTE_CORPSE_DYNAMIC, "UNIT_ATTRIBUTE_CORPSE_DYNAMIC")
REGISTER_ENUM(UNIT_ATTRIBUTE_MAX, "UNIT_ATTRIBUTE_MAX")
END_ENUM_DESCRIPTOR(terUnitAttributeID)


BEGIN_ENUM_DESCRIPTOR(terUnitClassType, "����� ������")
REGISTER_ENUM(UNIT_CLASS_IGNORE, "�����")
REGISTER_ENUM(UNIT_CLASS_BASE, "�������")
REGISTER_ENUM(UNIT_CLASS_LIGHT, "������")
REGISTER_ENUM(UNIT_CLASS_MEDIUM, "�������")
REGISTER_ENUM(UNIT_CLASS_HEAVY, "�������")
REGISTER_ENUM(UNIT_CLASS_AIR, "���������")
REGISTER_ENUM(UNIT_CLASS_AIR_HEAVY, "��������� �������")
REGISTER_ENUM(UNIT_CLASS_UNDERGROUND, "���������")
REGISTER_ENUM(UNIT_CLASS_STRUCTURE, "������")
REGISTER_ENUM(UNIT_CLASS_STRUCTURE_GUN, "������� ������")
REGISTER_ENUM(UNIT_CLASS_STRUCTURE_SPECIAL, "����������")
REGISTER_ENUM(UNIT_CLASS_STRUCTURE_CORE, "����")
REGISTER_ENUM(UNIT_CLASS_STRUCTURE_ENVIRONMENT, "������ ������ �� ����")
REGISTER_ENUM(UNIT_CLASS_FRAME, "�����")
REGISTER_ENUM(UNIT_CLASS_BUILDER, "���������")
REGISTER_ENUM(UNIT_CLASS_TRUCK, "�����")
REGISTER_ENUM(UNIT_CLASS_BLOCK, "�����")
REGISTER_ENUM(UNIT_CLASS_MISSILE, "�������")
REGISTER_ENUM(UNIT_CLASS_NATURE, "�������")
REGISTER_ENUM(UNIT_CLASS_AIR_FILTH, "������� ���������")
REGISTER_ENUM(UNIT_CLASS_GROUND_FILTH, "������� ��������")
REGISTER_ENUM(UNIT_CLASS_UNDERGROUND_FILTH, "������� ���������")
REGISTER_ENUM(UNIT_CLASS_CORRIDOR, "�������")
REGISTER_ENUM(UNIT_CLASS_GROUND, "�����")
END_ENUM_DESCRIPTOR(terUnitClassType)

BEGIN_ENUM_DESCRIPTOR(terMissionObjectType, "terMissionObjectType")
REGISTER_ENUM(NATURE_FLAG_NONE, "NATURE_FLAG_NONE")
REGISTER_ENUM(NATURE_FLAG_DESTROY, "�����������")
REGISTER_ENUM(NATURE_FLAG_REAL, "������������")
REGISTER_ENUM(NATURE_FLAG_LIGHT, "���������")
END_ENUM_DESCRIPTOR(terMissionObjectType)

BEGIN_ENUM_DESCRIPTOR(terFilthSpotID, "terFilthSpotID")
REGISTER_ENUM(FILTH_SPOT_ID_NONE, "FILTH_SPOT_ID_NONE")
REGISTER_ENUM(FILTH_SPOT_ID_ANTS, "�������")
REGISTER_ENUM(FILTH_SPOT_ID_WASP, "���")
REGISTER_ENUM(FILTH_SPOT_ID_DRAGON, "������")
REGISTER_ENUM(FILTH_SPOT_ID_GHOST, "����������")
REGISTER_ENUM(FILTH_SPOT_ID_EYE, "�����")
REGISTER_ENUM(FILTH_SPOT_ID_CROW, "������")
REGISTER_ENUM(FILTH_SPOT_ID_DAEMON, "������")
REGISTER_ENUM(FILTH_SPOT_ID_RAT, "�����")
REGISTER_ENUM(FILTH_SPOT_ID_WORM, "�����")
REGISTER_ENUM(FILTH_SPOT_ID_SHARK, "�����")
REGISTER_ENUM(FILTH_SPOT_ID_VOLCANO, "������")
REGISTER_ENUM(FILTH_SPOT_ID_ANTS2, "�������2")
REGISTER_ENUM(FILTH_SPOT_ID_SNAKE, "����")
REGISTER_ENUM(FILTH_SPOT_ID_DRAGON2, "������2")
REGISTER_ENUM(FILTH_SPOT_ID_VOLCANO_SCUM_DISRUPTOR, "������ �� ��������������")
REGISTER_ENUM(FILTH_SPOT_ID_A_ANTS,"������� aant.M3D")
REGISTER_ENUM(FILTH_SPOT_ID_A_CROW,"������ abird.M3D")
REGISTER_ENUM(FILTH_SPOT_ID_A_DAEMON,"������ ad_DAEMON.M3D")
REGISTER_ENUM(FILTH_SPOT_ID_A_DRAGON,"������ adragon_body.M3D adragon_head.M3D adragon_tail.M3D")
REGISTER_ENUM(FILTH_SPOT_ID_A_EYE,"����� aeye.M3D")
REGISTER_ENUM(FILTH_SPOT_ID_A_RAT,"����� arat.M3D")
REGISTER_ENUM(FILTH_SPOT_ID_A_SPIDER,"�������2 aspider.M3D aspider1.M3D")
REGISTER_ENUM(FILTH_SPOT_ID_A_WASP,"��� awasp.M3D")
REGISTER_ENUM(FILTH_SPOT_ID_A_WORM,"����� aworm.M3D")
END_ENUM_DESCRIPTOR(terFilthSpotID)


BEGIN_ENUM_DESCRIPTOR(terFilthAttackType, "terFilthAttackType")
REGISTER_ENUM(FILTH_ATTACK_ALL, "��������� ����")
REGISTER_ENUM(FILTH_ATTACK_PLAYER, "��������� ������")
REGISTER_ENUM(FILTH_ATTACK_AI, "��������� AI")
REGISTER_ENUM(FILTH_ATTACK_NOSELF, "��������� �� ����")
REGISTER_ENUM(FILTH_ATTACK_NOSELF_NOWORLD, "����. ����� ������ ������������.")
END_ENUM_DESCRIPTOR(terFilthAttackType)

BEGIN_ENUM_DESCRIPTOR(PlacementStrategy, "PlacementStrategy")
REGISTER_ENUM(PLACEMENT_STRATEGY_CORE, "���� -> ����� � ������")
REGISTER_ENUM(PLACEMENT_STRATEGY_CORE_OFFENSIVE, "���� -> ����� � �����")
REGISTER_ENUM(PLACEMENT_STRATEGY_CORE_CATCHING, "���� -> ����� � ������������ ������")
REGISTER_ENUM(PLACEMENT_STRATEGY_CORE_CATCHING_CORRIDOR, "���� -> ����� � ��������")
REGISTER_ENUM(PLACEMENT_STRATEGY_CORE_AWAY_FROM_ENEMY, "���� -> ������ �� �����")
REGISTER_ENUM(PLACEMENT_STRATEGY_PLANT, "����� -> ����� � ������")
REGISTER_ENUM(PLACEMENT_STRATEGY_COMMANDER, "��������� ����� -> ����� � ������, 5 ������")
REGISTER_ENUM(PLACEMENT_STRATEGY_STATION, "������� -> ����� � ������, ���� ������")
REGISTER_ENUM(PLACEMENT_STRATEGY_GUN, "����� -> ����� � ����� ��� �������")
REGISTER_ENUM(PLACEMENT_STRATEGY_GUN_TO_ENEMY, "����� -> ����� � �����")
REGISTER_ENUM(PLACEMENT_STRATEGY_GUN_TO_FILTH, "����� -> ����� � �������")
REGISTER_ENUM(PLACEMENT_STRATEGY_GUN_TO_ENEMY_BUILDING, "� ������ �������� ����� ����� �������� ������ �����")
REGISTER_ENUM(PLACEMENT_STRATEGY_SPECIAL_WEAPON, "����.������ -> ����� � �����, ���� ������")
END_ENUM_DESCRIPTOR(PlacementStrategy)

BEGIN_ENUM_DESCRIPTOR(ChainID, "ChainID")
REGISTER_ENUM(CHAIN_NONE, "CHAIN_NONE")
REGISTER_ENUM(CHAIN_DEFAULT, "������������� ���")
REGISTER_ENUM(CHAIN_SWITCH_ON, "CHAIN_SWITCH_ON")
REGISTER_ENUM(CHAIN_SWITCHED_ON, "CHAIN_SWITCHED_ON")
REGISTER_ENUM(CHAIN_SWITCH_OFF, "CHAIN_SWITCH_OFF")
REGISTER_ENUM(CHAIN_SWITCHED_OFF, "CHAIN_SWITCHED_OFF")
REGISTER_ENUM(CHAIN_UPGRADE_PREPARE, "CHAIN_UPGRADE_PREPARE")
REGISTER_ENUM(CHAIN_UPGRADE, "CHAIN_UPGRADE")
REGISTER_ENUM(CHAIN_BUILD1, "CHAIN_BUILD1")
REGISTER_ENUM(CHAIN_BUILD2, "CHAIN_BUILD2")
REGISTER_ENUM(CHAIN_BUILD3, "CHAIN_BUILD3")
REGISTER_ENUM(CHAIN_BUILD4, "CHAIN_BUILD4")
REGISTER_ENUM(CHAIN_BUILD5, "CHAIN_BUILD5")
REGISTER_ENUM(CHAIN_BUILD6, "CHAIN_BUILD6")
REGISTER_ENUM(CHAIN_BUILD7, "CHAIN_BUILD7")
REGISTER_ENUM(CHAIN_BUILD8, "CHAIN_BUILD8")
REGISTER_ENUM(CHAIN_UNBUILD1, "CHAIN_UNBUILD1")
REGISTER_ENUM(CHAIN_UNBUILD2, "CHAIN_UNBUILD2")
REGISTER_ENUM(CHAIN_UNBUILD3, "CHAIN_UNBUILD3")
REGISTER_ENUM(CHAIN_UNBUILD4, "CHAIN_UNBUILD4")
REGISTER_ENUM(CHAIN_UNBUILD5, "CHAIN_UNBUILD5")
REGISTER_ENUM(CHAIN_UNBUILD6, "CHAIN_UNBUILD6")
REGISTER_ENUM(CHAIN_UNBUILD7, "CHAIN_UNBUILD7")
REGISTER_ENUM(CHAIN_UNBUILD8, "CHAIN_UNBUILD8")
REGISTER_ENUM(CHAIN_CLOSED, "CHAIN_CLOSED")
REGISTER_ENUM(CHAIN_OPEN, "CHAIN_OPEN")
REGISTER_ENUM(CHAIN_OPENED, "CHAIN_OPENED")
REGISTER_ENUM(CHAIN_CLOSE, "CHAIN_CLOSE")
REGISTER_ENUM(CHAIN_FIRE, "CHAIN_FIRE")
REGISTER_ENUM(CHAIN_FIRE_PREPARE, "CHAIN_FIRE_PREPARE")
REGISTER_ENUM(CHAIN_RESET, "CHAIN_RESET")
REGISTER_ENUM(CHAIN_CHARGE, "CHAIN_CHARGE")
REGISTER_ENUM(CHAIN_CHARGED, "CHAIN_CHARGED")
REGISTER_ENUM(CHAIN_DISCHARGE, "CHAIN_DISCHARGE")
REGISTER_ENUM(CHAIN_DISCHARGED, "CHAIN_DISCHARGED")
REGISTER_ENUM(CHAIN_DETACHED, "CHAIN_DETACHED")
REGISTER_ENUM(CHAIN_ATTACHED, "CHAIN_ATTACHED")
REGISTER_ENUM(CHAIN_DETACH, "CHAIN_DETACH")
REGISTER_ENUM(CHAIN_ATTACH, "CHAIN_ATTACH")
REGISTER_ENUM(CHAIN_DETACHED_INPUT, "CHAIN_DETACHED_INPUT")
REGISTER_ENUM(CHAIN_DETACHED_OUTPUT, "CHAIN_DETACHED_OUTPUT")
REGISTER_ENUM(CHAIN_ATTACHED_OUTPUT, "CHAIN_ATTACHED_OUTPUT")
REGISTER_ENUM(CHAIN_ATTACHED_INPUT, "CHAIN_ATTACHED_INPUT")
REGISTER_ENUM(CHAIN_PRODUCTION, "CHAIN_PRODUCTION")
REGISTER_ENUM(CHAIN_DIE, "CHAIN_DIE")
REGISTER_ENUM(CHAIN_MOVE, "CHAIN_MOVE")
REGISTER_ENUM(CHAIN_STOP, "CHAIN_STOP")
REGISTER_ENUM(CHAIN_TAKEOFF, "CHAIN_TAKEOFF")
REGISTER_ENUM(CHAIN_LANDING, "CHAIN_LANDING")
END_ENUM_DESCRIPTOR(ChainID)

BEGIN_ENUM_DESCRIPTOR(BuildingStatus, "BuildingStatus")
REGISTER_ENUM(BUILDING_STATUS_CONSTRUCTED, "���������")
REGISTER_ENUM(BUILDING_STATUS_PLUGGED_IN, "������� � ����������")
REGISTER_ENUM(BUILDING_STATUS_CONNECTED, "������ ����������: �-� ����������� ��������� ������, ��������� - ����� ���������")
REGISTER_ENUM(BUILDING_STATUS_ENABLED, "��������� ������� ��������")
REGISTER_ENUM(BUILDING_STATUS_POWERED, "�������� �������, �� ��������� ������ ���������� �������")
REGISTER_ENUM(BUILDING_STATUS_UPGRADING, "����������� � ������ ������")
REGISTER_ENUM(BUILDING_STATUS_MOUNTED, "���������")
REGISTER_ENUM(BUILDING_STATUS_HOLD_CONSTRUCTION, "����������� �������������")
END_ENUM_DESCRIPTOR(BuildingStatus)

BEGIN_ENUM_DESCRIPTOR(ColorType, "StrategyColor")
REGISTER_ENUM(STRATEGY_RED, "�������")
REGISTER_ENUM(STRATEGY_GREEN, "�������")
REGISTER_ENUM(STRATEGY_BLUE, "�����")
REGISTER_ENUM(STRATEGY_YELLOW, "������")
REGISTER_ENUM(STRATEGY_COLOR_0, "STRATEGY_COLOR_0")
REGISTER_ENUM(STRATEGY_COLOR_1, "STRATEGY_COLOR_1")
REGISTER_ENUM(STRATEGY_COLOR_2, "STRATEGY_COLOR_2")
REGISTER_ENUM(STRATEGY_COLOR_3, "STRATEGY_COLOR_3")
REGISTER_ENUM(STRATEGY_COLOR_4, "STRATEGY_COLOR_4")
REGISTER_ENUM(STRATEGY_COLOR_5, "STRATEGY_COLOR_5")
REGISTER_ENUM(STRATEGY_COLOR_MAX, "STRATEGY_COLOR_MAX")
END_ENUM_DESCRIPTOR(ColorType)

BEGIN_ENUM_DESCRIPTOR_ENCLOSED(SaveManualData, OmegaMissionType, "OmegaMissionType")
REGISTER_ENUM_ENCLOSED(SaveManualData, OMEGA_UPGRADE, "�������������")
REGISTER_ENUM_ENCLOSED(SaveManualData, OMEGA_MINE, "������������")
REGISTER_ENUM_ENCLOSED(SaveManualData, OMEGA_DEMINE, "�������������")
END_ENUM_DESCRIPTOR_ENCLOSED(SaveManualData, OmegaMissionType)

BEGIN_ENUM_DESCRIPTOR(terUnitClassID, "terUnitClassID")
REGISTER_ENUM(UNIT_CLASS_ID_NONE, "UNIT_CLASS_ID_NONE")
REGISTER_ENUM(UNIT_CLASS_ID_PROJECTILE_DEBRIS, "UNIT_CLASS_ID_PROJECTILE_DEBRIS")
REGISTER_ENUM(UNIT_CLASS_ID_PROJECTILE_DEBRIS_CRATER, "UNIT_CLASS_ID_PROJECTILE_DEBRIS_CRATER")
REGISTER_ENUM(UNIT_CLASS_ID_PROJECTILE_BULLET, "UNIT_CLASS_ID_PROJECTILE_BULLET")
REGISTER_ENUM(UNIT_CLASS_ID_PROJECTILE_MISSILE, "UNIT_CLASS_ID_PROJECTILE_MISSILE")
REGISTER_ENUM(UNIT_CLASS_ID_PROJECTILE_UNDERGROUND, "UNIT_CLASS_ID_PROJECTILE_UNDERGROUND")
REGISTER_ENUM(UNIT_CLASS_ID_SCUM_STORM, "UNIT_CLASS_ID_SCUM_STORM")
REGISTER_ENUM(UNIT_CLASS_ID_IRON_DESTRUCTION_CRATER, "UNIT_CLASS_ID_IRON_DESTRUCTION_CRATER")
REGISTER_ENUM(UNIT_CLASS_ID_IRON_DEBRIS_CRATER, "UNIT_CLASS_ID_IRON_DEBRIS_CRATER")
REGISTER_ENUM(UNIT_CLASS_ID_CRATER, "UNIT_CLASS_ID_CRATER")
REGISTER_ENUM(UNIT_CLASS_ID_TRUCK, "UNIT_CLASS_ID_TRUCK")
REGISTER_ENUM(UNIT_CLASS_ID_MONK, "UNIT_CLASS_ID_MONK")
REGISTER_ENUM(UNIT_CLASS_ID_STATIC_NATURE, "UNIT_CLASS_ID_STATIC_NATURE")
REGISTER_ENUM(UNIT_CLASS_ID_NATURE_MOUNTAIN, "UNIT_CLASS_ID_NATURE_MOUNTAIN")
REGISTER_ENUM(UNIT_CLASS_ID_NATURE_WORM, "UNIT_CLASS_ID_NATURE_WORM")
REGISTER_ENUM(UNIT_CLASS_ID_NATURE_RIFT, "UNIT_CLASS_ID_NATURE_RIFT")
REGISTER_ENUM(UNIT_CLASS_ID_NATURE_CLEFT, "UNIT_CLASS_ID_NATURE_CLEFT")
REGISTER_ENUM(UNIT_CLASS_ID_NATURE_FACE, "UNIT_CLASS_ID_NATURE_FACE")
REGISTER_ENUM(UNIT_CLASS_ID_SQUAD, "UNIT_CLASS_ID_SQUAD")
REGISTER_ENUM(UNIT_CLASS_ID_FALL_TREE, "UNIT_CLASS_ID_FALL_TREE")
REGISTER_ENUM(UNIT_CLASS_ID_CORRIDOR_ALPHA, "UNIT_CLASS_ID_CORRIDOR_ALPHA")
REGISTER_ENUM(UNIT_CLASS_ID_CORRIDOR_OMEGA, "UNIT_CLASS_ID_CORRIDOR_OMEGA")
REGISTER_ENUM(UNIT_CLASS_ID_FALL_STRUCTURE, "UNIT_CLASS_ID_FALL_STRUCTURE")
REGISTER_ENUM(UNIT_CLASS_ID_UNIT_CORPSE, "UNIT_CLASS_ID_UNIT_CORPSE")
REGISTER_ENUM(UNIT_CLASS_ID_FRAME, "UNIT_CLASS_ID_FRAME")
REGISTER_ENUM(UNIT_CLASS_ID_TERRAIN_MASTER, "UNIT_CLASS_ID_TERRAIN_MASTER")
REGISTER_ENUM(UNIT_CLASS_ID_BUILD_MASTER, "UNIT_CLASS_ID_BUILD_MASTER")
REGISTER_ENUM(UNIT_CLASS_ID_GENERIC_BUILDING, "UNIT_CLASS_ID_GENERIC_BUILDING")
REGISTER_ENUM(UNIT_CLASS_ID_BUILDING_ENVIRONMENT, "UNIT_CLASS_ID_BUILDING_ENVIRONMENT")
REGISTER_ENUM(UNIT_CLASS_ID_BUILDING_BLOCK, "UNIT_CLASS_ID_BUILDING_BLOCK")
REGISTER_ENUM(UNIT_CLASS_ID_CORE, "UNIT_CLASS_ID_CORE")
REGISTER_ENUM(UNIT_CLASS_ID_COMMANDER, "UNIT_CLASS_ID_COMMANDER")
REGISTER_ENUM(UNIT_CLASS_ID_PLANT, "UNIT_CLASS_ID_PLANT")
REGISTER_ENUM(UNIT_CLASS_ID_LEGIONARY, "UNIT_CLASS_ID_LEGIONARY")
REGISTER_ENUM(UNIT_CLASS_ID_BUILDING_ENERGY, "UNIT_CLASS_ID_BUILDING_ENERGY")
REGISTER_ENUM(UNIT_CLASS_ID_BUILDING_MILITARY, "UNIT_CLASS_ID_BUILDING_MILITARY")
REGISTER_ENUM(UNIT_CLASS_ID_BUILDING_POWERED, "UNIT_CLASS_ID_BUILDING_POWERED")
REGISTER_ENUM(UNIT_CLASS_ID_NATURE_TORPEDO, "UNIT_CLASS_ID_NATURE_TORPEDO")
REGISTER_ENUM(UNIT_CLASS_ID_NATURE_FAULT, "UNIT_CLASS_ID_NATURE_FAULT")
REGISTER_ENUM(UNIT_CLASS_ID_FILTH_SPOT, "UNIT_CLASS_ID_FILTH_SPOT")
REGISTER_ENUM(UNIT_CLASS_ID_FILTH_ANTS, "UNIT_CLASS_ID_FILTH_ANTS")
REGISTER_ENUM(UNIT_CLASS_ID_FILTH_WASP, "UNIT_CLASS_ID_FILTH_WASP")
REGISTER_ENUM(UNIT_CLASS_ID_FILTH_GHOST, "UNIT_CLASS_ID_FILTH_GHOST")
REGISTER_ENUM(UNIT_CLASS_ID_FILTH_EYE, "UNIT_CLASS_ID_FILTH_EYE")
REGISTER_ENUM(UNIT_CLASS_ID_FILTH_CROW, "UNIT_CLASS_ID_FILTH_CROW")
REGISTER_ENUM(UNIT_CLASS_ID_FILTH_DAEMON, "UNIT_CLASS_ID_FILTH_DAEMON")
REGISTER_ENUM(UNIT_CLASS_ID_FILTH_DRAGON_HEAD, "UNIT_CLASS_ID_FILTH_DRAGON_HEAD")
REGISTER_ENUM(UNIT_CLASS_ID_FILTH_DRAGON_BODY, "UNIT_CLASS_ID_FILTH_DRAGON_BODY")
REGISTER_ENUM(UNIT_CLASS_ID_FILTH_RAT, "UNIT_CLASS_ID_FILTH_RAT")
REGISTER_ENUM(UNIT_CLASS_ID_FILTH_WORM, "UNIT_CLASS_ID_FILTH_WORM")
REGISTER_ENUM(UNIT_CLASS_ID_FILTH_SHARK, "UNIT_CLASS_ID_FILTH_SHARK")
REGISTER_ENUM(UNIT_CLASS_ID_FILTH_VOLCANO, "UNIT_CLASS_ID_FILTH_VOLCANO")
REGISTER_ENUM(UNIT_CLASS_ID_ALPHA_POTENTIAL, "UNIT_CLASS_ID_ALPHA_POTENTIAL")
REGISTER_ENUM(UNIT_CLASS_ID_BUILDING_HOLOGRAM, "UNIT_CLASS_ID_BUILDING_HOLOGRAM")
REGISTER_ENUM(UNIT_CLASS_ID_BUILDING_UNINSTALL, "UNIT_CLASS_ID_BUILDING_UNINSTALL")
REGISTER_ENUM(UNIT_CLASS_GEO_INFLUENCE, "UNIT_CLASS_GEO_INFLUENCE")
REGISTER_ENUM(UNIT_CLASS_GEO_BREAK, "UNIT_CLASS_GEO_BREAK")
REGISTER_ENUM(UNIT_CLASS_GEO_FAULT, "UNIT_CLASS_GEO_FAULT")
REGISTER_ENUM(UNIT_CLASS_CORPSE_DYNAMIC, "UNIT_CLASS_CORPSE_DYNAMIC")
REGISTER_ENUM(UNIT_CLASS_GEO_HEAD, "UNIT_CLASS_GEO_HEAD")
REGISTER_ENUM(UNIT_CLASS_ID_MAX, "UNIT_CLASS_ID_MAX")
END_ENUM_DESCRIPTOR(terUnitClassID)

BEGIN_ENUM_DESCRIPTOR(terInterpolationID, "terInterpolationID")
REGISTER_ENUM(INTERPOLATION_ID_NONE, "INTERPOLATION_ID_NONE")
REGISTER_ENUM(INTERPOLATION_ID_CONGREGATION, "INTERPOLATION_ID_CONGREGATION")
REGISTER_ENUM(INTERPOLATION_ID_REAL, "INTERPOLATION_ID_REAL")
REGISTER_ENUM(INTERPOLATION_ID_CORE, "INTERPOLATION_ID_CORE")
REGISTER_ENUM(INTERPOLATION_ID_DUMMY, "INTERPOLATION_ID_DUMMY")
REGISTER_ENUM(INTERPOLATION_ID_PORT, "INTERPOLATION_ID_PORT")
REGISTER_ENUM(INTERPOLATION_ID_LASER, "INTERPOLATION_ID_LASER")
REGISTER_ENUM(INTERPOLATION_ID_GUN, "INTERPOLATION_ID_GUN")
REGISTER_ENUM(INTERPOLATION_ID_LEECH, "INTERPOLATION_ID_LEECH")
REGISTER_ENUM(INTERPOLATION_ID_CONNECTION, "INTERPOLATION_ID_CONNECTION")
REGISTER_ENUM(INTERPOLATION_ID_STRUCTURE, "INTERPOLATION_ID_STRUCTURE")
REGISTER_ENUM(INTERPOLATION_ID_COPY, "INTERPOLATION_ID_COPY")
REGISTER_ENUM(INTERPOLATION_ID_UNINSTALL, "INTERPOLATION_ID_UNINSTALL")
REGISTER_ENUM(INTERPOLATION_ID_MAX, "INTERPOLATION_ID_MAX")
END_ENUM_DESCRIPTOR(terInterpolationID)

BEGIN_ENUM_DESCRIPTOR(terLegionType, "terLegionType")
REGISTER_ENUM(LEGION_GROUND, "LEGION_GROUND")
REGISTER_ENUM(LEGION_FLYING, "LEGION_FLYING")
REGISTER_ENUM(LEGION_SUBTERRANEAN, "LEGION_SUBTERRANEAN")
END_ENUM_DESCRIPTOR(terLegionType)

BEGIN_ENUM_DESCRIPTOR(DamageElementFilter, "DamageElementFilter")
REGISTER_ENUM(DAMAGE_FILTER_SOLDIERS, "DAMAGE_FILTER_SOLDIERS")
REGISTER_ENUM(DAMAGE_FILTER_OFFICERS, "DAMAGE_FILTER_OFFICERS")
REGISTER_ENUM(DAMAGE_FILTER_TECHNICS, "DAMAGE_FILTER_TECHNICS")
REGISTER_ENUM(DAMAGE_FILTER_SOFT, "DAMAGE_FILTER_SOFT")
REGISTER_ENUM(DAMAGE_FILTER_HARD, "DAMAGE_FILTER_HARD")
REGISTER_ENUM(DAMAGE_FILTER_BASE, "DAMAGE_FILTER_BASE")
REGISTER_ENUM(DAMAGE_FILTER_ALL, "DAMAGE_FILTER_ALL")
END_ENUM_DESCRIPTOR(DamageElementFilter)

BEGIN_ENUM_DESCRIPTOR(EnvironmentalDamageType, "���� �����������, ��������� �����")
REGISTER_ENUM(ENV_DAMAGE_NONE, "��� �����������")
REGISTER_ENUM(ENV_DAMAGE_CHAOS, "����������� �� �����")
REGISTER_ENUM(ENV_DAMAGE_BASEMENT, "����������� �� ����������� ����-����")
END_ENUM_DESCRIPTOR(EnvironmentalDamageType)

BEGIN_ENUM_DESCRIPTOR(terEffectID, "terEffectID")
REGISTER_ENUM(EFFECT_ID_EXPLOSION, "EFFECT_ID_EXPLOSION")
REGISTER_ENUM(EFFECT_ID_EXPLOSION_ALTERNATE, "EFFECT_ID_EXPLOSION_ALTERNATE")
REGISTER_ENUM(EFFECT_ID_BUILDING_SMOKE0, "EFFECT_ID_BUILDING_SMOKE0")
REGISTER_ENUM(EFFECT_ID_BUILDING_SMOKE1, "EFFECT_ID_BUILDING_SMOKE1")
REGISTER_ENUM(EFFECT_ID_BUILDING_SMOKE2, "EFFECT_ID_BUILDING_SMOKE2")
REGISTER_ENUM(EFFECT_ID_CRATER_EFFECT, "EFFECT_ID_CRATER_EFFECT")
REGISTER_ENUM(EFFECT_ID_BUILDING_UNINSTALL, "EFFECT_ID_BUILDING_UNINSTALL")
REGISTER_ENUM(EFFECT_ID_UNIT_SMOKE, "EFFECT_ID_UNIT_SMOKE")
REGISTER_ENUM(EFFECT_ID_UNIT_MOVE, "EFFECT_ID_UNIT_MOVE")
REGISTER_ENUM(EFFECT_ID_LASER_HIT, "EFFECT_ID_LASER_HIT")
REGISTER_ENUM(EFFECT_ID_UNIT_SMOKE_CORPSE, "EFFECT_ID_UNIT_SMOKE_CORPSE")
REGISTER_ENUM(EFFECT_ID_MAX, "EFFECT_ID_MAX")
END_ENUM_DESCRIPTOR(terEffectID)

BEGIN_ENUM_DESCRIPTOR(WeaponType, "WeaponType")
REGISTER_ENUM(WEAPON_NONE, "WEAPON_NONE")
REGISTER_ENUM(WEAPON_LASER, "WEAPON_LASER")
REGISTER_ENUM(WEAPON_FREEZE_LASER, "WEAPON_FREEZE_LASER")
REGISTER_ENUM(WEAPON_HEAL_LASER, "WEAPON_HEAL_LASER")
REGISTER_ENUM(WEAPON_LAUNCHER, "WEAPON_LAUNCHER")
REGISTER_ENUM(WEAPON_ARTILLERY, "WEAPON_ARTILLERY")
REGISTER_ENUM(WEAPON_PIERCER, "WEAPON_PIERCER")
REGISTER_ENUM(WEAPON_DISINTEGRATOR, "WEAPON_DISINTEGRATOR")
REGISTER_ENUM(WEAPON_SCUM_SPLITTER, "WEAPON_SCUM_SPLITTER")
REGISTER_ENUM(WEAPON_SCUM_TWISTER, "WEAPON_SCUM_TWISTER")
REGISTER_ENUM(WEAPON_SCUM_HEATER, "WEAPON_SCUM_HEATER")
REGISTER_ENUM(WEAPON_SCUM_DISRUPTOR, "WEAPON_SCUM_DISRUPTOR")
REGISTER_ENUM(WEAPON_LEECH, "WEAPON_LEECH")
REGISTER_ENUM(WEAPON_FILTH_NAVIGATOR, "WEAPON_FILTH_NAVIGATOR")
REGISTER_ENUM(WEAPON_FILTH_SPOT, "WEAPON_FILTH_SPOT")
REGISTER_ENUM(WEAPON_INVISIBILITY_GENERATOR, "WEAPON_INVISIBILITY_GENERATOR")
REGISTER_ENUM(WEAPON_LIGHTING, "WEAPON_LIGHTING")
REGISTER_ENUM(WEAPON_CONDUCTOR, "WEAPON_CONDUCTOR")
END_ENUM_DESCRIPTOR(WeaponType)

BEGIN_ENUM_DESCRIPTOR(WeaponFlags, "WeaponFlags")
REGISTER_ENUM(WEAPON_HAS_FIRE_CONTROLLER, "WEAPON_HAS_FIRE_CONTROLLER")
REGISTER_ENUM(WEAPON_ROOT_FIRE_ANIMATION, "WEAPON_ROOT_FIRE_ANIMATION")
REGISTER_ENUM(WEAPON_CYCLE_FIRE_ANIMATION, "WEAPON_CYCLE_FIRE_ANIMATION")
REGISTER_ENUM(WEAPON_CLEAN_TARGET_AFTER_FIRE, "WEAPON_CLEAN_TARGET_AFTER_FIRE")
REGISTER_ENUM(WEAPON_NEED_CHARGE, "WEAPON_NEED_CHARGE")
REGISTER_ENUM(WEAPON_DISABLE_DEFENCIVE_ATTACK, "WEAPON_DISABLE_DEFENCIVE_ATTACK")
REGISTER_ENUM(WEAPON_CHARGE_ANIMATION, "WEAPON_CHARGE_ANIMATION")
REGISTER_ENUM(WEAPON_READY_ANIMATION, "WEAPON_READY_ANIMATION")
REGISTER_ENUM(WEAPON_IGNORE_FIELD, "WEAPON_IGNORE_FIELD")
REGISTER_ENUM(WEAPON_UNLOAD_WHEN_DISABLED, "WEAPON_UNLOAD_WHEN_DISABLED")
END_ENUM_DESCRIPTOR(WeaponFlags)


/////////////////////////////////////////////////////
//		Save
/////////////////////////////////////////////////////

REGISTER_CLASS(SaveUnitData, SaveUnitData, "SaveUnitData");
REGISTER_CLASS(SaveUnitData, SaveCraterData, "SaveCraterData");
REGISTER_CLASS(SaveUnitData, SaveFilthSwarm, "SaveFilthSwarm");

REGISTER_CLASS(SaveUnitData, SaveFilthSwarmAnt, "SaveFilthSwarmAnt");
REGISTER_CLASS(SaveUnitData, SaveFilthSwarmCrow, "SaveFilthSwarmCrow");
REGISTER_CLASS(SaveUnitData, SaveFilthSwarmDaemon, "SaveFilthSwarmDaemon");
REGISTER_CLASS(SaveUnitData, SaveFilthSwarmDragon, "SaveFilthSwarmDragon");

REGISTER_CLASS(SaveUnitData, SaveFilthSwarmGhost, "SaveFilthSwarmGhost");
REGISTER_CLASS(SaveUnitData, SaveFilthSwarmRat, "SaveFilthSwarmRat");
REGISTER_CLASS(SaveUnitData, SaveFilthSwarmShark, "SaveFilthSwarmShark");
REGISTER_CLASS(SaveUnitData, SaveFilthSwarmVolcano, "SaveFilthSwarmVolcano");
REGISTER_CLASS(SaveUnitData, SaveFilthSwarmWasp, "SaveFilthSwarmWasp");
REGISTER_CLASS(SaveUnitData, SaveFilthSwarmWorm, "SaveFilthSwarmWorm");

REGISTER_CLASS(SaveUnitData, SaveGeoControl, "SaveGeoControl");
REGISTER_CLASS(SaveUnitData, SaveGeoFault, "SaveGeoFault");
REGISTER_CLASS(SaveUnitData, SaveGeoInfluence, "SaveGeoInfluence");
REGISTER_CLASS(SaveUnitData, SaveGeoBreak, "SaveGeoBreak");

REGISTER_CLASS(SaveUnitData, SaveUnitFilthData, "SaveUnitFilthData");
REGISTER_CLASS(SaveUnitData, SaveUnitNatureData, "SaveUnitNatureData");
REGISTER_CLASS(SaveUnitData, SaveUnitSquadData, "SaveUnitSquadData");
REGISTER_CLASS(SaveUnitData, SaveUnitRealData, "SaveUnitRealData");

REGISTER_CLASS(SaveUnitData, SaveFilthAnt, "SaveFilthAnt");
REGISTER_CLASS(SaveUnitData, SaveFilthDaemon, "SaveFilthDaemon");
REGISTER_CLASS(SaveUnitData, SaveFilthDragon, "SaveFilthDragon");
REGISTER_CLASS(SaveUnitData, SaveFilthGhost, "SaveFilthGhost");
REGISTER_CLASS(SaveUnitData, SaveFilthRat, "SaveFilthRat");
REGISTER_CLASS(SaveUnitData, SaveFilthSpline, "SaveFilthSpline");

REGISTER_CLASS(SaveUnitData, SaveFilthCrow, "SaveFilthCrow");
REGISTER_CLASS(SaveUnitData, SaveFilthDragonHead, "SaveFilthDragonHead");
REGISTER_CLASS(SaveUnitData, SaveFilthShark, "SaveFilthShark");
REGISTER_CLASS(SaveUnitData, SaveFilthWasp, "SaveFilthWasp");

REGISTER_CLASS(SaveUnitData, SaveFilthVolcano, "SaveFilthVolcano");
REGISTER_CLASS(SaveUnitData, SaveFilthVorm, "SaveFilthVorm");
REGISTER_CLASS(SaveUnitData, SaveUnitBuildingData, "SaveUnitBuildingData");
REGISTER_CLASS(SaveUnitData, SaveUnitBuildingMilitaryData, "SaveUnitBuildingMilitaryData");

REGISTER_CLASS(SaveUnitData, SaveUnitCommandCenterData, "SaveUnitCommandCenterData");
REGISTER_CLASS(SaveUnitData, SaveUnitCorridorAlphaData, "SaveUnitCorridorAlphaData");
REGISTER_CLASS(SaveUnitData, SaveUnitCorridorOmegaData, "SaveUnitCorridorOmegaData");
REGISTER_CLASS(SaveUnitData, SaveUnitProtectorData, "SaveUnitProtectorData");

REGISTER_CLASS(SaveUnitData, SaveUnitFrameChildData, "SaveUnitFrameChildData");
REGISTER_CLASS(SaveUnitData, SaveUnitFrameData, "SaveUnitFrameData");
REGISTER_CLASS(SaveUnitData, SaveUnitLegionaryData, "SaveUnitLegionaryData");

REGISTER_CLASS(SaveUnitData, SaveUnitProjectileData, "SaveUnitProjectileData");
REGISTER_CLASS(SaveUnitData, SaveUnitProjectileUndergroundData, "SaveUnitProjectileUndergroundData");
REGISTER_CLASS(SaveUnitData, SaveUnitScumStormData, "SaveUnitScumStormData");

REGISTER_CLASS(SaveWeaponData, SaveWeaponData, "SaveWeaponData");
REGISTER_CLASS(SaveWeaponData, SaveWeaponFilthNavigatorData, "SaveWeaponFilthNavigatorData");


