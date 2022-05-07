#ifndef __SENTRY7_PARAMETER_H
#define __SENTRY7_PARAMETER_H

#include "struct_typedef.h"

#define GM6020_MAX_OUTPUT                       30000
#define GM6020_MAX_IOUTPUT                      10000
#define M3508_MAX_OUTPUT                        16384
#define M3508_MAX_IOUTPUT                       6000
#define M2006_MAX_OUTPUT                        10000
#define M2006_MAX_IOUTPUT                       5000



#define PITCH_MAX_SPEED                         300
#define PITCH_MAX_ISPEED                        30
#define YAW_MAX_SPEED                           300
#define YAW_MAX_ISPEED                          30

#define AMMO_SPEEDSET_10MS                      2000
#define AMMO_SPEEDSET_12MS                      5000
#define AMMO_SPEEDSET_14MS                      5000
#define AMMO_SPEEDSET_15MS                      4700
#define AMMO_SPEEDSET_16MS                      5000
#define AMMO_SPEEDSET_18MS                      5000
#define AMMO_SPEEDSET_22MS                      5000
#define AMMO_SPEEDSET_30MS                      5000

#define ROTOR_SPEEDSET_FORWARD                  3000.0f
#define ROTOR_SPEEDSET_BACKWARD                 1000.0f

#define ROTOR_TIMESET_BUSY                      65
#define ROTOR_TIMESET_COOLING                   150
#define ROTOR_TIMESET_RESERVE                   160
#define ROTOR_LAGGING_COUNTER_MAX               70

#define ROTOR_TIMESET_COOLING_MAXEXTRA          200





//  无力云台参数
//  YAW轴角速度环
#define YAW_SPEED_NO_FORCE_KP                   0.0f
#define YAW_SPEED_NO_FORCE_KI                   0.0f
#define YAW_SPEED_NO_FORCE_KD                   0.0f
fp32 YAW_SPEED_NO_FORCE[3] = {YAW_SPEED_NO_FORCE_KP, YAW_SPEED_NO_FORCE_KI, YAW_SPEED_NO_FORCE_KD};
//  YAW轴角度环
#define YAW_ANGLE_NO_FORCE_KP                   0.0f
#define YAW_ANGLE_NO_FORCE_KI                   0.0f
#define YAW_ANGLE_NO_FORCE_KD                   0.0f
fp32 YAW_ANGLE_NO_FORCE[3] = {YAW_ANGLE_NO_FORCE_KP, YAW_ANGLE_NO_FORCE_KI, YAW_ANGLE_NO_FORCE_KD};
//  PITCH轴角速度环
#define PITCH_SPEED_NO_FORCE_KP                 0.0f
#define PITCH_SPEED_NO_FORCE_KI                 0.0f
#define PITCH_SPEED_NO_FORCE_KD                 0.0f
fp32 PITCH_SPEED_NO_FORCE[3] = {PITCH_SPEED_NO_FORCE_KP, PITCH_SPEED_NO_FORCE_KI, PITCH_SPEED_NO_FORCE_KD};
//  PITCH轴角度环
#define PITCH_ANGLE_NO_FORCE_KP                 0.0f
#define PITCH_ANGLE_NO_FORCE_KI                 0.0f
#define PITCH_ANGLE_NO_FORCE_KD                 0.0f
fp32 PITCH_ANGLE_NO_FORCE[3] = {PITCH_ANGLE_NO_FORCE_KP, PITCH_ANGLE_NO_FORCE_KI, PITCH_ANGLE_NO_FORCE_KD};


