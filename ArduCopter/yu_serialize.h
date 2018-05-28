
void *_memoize[4096] ;
int _memoizeMax ;


void __deserialize___anonstruct_rangefinder_state_3(struct __anonstruct_rangefinder_state_3 *ptr ,
                                                    int fd ) ;
void __serialize___anonstruct_gndeffect_state_9(struct __anonstruct_gndeffect_state_9 *ptr ,
                                                int fd ) ;
void __deserialize_scalarInt16(short *ptr , int fd ) ;
void __serialize_Content(union Content *ptr , int fd ) ;
void __deserialize___anonstruct_sensor_health_8(struct __anonstruct_sensor_health_8 *ptr ,
                                                int fd ) ;
void __serialize_control_mode_t(enum control_mode_t *ptr , int fd ) ;
void __serialize___anonstruct_sensor_health_8(struct __anonstruct_sensor_health_8 *ptr ,
                                              int fd ) ;
void __deserialize_scalarFloat32(float *ptr , int fd ) ;
void __serialize_AP_Mission(struct AP_Mission *ptr , int fd ) ;
void __deserialize_mission_state(mission_state *ptr , int fd ) ;
void __serialize_scalarInt8(unsigned char *ptr , int fd ) ;
void __serialize___anonstruct_rangefinder_state_3(struct __anonstruct_rangefinder_state_3 *ptr ,
                                                  int fd ) ;
void __deserialize_Content(union Content *ptr , int fd ) ;
void __deserialize___anonstruct_control_switch_state_6(struct __anonstruct_control_switch_state_6 *ptr ,
                                                       int fd ) ;
void __serialize_Copter(struct Copter *ptr , int fd ) ;
void __deserialize_Mission_Flags(Mission_Flags *ptr , int fd ) ;
void __deserialize_Mission_Command(Mission_Command *ptr , int fd ) ;
void __serialize_mode_reason_t(enum mode_reason_t *ptr , int fd ) ;
void __deserialize___anonstruct_gndeffect_state_9(struct __anonstruct_gndeffect_state_9 *ptr ,
                                                  int fd ) ;
void __deserialize_control_mode_t(enum control_mode_t *ptr , int fd ) ;
void __deserialize_Copter(struct Copter *ptr , int fd ) ;
void __serialize___anonstruct_failsafe_7(struct __anonstruct_failsafe_7 *ptr , int fd ) ;
void __deserialize_scalarInt32(unsigned int *ptr , int fd ) ;
void __serialize_scalarFloat32(float *ptr , int fd ) ;
void __deserialize_mode_reason_t(enum mode_reason_t *ptr , int fd ) ;
void __serialize_Mission_Command(Mission_Command *ptr , int fd ) ;
void __serialize_scalarInt32(unsigned int *ptr , int fd ) ;
//void __deserialize___anonunion_ap_t_4(union __anonunion_ap_t_4 *ptr , int fd ) ;
void __deserialize_scalarInt8(unsigned char *ptr , int fd ) ;
void __serialize_Mission_Flags(Mission_Flags *ptr , int fd ) ;
void __serialize_mission_state(mission_state *ptr , int fd ) ;
void __deserialize_AP_Mission(struct AP_Mission *ptr , int fd ) ;
//void __serialize___anonunion_ap_t_4(union __anonunion_ap_t_4 *ptr , int fd ) ;
void __serialize_scalarInt16(short *ptr , int fd ) ;
void __serialize___anonstruct_control_switch_state_6(struct __anonstruct_control_switch_state_6 *ptr ,
                                                     int fd ) ;