//  归位云台参数
//  YAW轴角速度环
#define YAW_SPEED_RESET_POSITION_KP             36.0f
#define YAW_SPEED_RESET_POSITION_KI             0.0f
#define YAW_SPEED_RESET_POSITION_KD             0.0f
fp32 YAW_SPEED_RESET_POSITION[3] = {YAW_SPEED_RESET_POSITION_KP, YAW_SPEED_RESET_POSITION_KI, YAW_SPEED_RESET_POSITION_KD};
//  YAW轴角度环
#define YAW_ANGLE_RESET_POSITION_KP             18.0f
#define YAW_ANGLE_RESET_POSITION_KI             0.0f
#define YAW_ANGLE_RESET_POSITION_KD             0.0f
fp32 YAW_ANGLE_RESET_POSITION[3] = {YAW_ANGLE_RESET_POSITION_KP, YAW_ANGLE_RESET_POSITION_KI, YAW_ANGLE_RESET_POSITION_KD};
//  PITCH轴角速度环
#define PITCH_SPEED_RESET_POSITION_KP           160.0f
#define PITCH_SPEED_RESET_POSITION_KI           0.0f
#define PITCH_SPEED_RESET_POSITION_KD           0.0f
fp32 PITCH_SPEED_RESET_POSITION[3] = {PITCH_SPEED_RESET_POSITION_KP, PITCH_SPEED_RESET_POSITION_KI, PITCH_SPEED_RESET_POSITION_KD};
//  PITCH轴角度环
#define PITCH_ANGLE_RESET_POSITION_KP           60.0f
#define PITCH_ANGLE_RESET_POSITION_KI           0.0f
#define PITCH_ANGLE_RESET_POSITION_KD           0.0f
fp32 PITCH_ANGLE_RESET_POSITION[3] = {PITCH_ANGLE_RESET_POSITION_KP, PITCH_ANGLE_RESET_POSITION_KI, PITCH_ANGLE_RESET_POSITION_KD};


//  手动控制云台参数
//  YAW轴角速度环
#define YAW_SPEED_MANUAL_OPERATE_KP             180.0f
#define YAW_SPEED_MANUAL_OPERATE_KI             0.0f
#define YAW_SPEED_MANUAL_OPERATE_KD             0.0f
fp32 YAW_SPEED_MANUAL_OPERATE[3] = {YAW_SPEED_MANUAL_OPERATE_KP, YAW_SPEED_MANUAL_OPERATE_KI, YAW_SPEED_MANUAL_OPERATE_KD};
//  YAW轴角度环
#define YAW_ANGLE_MANUAL_OPERATE_KP             60.0f
#define YAW_ANGLE_MANUAL_OPERATE_KI             0.0f
#define YAW_ANGLE_MANUAL_OPERATE_KD             0.0f
fp32 YAW_ANGLE_MANUAL_OPERATE[3] = {YAW_ANGLE_MANUAL_OPERATE_KP, YAW_ANGLE_MANUAL_OPERATE_KI, YAW_ANGLE_MANUAL_OPERATE_KD};
//  PITCH轴角速度环
#define PITCH_SPEED_MANUAL_OPERATE_KP           160.0f
#define PITCH_SPEED_MANUAL_OPERATE_KI           0.0f
#define PITCH_SPEED_MANUAL_OPERATE_KD           0.0f
fp32 PITCH_SPEED_MANUAL_OPERATE[3] = {PITCH_SPEED_MANUAL_OPERATE_KP, PITCH_SPEED_MANUAL_OPERATE_KI, PITCH_SPEED_MANUAL_OPERATE_KD};
//  PITCH轴角度环
#define PITCH_ANGLE_MANUAL_OPERATE_KP           60.0f
#define PITCH_ANGLE_MANUAL_OPERATE_KI           0.0f
#define PITCH_ANGLE_MANUAL_OPERATE_KD           0.0f
fp32 PITCH_ANGLE_MANUAL_OPERATE[3] = {PITCH_ANGLE_MANUAL_OPERATE_KP, PITCH_ANGLE_MANUAL_OPERATE_KI, PITCH_ANGLE_MANUAL_OPERATE_KD};



//  自瞄控制云台参数
//  YAW轴角速度环
#define YAW_SPEED_AIMBOT_OPERATE_KP             180.0f
#define YAW_SPEED_AIMBOT_OPERATE_KI             0.0f
#define YAW_SPEED_AIMBOT_OPERATE_KD             0.0f
fp32 YAW_SPEED_AIMBOT_OPERATE[3] = {YAW_SPEED_AIMBOT_OPERATE_KP, YAW_SPEED_AIMBOT_OPERATE_KI, YAW_SPEED_AIMBOT_OPERATE_KD};
//  YAW轴角度环
#define YAW_ANGLE_AIMBOT_OPERATE_KP             30.0f
#define YAW_ANGLE_AIMBOT_OPERATE_KI             0.0f
#define YAW_ANGLE_AIMBOT_OPERATE_KD             0.0f
fp32 YAW_ANGLE_AIMBOT_OPERATE[3] = {YAW_ANGLE_AIMBOT_OPERATE_KP, YAW_ANGLE_AIMBOT_OPERATE_KI, YAW_ANGLE_AIMBOT_OPERATE_KD};
//  PITCH轴角速度环
#define PITCH_SPEED_AIMBOT_OPERATE_KP           160.0f
#define PITCH_SPEED_AIMBOT_OPERATE_KI           0.0f
#define PITCH_SPEED_AIMBOT_OPERATE_KD           0.0f
fp32 PITCH_SPEED_AIMBOT_OPERATE[3] = {PITCH_SPEED_AIMBOT_OPERATE_KP, PITCH_SPEED_AIMBOT_OPERATE_KI, PITCH_SPEED_AIMBOT_OPERATE_KD};
//  PITCH轴角度环
#define PITCH_ANGLE_AIMBOT_OPERATE_KP           30.0f
#define PITCH_ANGLE_AIMBOT_OPERATE_KI           0.0f
#define PITCH_ANGLE_AIMBOT_OPERATE_KD           0.0f
fp32 PITCH_ANGLE_AIMBOT_OPERATE[3] = {PITCH_ANGLE_AIMBOT_OPERATE_KP, PITCH_ANGLE_AIMBOT_OPERATE_KI, PITCH_ANGLE_AIMBOT_OPERATE_KD};


//  打符云台参数
//  YAW轴角速度环
#define YAW_SPEED_AIMBOT_RUNES_KP               0.0f
#define YAW_SPEED_AIMBOT_RUNES_KI               0.0f
#define YAW_SPEED_AIMBOT_RUNES_KD               0.0f
fp32 YAW_SPEED_AIMBOT_RUNES[3] = {YAW_SPEED_AIMBOT_RUNES_KP, YAW_SPEED_AIMBOT_RUNES_KI, YAW_SPEED_AIMBOT_RUNES_KD};
//  YAW轴角度环
#define YAW_ANGLE_AIMBOT_RUNES_KP               0.0f
#define YAW_ANGLE_AIMBOT_RUNES_KI               0.0f
#define YAW_ANGLE_AIMBOT_RUNES_KD               0.0f
fp32 YAW_ANGLE_AIMBOT_RUNES[3] = {YAW_ANGLE_AIMBOT_RUNES_KP, YAW_ANGLE_AIMBOT_RUNES_KI, YAW_ANGLE_AIMBOT_RUNES_KD};
//  PITCH轴角速度环
#define PITCH_SPEED_AIMBOT_RUNES_KP             0.0f
#define PITCH_SPEED_AIMBOT_RUNES_KI             0.0f
#define PITCH_SPEED_AIMBOT_RUNES_KD             0.0f
fp32 PITCH_SPEED_AIMBOT_RUNES[3] = {PITCH_SPEED_AIMBOT_RUNES_KP, PITCH_SPEED_AIMBOT_RUNES_KI, PITCH_SPEED_AIMBOT_RUNES_KD};
//  PITCH轴角度环
#define PITCH_ANGLE_AIMBOT_RUNES_KP             0.0f
#define PITCH_ANGLE_AIMBOT_RUNES_KI             0.0f
#define PITCH_ANGLE_AIMBOT_RUNES_KD             0.0f
fp32 PITCH_ANGLE_AIMBOT_RUNES[3] = {PITCH_ANGLE_AIMBOT_RUNES_KP, PITCH_ANGLE_AIMBOT_RUNES_KI, PITCH_ANGLE_AIMBOT_RUNES_KD};


//  摩擦轮参数

#define AMMO_LEFT_SPEED_10MS_KP                 13.0f
#define AMMO_LEFT_SPEED_10MS_KI                 0.0f
#define AMMO_LEFT_SPEED_10MS_KD                 0.0f
fp32 AMMO_LEFT_SPEED_10MS[3] = {AMMO_LEFT_SPEED_10MS_KP, AMMO_LEFT_SPEED_10MS_KI, AMMO_LEFT_SPEED_10MS_KD};