void __deserialize___anonstruct_failsafe_7(struct __anonstruct_failsafe_7 *ptr , int fd ) ;
void __deserialize___anonstruct_rangefinder_state_3(struct __anonstruct_rangefinder_state_3 *ptr ,
                                                    int fd ) 
{ 
  bool enabled3 ;
  bool alt_healthy4 ;

  {

}
}
void __serialize___anonstruct_gndeffect_state_9(struct __anonstruct_gndeffect_state_9 *ptr ,
                                                int fd ) 
{ 


  {

}
}
void __deserialize_scalarInt16(short *ptr , int fd ) 
{ 


  {
  read(fd, ptr, 2);
}
}
void __serialize_Content(union Content *ptr , int fd ) 
{ 


  {
  write(fd, ptr, 12);
}
}
void __deserialize___anonstruct_sensor_health_8(struct __anonstruct_sensor_health_8 *ptr ,
                                                int fd ) 
{ 
  uint8_t baro3 ;
  uint8_t compass4 ;

  {

}
}
void __serialize_control_mode_t(enum control_mode_t *ptr , int fd ) 
{ 


  {
  write(fd, ptr, 4);
}
}
void __serialize___anonstruct_sensor_health_8(struct __anonstruct_sensor_health_8 *ptr ,
                                              int fd ) 
{ 
  uint8_t baro3 ;
  uint8_t compass4 ;

  {

}
}
void __deserialize_scalarFloat32(float *ptr , int fd ) 
{ 


  {
  read(fd, ptr, 4);
}
}
void __serialize_AP_Mission(struct AP_Mission *ptr , int fd ) 
{ 


  {
  __serialize_Mission_Flags((Mission_Flags *)(& ptr->_flags), fd);
  __serialize_scalarInt16((short *)(& ptr->_cmd_total), fd);
  __serialize_scalarInt8((unsigned char *)(& ptr->_restart), fd);
  __serialize_scalarInt16((short *)(& ptr->_options), fd);
  __serialize_Mission_Command((Mission_Command *)(& ptr->_nav_cmd), fd);
  __serialize_Mission_Command((Mission_Command *)(& ptr->_do_cmd), fd);
  __serialize_scalarInt16((short *)(& ptr->_prev_nav_cmd_id), fd);
  __serialize_scalarInt16((short *)(& ptr->_prev_nav_cmd_index), fd);
  __serialize_scalarInt16((short *)(& ptr->_prev_nav_cmd_wp_index), fd);
  __serialize_scalarInt32((unsigned int *)(& ptr->_last_change_time_ms), fd);
}
}
void __deserialize_mission_state(mission_state *ptr , int fd ) 
{ 


  {
  read(fd, ptr, 4);
}
}
void __serialize_scalarInt8(unsigned char *ptr , int fd ) 
{ 


  {
  write(fd, ptr, 1);
}
}
void __serialize___anonstruct_rangefinder_state_3(struct __anonstruct_rangefinder_state_3 *ptr ,
                                                  int fd ) 
{ 
  bool enabled3 ;
  bool alt_healthy4 ;

  {

}
}
void __deserialize_Content(union Content *ptr , int fd ) 
{ 


  {
  read(fd, ptr, 12);
}
}
void __deserialize___anonstruct_control_switch_state_6(struct __anonstruct_control_switch_state_6 *ptr ,
                                                       int fd ) 
{ 


  {

}
}
void __serialize_Copter(struct Copter *ptr , int fd ) 
{ 


  {
  __serialize_scalarInt8((unsigned char *)(& ptr->command_ack_counter), fd);
  __serialize___anonstruct_rangefinder_state_3((struct __anonstruct_rangefinder_state_3 *)(& ptr->rangefinder_state),
                                               fd);
  __serialize_AP_Mission((struct AP_Mission *)(& ptr->mission), fd);
  __serialize_scalarFloat32((float *)(& ptr->ekfGndSpdLimit), fd);
  __serialize_scalarFloat32((float *)(& ptr->ekfNavVelGainScaler), fd);
  __serialize_scalarInt8((unsigned char *)(& ptr->ekf_primary_core), fd);
 // __serialize___anonunion_ap_t_4((union __anonunion_ap_t_4 *)(& ptr->ap_t), fd);
  __serialize_control_mode_t((enum control_mode_t *)(& ptr->control_mode), fd);
  __serialize_mode_reason_t((enum mode_reason_t *)(& ptr->control_mode_reason), fd);
  __serialize_control_mode_t((enum control_mode_t *)(& ptr->prev_control_mode), fd);
  __serialize_mode_reason_t((enum mode_reason_t *)(& ptr->prev_control_mode_reason),
                            fd);
  __serialize___anonstruct_control_switch_state_6((struct __anonstruct_control_switch_state_6 *)(& ptr->control_switch_state),
                                                  fd);
  __serialize_scalarFloat32((float *)(& ptr->auto_takeoff_no_nav_alt_cm), fd);
  __serialize_scalarInt8((unsigned char *)(& ptr->receiver_rssi), fd);
  __serialize___anonstruct_failsafe_7((struct __anonstruct_failsafe_7 *)(& ptr->failsafe),
                                      fd);
  __serialize___anonstruct_sensor_health_8((struct __anonstruct_sensor_health_8 *)(& ptr->sensor_health),
                                           fd);
  __serialize_scalarFloat32((float *)(& ptr->scaleLongDown), fd);
  __serialize_scalarInt32((unsigned int *)(& ptr->_home_bearing), fd);
  __serialize_scalarInt32((unsigned int *)(& ptr->_home_distance), fd);
  __serialize_scalarFloat32((float *)(& ptr->simple_cos_yaw), fd);
  __serialize_scalarFloat32((float *)(& ptr->simple_sin_yaw), fd);
  __serialize_scalarInt32((unsigned int *)(& ptr->super_simple_last_bearing), fd);
  __serialize_scalarFloat32((float *)(& ptr->super_simple_cos_yaw), fd);
  __serialize_scalarFloat32((float *)(& ptr->super_simple_sin_yaw), fd);
  __serialize_scalarInt32((unsigned int *)(& ptr->initial_armed_bearing), fd);
  __serialize_scalarInt32((unsigned int *)(& ptr->control_sensors_present), fd);
  __serialize_scalarInt32((unsigned int *)(& ptr->control_sensors_enabled), fd);
  __serialize_scalarInt32((unsigned int *)(& ptr->control_sensors_health), fd);
  __serialize_scalarInt16((short *)(& ptr->climb_rate), fd);
  __serialize_scalarFloat32((float *)(& ptr->target_rangefinder_alt), fd);
  __serialize_scalarInt32((unsigned int *)(& ptr->baro_alt), fd);
  __serialize_scalarFloat32((float *)(& ptr->baro_climbrate), fd);
  __serialize_scalarInt8((unsigned char *)(& ptr->auto_yaw_mode), fd);
  __serialize_scalarFloat32((float *)(& ptr->yaw_look_at_WP_bearing), fd);
  __serialize_scalarInt32((unsigned int *)(& ptr->yaw_look_at_heading), fd);
  __serialize_scalarInt16((short *)(& ptr->yaw_look_at_heading_slew), fd);
  __serialize_scalarFloat32((float *)(& ptr->yaw_look_ahead_bearing), fd);
  __serialize_scalarFloat32((float *)(& ptr->auto_yaw_rate_cds), fd);
  __serialize_scalarFloat32((float *)(& ptr->G_Dt), fd);
  __serialize_scalarInt16((short *)(& ptr->pmTest1), fd);
  __serialize_scalarInt32((unsigned int *)(& ptr->fast_loopTimer), fd);
  __serialize_scalarInt16((short *)(& ptr->mainLoop_count), fd);
  __serialize_scalarInt32((unsigned int *)(& ptr->arm_time_ms), fd);
  __serialize_scalarInt8((unsigned char *)(& ptr->auto_trim_counter), fd);
  __serialize_scalarInt8((unsigned char *)(& ptr->in_mavlink_delay), fd);
  __serialize_scalarInt32((unsigned int *)(& ptr->last_radio_update_ms), fd);
  __serialize_scalarInt32((unsigned int *)(& ptr->esc_calibration_notify_update_ms),
                          fd);
  __serialize_scalarInt32((unsigned int *)(& ptr->visual_odom_last_update_ms), fd);
  //__serialize_scalarInt16((short *)(& ptr->hover_roll_trim_scalar_slew), fd);
  __serialize___anonstruct_gndeffect_state_9((struct __anonstruct_gndeffect_state_9 *)(& ptr->gndeffect_state),
                                             fd);
  __serialize_scalarInt8((unsigned char *)(& ptr->upgrading_frame_params), fd);
}
}
void __deserialize_Mission_Flags(Mission_Flags *ptr , int fd ) 
{ 
  uint8_t nav_cmd_loaded3 ;
  uint8_t do_cmd_loaded4 ;
  uint8_t do_cmd_all_done5 ;

  {
  __deserialize_mission_state((mission_state *)(& ptr->state), fd);
  __deserialize_scalarInt8(& nav_cmd_loaded3, fd);
  ptr->nav_cmd_loaded = nav_cmd_loaded3;
  __deserialize_scalarInt8(& do_cmd_loaded4, fd);
  ptr->do_cmd_loaded = do_cmd_loaded4;
  __deserialize_scalarInt8(& do_cmd_all_done5, fd);
  ptr->do_cmd_all_done = do_cmd_all_done5;
}
}
void __deserialize_Mission_Command(Mission_Command *ptr , int fd ) 
{ 


  {
  __deserialize_scalarInt16((short *)(& ptr->index), fd);
  __deserialize_scalarInt16((short *)(& ptr->id), fd);
  __deserialize_scalarInt16((short *)(& ptr->p1), fd);
  __deserialize_Content((union Content *)(& ptr->content), fd);
}
}
void __serialize_mode_reason_t(enum mode_reason_t *ptr , int fd ) 
{ 


  {
  write(fd, ptr, 4);
}
}
void __deserialize___anonstruct_gndeffect_state_9(struct __anonstruct_gndeffect_state_9 *ptr ,
                                                  int fd ) 
{ 


  {

}
}
void __deserialize_control_mode_t(enum control_mode_t *ptr , int fd ) 
{ 


  {
  read(fd, ptr, 4);
}
}
void __deserialize_Copter(struct Copter *ptr , int fd ) 
{ 


  {
  __deserialize_scalarInt8((unsigned char *)(& ptr->command_ack_counter), fd);
  __deserialize___anonstruct_rangefinder_state_3((struct __anonstruct_rangefinder_state_3 *)(& ptr->rangefinder_state),
                                                 fd);
  __deserialize_AP_Mission((struct AP_Mission *)(& ptr->mission), fd);
  __deserialize_scalarFloat32((float *)(& ptr->ekfGndSpdLimit), fd);
  __deserialize_scalarFloat32((float *)(& ptr->ekfNavVelGainScaler), fd);
  __deserialize_scalarInt8((unsigned char *)(& ptr->ekf_primary_core), fd);
 // __deserialize___anonunion_ap_t_4((union __anonunion_ap_t_4 *)(& ptr->ap_t), fd);
  __deserialize_control_mode_t((enum control_mode_t *)(& ptr->control_mode), fd);
  __deserialize_mode_reason_t((enum mode_reason_t *)(& ptr->control_mode_reason),
                              fd);
  __deserialize_control_mode_t((enum control_mode_t *)(& ptr->prev_control_mode),
                               fd);
  __deserialize_mode_reason_t((enum mode_reason_t *)(& ptr->prev_control_mode_reason),
                              fd);
  __deserialize___anonstruct_control_switch_state_6((struct __anonstruct_control_switch_state_6 *)(& ptr->control_switch_state),
                                                    fd);
  __deserialize_scalarFloat32((float *)(& ptr->auto_takeoff_no_nav_alt_cm), fd);
  __deserialize_scalarInt8((unsigned char *)(& ptr->receiver_rssi), fd);
  __deserialize___anonstruct_failsafe_7((struct __anonstruct_failsafe_7 *)(& ptr->failsafe),
                                        fd);
  __deserialize___anonstruct_sensor_health_8((struct __anonstruct_sensor_health_8 *)(& ptr->sensor_health),
                                             fd);
  __deserialize_scalarFloat32((float *)(& ptr->scaleLongDown), fd);
  __deserialize_scalarInt32((unsigned int *)(& ptr->_home_bearing), fd);
  __deserialize_scalarInt32((unsigned int *)(& ptr->_home_distance), fd);
  __deserialize_scalarFloat32((float *)(& ptr->simple_cos_yaw), fd);
  __deserialize_scalarFloat32((float *)(& ptr->simple_sin_yaw), fd);
  __deserialize_scalarInt32((unsigned int *)(& ptr->super_simple_last_bearing), fd);
  __deserialize_scalarFloat32((float *)(& ptr->super_simple_cos_yaw), fd);
  __deserialize_scalarFloat32((float *)(& ptr->super_simple_sin_yaw), fd);
  __deserialize_scalarInt32((unsigned int *)(& ptr->initial_armed_bearing), fd);
  __deserialize_scalarInt32((unsigned int *)(& ptr->control_sensors_present), fd);
  __deserialize_scalarInt32((unsigned int *)(& ptr->control_sensors_enabled), fd);
  __deserialize_scalarInt32((unsigned int *)(& ptr->control_sensors_health), fd);
  __deserialize_scalarInt16((short *)(& ptr->climb_rate), fd);
  __deserialize_scalarFloat32((float *)(& ptr->target_rangefinder_alt), fd);
  __deserialize_scalarInt32((unsigned int *)(& ptr->baro_alt), fd);
  __deserialize_scalarFloat32((float *)(& ptr->baro_climbrate), fd);
  __deserialize_scalarInt8((unsigned char *)(& ptr->auto_yaw_mode), fd);
  __deserialize_scalarFloat32((float *)(& ptr->yaw_look_at_WP_bearing), fd);
  __deserialize_scalarInt32((unsigned int *)(& ptr->yaw_look_at_heading), fd);
  __deserialize_scalarInt16((short *)(& ptr->yaw_look_at_heading_slew), fd);
  __deserialize_scalarFloat32((float *)(& ptr->yaw_look_ahead_bearing), fd);
  __deserialize_scalarFloat32((float *)(& ptr->auto_yaw_rate_cds), fd);
  __deserialize_scalarFloat32((float *)(& ptr->G_Dt), fd);
  __deserialize_scalarInt16((short *)(& ptr->pmTest1), fd);
  __deserialize_scalarInt32((unsigned int *)(& ptr->fast_loopTimer), fd);
  __deserialize_scalarInt16((short *)(& ptr->mainLoop_count), fd);
  __deserialize_scalarInt32((unsigned int *)(& ptr->arm_time_ms), fd);
  __deserialize_scalarInt8((unsigned char *)(& ptr->auto_trim_counter), fd);
  __deserialize_scalarInt8((unsigned char *)(& ptr->in_mavlink_delay), fd);
  __deserialize_scalarInt32((unsigned int *)(& ptr->last_radio_update_ms), fd);
  __deserialize_scalarInt32((unsigned int *)(& ptr->esc_calibration_notify_update_ms),
                            fd);
  __deserialize_scalarInt32((unsigned int *)(& ptr->visual_odom_last_update_ms), fd);
  //__deserialize_scalarInt16((short *)(& ptr->hover_roll_trim_scalar_slew), fd);
  __deserialize___anonstruct_gndeffect_state_9((struct __anonstruct_gndeffect_state_9 *)(& ptr->gndeffect_state),
                                               fd);
  __deserialize_scalarInt8((unsigned char *)(& ptr->upgrading_frame_params), fd);
}
}
void __serialize___anonstruct_failsafe_7(struct __anonstruct_failsafe_7 *ptr , int fd ) 
{ 
  uint8_t rc_override_active3 ;
  uint8_t radio4 ;
  uint8_t battery5 ;
  uint8_t gcs6 ;
  uint8_t ekf7 ;
  uint8_t terrain8 ;
  uint8_t adsb9 ;

  {

}
}
void __deserialize_scalarInt32(unsigned int *ptr , int fd ) 
{ 


  {
  read(fd, ptr, 4);
}
}
void __serialize_scalarFloat32(float *ptr , int fd ) 
{ 


  {
  write(fd, ptr, 4);
}
}
void __deserialize_mode_reason_t(enum mode_reason_t *ptr , int fd ) 
{ 


  {
  read(fd, ptr, 4);
}
}
void __serialize_Mission_Command(Mission_Command *ptr , int fd ) 
{ 


  {
  __serialize_scalarInt16((short *)(& ptr->index), fd);
  __serialize_scalarInt16((short *)(& ptr->id), fd);
  __serialize_scalarInt16((short *)(& ptr->p1), fd);
  __serialize_Content((union Content *)(& ptr->content), fd);
}
}
void __serialize_scalarInt32(unsigned int *ptr , int fd ) 
{ 


  {
  write(fd, ptr, 4);
}
}
void __deserialize___anonunion_ap_t_4(union __anonunion_ap_t_4 *ptr , int fd ) 
{ 


  {

}
}
void __deserialize_scalarInt8(unsigned char *ptr , int fd ) 
{ 


  {
  read(fd, ptr, 1);
}
}
void __serialize_Mission_Flags(Mission_Flags *ptr , int fd ) 
{ 
  uint8_t nav_cmd_loaded3 ;
  uint8_t do_cmd_loaded4 ;
  uint8_t do_cmd_all_done5 ;

  {
  __serialize_mission_state((mission_state *)(& ptr->state), fd);
  nav_cmd_loaded3 = ptr->nav_cmd_loaded;
  __serialize_scalarInt8(& nav_cmd_loaded3, fd);
  do_cmd_loaded4 = ptr->do_cmd_loaded;
  __serialize_scalarInt8(& do_cmd_loaded4, fd);
  do_cmd_all_done5 = ptr->do_cmd_all_done;
  __serialize_scalarInt8(& do_cmd_all_done5, fd);
}
}
void __serialize_mission_state(mission_state *ptr , int fd ) 
{ 


  {
  write(fd, ptr, 4);
}
}
void __deserialize_AP_Mission(struct AP_Mission *ptr , int fd ) 
{ 


  {
  __deserialize_Mission_Flags((Mission_Flags *)(& ptr->_flags), fd);
  __deserialize_scalarInt16((short *)(& ptr->_cmd_total), fd);
  __deserialize_scalarInt8((unsigned char *)(& ptr->_restart), fd);
  __deserialize_scalarInt16((short *)(& ptr->_options), fd);
  __deserialize_Mission_Command((Mission_Command *)(& ptr->_nav_cmd), fd);
  __deserialize_Mission_Command((Mission_Command *)(& ptr->_do_cmd), fd);
  __deserialize_scalarInt16((short *)(& ptr->_prev_nav_cmd_id), fd);
  __deserialize_scalarInt16((short *)(& ptr->_prev_nav_cmd_index), fd);
  __deserialize_scalarInt16((short *)(& ptr->_prev_nav_cmd_wp_index), fd);
  __deserialize_scalarInt32((unsigned int *)(& ptr->_last_change_time_ms), fd);
}
}
void __serialize___anonunion_ap_t_4(union __anonunion_ap_t_4 *ptr , int fd ) 
{ 


  {

}
}
void __serialize_scalarInt16(short *ptr , int fd ) 
{ 


  {
  write(fd, ptr, 2);
}
}
void __serialize___anonstruct_control_switch_state_6(struct __anonstruct_control_switch_state_6 *ptr ,
                                                     int fd ) 
{ 


  {

}
}
void __deserialize___anonstruct_failsafe_7(struct __anonstruct_failsafe_7 *ptr , int fd ) 
{ 
  uint8_t rc_override_active3 ;
  uint8_t radio4 ;
  uint8_t battery5 ;
  uint8_t gcs6 ;
  uint8_t ekf7 ;
  uint8_t terrain8 ;
  uint8_t adsb9 ;

  {

}
}