#define AMMO_RIGHT_SPEED_10MS_KP                13.0f
#define AMMO_RIGHT_SPEED_10MS_KI                0.0f
#define AMMO_RIGHT_SPEED_10MS_KD                0.0f
fp32 AMMO_RIGHT_SPEED_10MS[3] = {AMMO_RIGHT_SPEED_10MS_KP, AMMO_RIGHT_SPEED_10MS_KI, AMMO_RIGHT_SPEED_10MS_KD};

#define AMMO_LEFT_SPEED_12MS_KP                 20.0f
#define AMMO_LEFT_SPEED_12MS_KI                 0.0f
#define AMMO_LEFT_SPEED_12MS_KD                 0.0f
fp32 AMMO_LEFT_SPEED_12MS[3] = {AMMO_LEFT_SPEED_12MS_KP, AMMO_LEFT_SPEED_12MS_KI, AMMO_LEFT_SPEED_12MS_KD};

#define AMMO_RIGHT_SPEED_12MS_KP                20.0f
#define AMMO_RIGHT_SPEED_12MS_KI                0.0f
#define AMMO_RIGHT_SPEED_12MS_KD                0.0f
fp32 AMMO_RIGHT_SPEED_12MS[3] = {AMMO_RIGHT_SPEED_12MS_KP, AMMO_RIGHT_SPEED_12MS_KI, AMMO_RIGHT_SPEED_12MS_KD};

#define AMMO_LEFT_SPEED_14MS_KP                 20.0f
#define AMMO_LEFT_SPEED_14MS_KI                 0.0f
#define AMMO_LEFT_SPEED_14MS_KD                 0.0f
fp32 AMMO_LEFT_SPEED_14MS[3] = {AMMO_LEFT_SPEED_14MS_KP, AMMO_LEFT_SPEED_14MS_KI, AMMO_LEFT_SPEED_14MS_KD};

#define AMMO_RIGHT_SPEED_14MS_KP                20.0f
#define AMMO_RIGHT_SPEED_14MS_KI                0.0f
#define AMMO_RIGHT_SPEED_14MS_KD                0.0f
fp32 AMMO_RIGHT_SPEED_14MS[3] = {AMMO_RIGHT_SPEED_14MS_KP, AMMO_RIGHT_SPEED_14MS_KI, AMMO_RIGHT_SPEED_14MS_KD};

#define AMMO_LEFT_SPEED_15MS_KP                 20.0f
#define AMMO_LEFT_SPEED_15MS_KI                 0.0f
#define AMMO_LEFT_SPEED_15MS_KD                 0.0f
fp32 AMMO_LEFT_SPEED_15MS[3] = {AMMO_LEFT_SPEED_15MS_KP, AMMO_LEFT_SPEED_15MS_KI, AMMO_LEFT_SPEED_15MS_KD};

#define AMMO_RIGHT_SPEED_15MS_KP                13.0f
#define AMMO_RIGHT_SPEED_15MS_KI                0.0f
#define AMMO_RIGHT_SPEED_15MS_KD                0.0f
fp32 AMMO_RIGHT_SPEED_15MS[3] = {AMMO_RIGHT_SPEED_15MS_KP, AMMO_RIGHT_SPEED_15MS_KI, AMMO_RIGHT_SPEED_15MS_KD};

#define AMMO_LEFT_SPEED_16MS_KP                 13.0f
#define AMMO_LEFT_SPEED_16MS_KI                 0.0f
#define AMMO_LEFT_SPEED_16MS_KD                 0.0f
fp32 AMMO_LEFT_SPEED_16MS[3] = {AMMO_LEFT_SPEED_16MS_KP, AMMO_LEFT_SPEED_16MS_KI, AMMO_LEFT_SPEED_16MS_KD};

#define AMMO_RIGHT_SPEED_16MS_KP                20.0f
#define AMMO_RIGHT_SPEED_16MS_KI                0.0f
#define AMMO_RIGHT_SPEED_16MS_KD                0.0f
fp32 AMMO_RIGHT_SPEED_16MS[3] = {AMMO_RIGHT_SPEED_16MS_KP, AMMO_RIGHT_SPEED_16MS_KI, AMMO_RIGHT_SPEED_16MS_KD};

#define AMMO_LEFT_SPEED_18MS_KP                 20.0f
#define AMMO_LEFT_SPEED_18MS_KI                 0.0f
#define AMMO_LEFT_SPEED_18MS_KD                 0.0f
fp32 AMMO_LEFT_SPEED_18MS[3] = {AMMO_LEFT_SPEED_18MS_KP, AMMO_LEFT_SPEED_18MS_KI, AMMO_LEFT_SPEED_18MS_KD};

#define AMMO_RIGHT_SPEED_18MS_KP                20.0f
#define AMMO_RIGHT_SPEED_18MS_KI                0.0f
#define AMMO_RIGHT_SPEED_18MS_KD                0.0f
fp32 AMMO_RIGHT_SPEED_18MS[3] = {AMMO_RIGHT_SPEED_18MS_KP, AMMO_RIGHT_SPEED_18MS_KI, AMMO_RIGHT_SPEED_18MS_KD};

#define AMMO_LEFT_SPEED_22MS_KP                 20.0f
#define AMMO_LEFT_SPEED_22MS_KI                 0.0f
#define AMMO_LEFT_SPEED_22MS_KD                 0.0f
fp32 AMMO_LEFT_SPEED_22MS[3] = {AMMO_LEFT_SPEED_22MS_KP, AMMO_LEFT_SPEED_22MS_KI, AMMO_LEFT_SPEED_22MS_KD};

#define AMMO_RIGHT_SPEED_22MS_KP                20.0f
#define AMMO_RIGHT_SPEED_22MS_KI                0.0f
#define AMMO_RIGHT_SPEED_22MS_KD                0.0f
fp32 AMMO_RIGHT_SPEED_22MS[3] = {AMMO_RIGHT_SPEED_22MS_KP, AMMO_RIGHT_SPEED_22MS_KI, AMMO_RIGHT_SPEED_22MS_KD};

#define AMMO_LEFT_SPEED_30MS_KP                 20.0f
#define AMMO_LEFT_SPEED_30MS_KI                 0.0f
#define AMMO_LEFT_SPEED_30MS_KD                 0.0f
fp32 AMMO_LEFT_SPEED_30MS[3] = {AMMO_LEFT_SPEED_30MS_KP, AMMO_LEFT_SPEED_30MS_KI, AMMO_LEFT_SPEED_30MS_KD};

#define AMMO_RIGHT_SPEED_30MS_KP                20.0f
#define AMMO_RIGHT_SPEED_30MS_KI                0.0f
#define AMMO_RIGHT_SPEED_30MS_KD                0.0f
fp32 AMMO_RIGHT_SPEED_30MS[3] = {AMMO_RIGHT_SPEED_30MS_KP, AMMO_RIGHT_SPEED_30MS_KI, AMMO_RIGHT_SPEED_30MS_KD};



#define ROTOR_UNABLE_KP                         0.0f
#define ROTOR_UNABLE_KI                         0.0f
#define ROTOR_UNABLE_KD                         0.0f
fp32 ROTOR_UNABLE[3] = {ROTOR_UNABLE_KP, ROTOR_UNABLE_KI, ROTOR_UNABLE_KD};

#define ROTOR_FORWARD_KP                        120.0f
#define ROTOR_FORWARD_KI                        0.0f
#define ROTOR_FORWARD_KD                        0.0f
fp32 ROTOR_FORWARD[3] = {ROTOR_FORWARD_KP, ROTOR_FORWARD_KI, ROTOR_FORWARD_KD};

#define ROTOR_STOP_KP                           30.0f
#define ROTOR_STOP_KI                           0.0f
#define ROTOR_STOP_KD                           0.0f
fp32 ROTOR_STOP[3] = {ROTOR_STOP_KP, ROTOR_STOP_KI, ROTOR_STOP_KD};

#define ROTOR_BACK_KP                           60.0f
#define ROTOR_BACK_KI                           0.0f
#define ROTOR_BACK_KD                           0.0f
fp32 ROTOR_BACK[3] = {ROTOR_BACK_KP, ROTOR_BACK_KI, ROTOR_BACK_KD};

#endif
