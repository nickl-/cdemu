/*
 *  CDEmuD: Sense keys, ASC/ASCQ combinations
 *  Copyright (C) 2006-2008 Rok Mandeljc
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef __CDEMUD_SENSE_CONSTANTS_H__
#define __CDEMUD_SENSE_CONSTANTS_H__

/* Macro that combines sense key and ASC/ASQC code */
#define MAKE_STATUS(status, sense_key, code) ((status << 24) | (sense_key << 16) | code)

/* Status codes */
#define STATUS_GOOD             0x00
#define STATUS_CHECK_CONDITION  0x02

/* SENSE KEYs */
#define SK_NO_SENSE         0x00
#define SK_RECOVERED_ERROR  0x01
#define SK_NOT_READY        0x02
#define SK_MEDIUM_ERROR     0x03
#define SK_HARDWARE_ERROR   0x04
#define SK_ILLEGAL_REQUEST  0x05
#define SK_UNIT_ATTENTION   0x06
#define SK_DATA_PROTECT     0x07
#define SK_BLANK_CHECK      0x08
#define SK_VENDOR_SPECIFIC  0x09
#define SK_COPY_ABORTED     0x0A
#define SK_ABORTED_COMMAND  0x0B
#define SK_Obsolete         0x0C
#define SK_VOLUME_OVERFLOW  0x0D
#define SK_MISCOMPARE       0x0E
#define SK_Reserved         0x0F

/* ASC/ASQC as defined for CD/DVD-ROMs in SPC-3 */
#define ACCESS_DENIED_ACL_LUN_CONFLICT                                  0x200B
#define ACCESS_DENIED_ENROLLMENT_CONFLICT                               0x2008
#define ACCESS_DENIED_INITIATOR_PENDING_ENROLLED                        0x2001
#define ACCESS_DENIED_INVALID_LU_IDENTIFIER                             0x2009
#define ACCESS_DENIED_INVALID_MGMT_ID_KEY                               0x2003
#define ACCESS_DENIED_INVALID_PROXY_TOKEN                               0x200A
#define ACCESS_DENIED_NO_ACCESS_RIGHTS                                  0x2002
#define ACK_NAK_TIMEOUT                                                 0x4B03
#define ASSOCIATED_WRITE_PROTECT                                        0x2703
#define ASYMMETRIC_ACCESS_STATE_CHANGED                                 0x2A06
#define ASYNCHRONOUS_INFORMATION_PROTECTION_ERROR_DETECTED              0x4704
#define AUDIO_PLAY_OPERATION_IN_PROGRESS                                0x0011
#define AUDIO_PLAY_OPERATION_PAUSED                                     0x0012
#define AUDIO_PLAY_OPERATION_STOPPED_DUE_TO_ERROR                       0x0014
#define AUDIO_PLAY_OPERATION_SUCCESSFULLY_COMPLETED                     0x0013
#define AUXILIARY_MEMORY_OUT_OF_SPACE                                   0x5506
#define AUXILIARY_MEMORY_READ_ERROR                                     0x1112
#define AUXILIARY_MEMORY_WRITE_ERROR                                    0x0C0B
#define BUS_DEVICE_RESET_FUNCTION_OCCURRED                              0x2903
#define CANNOT_DECOMPRESS_USING_DECLARED_ALGORITHM                      0x110E
#define CANNOT_FORMAT_MEDIUM_INCOMPATIBLE_MEDIUM                        0x3006
#define CANNOT_READ_MEDIUM_INCOMPATIBLE_FORMAT                          0x3002
#define CANNOT_READ_MEDIUM_UNKNOWN_FORMAT                               0x3001
#define CANNOT_WRITE_APPLICATION_CODE_MISMATCH                          0x3008
#define CANNOT_WRITE_MEDIUM_INCOMPATIBLE_FORMAT                         0x3005
#define CANNOT_WRITE_MEDIUM_UNKNOWN_FORMAT                              0x3004
#define CD_CONTROL_ERROR                                                0x7300
#define CDB_DECRYPTION_ERROR                                            0x2401
#define CHANGED_OPERATING_DEFINITION                                    0x3F02
#define CIRC_UNRECOVERED_ERROR                                          0x1106
#define CLEANING_CARTRIDGE_INSTALLED                                    0x3003
#define CLEANING_FAILURE                                                0x3007
#define CLEANING_REQUEST_REJECTED                                       0x300A
#define CLEANING_REQUESTED                                              0x0017
#define COMMAND_PHASE_ERROR                                             0x4A00
#define COMMAND_SEQUENCE_ERROR                                          0x2C00
#define COMMANDS_CLEARED_BY_ANOTHER_INITIATOR                           0x2F00
#define COMPONENT_DEVICE_ATTACHED                                       0x3F04
#define CONDITIONAL_WRITE_PROTECT                                       0x2706
#define CANNOT_EXECUTE_SINCE_HOST_CANNOT_DISCONNECT                     0x2B00
#define COPY_PROTECTION_KEY_EXCHANGE_FAILURE_AUTHENTICATION_FAILURE     0x6F00
#define COPY_PROTECTION_KEY_EXCHANGE_FAILURE_KEY_NOT_ESTABLISHED        0x6F02
#define COPY_PROTECTION_KEY_EXCHANGE_FAILURE_KEY_NOT_PRESENT            0x6F01
#define COPY_SEGMENT_GRANULARITY_VIOLATION                              0x260D
#define COPY_TARGET_DEVICE_DATA_OVERRUN                                 0x0D05
#define COPY_TARGET_DEVICE_DATA_UNDERRUN                                0x0D04
#define COPY_TARGET_DEVICE_NOT_REACHABLE                                0x0D02
#define CURRENT_PROGRAM_AREA_IS_EMPTY                                   0x2C04
#define CURRENT_PROGRAM_AREA_IS_NOT_EMPTY                               0x2C03
#define CURRENT_SESSION_NOT_FIXATED_FOR_APPEND                          0x3009
#define DATA_DECRYPTION_ERROR                                           0x2605
#define DATA_OFFSET_ERROR                                               0x4B05
#define DATA_PHASE_CRC_ERROR_DETECTED                                   0x4701
#define DATA_PHASE_ERROR                                                0x4B00
#define DECOMPRESSION_CRC_ERROR                                         0x110D
#define DEVICE_IDENTIFIER_CHANGED                                       0x3F05
#define DEVICE_INTERNAL_RESET                                           0x2904
#define DRIVE_REGION_MUST_BE_PERMANENT                                  0x6F05
#define REGION_RESET_COUNT_ERROR                                        0x6F05
#define ECHO_BUFFER_OVERWRITTEN                                         0x3F0F
#define EMPTY_OR_PARTIALLY_WRITTEN_RESERVED_TRACK                       0x7204
#define ENCLOSURE_FAILURE                                               0x3400
#define ENCLOSURE_SERVICES_CHECKSUM_ERROR                               0x3505
#define ENCLOSURE_SERVICES_FAILURE                                      0x3500
#define ENCLOSURE_SERVICES_TRANSFER_FAILURE                             0x3503
#define ENCLOSURE_SERVICES_TRANSFER_REFUSED                             0x3504
#define ENCLOSURE_SERVICES_UNAVAILABLE                                  0x3502
#define END_OF_MEDIUM_REACHED                                           0x3B0F
#define END_OF_USER_AREA_ENCOUNTERED_ON_THIS_TRACK                      0x6300
#define ERASE_FAILURE                                                   0x5100
#define ERASE_FAILURE_INCOMPLETE_ERASE_OPERATION_DETECTED               0x5101
#define ERROR_DETECTED_BY_THIRD_PARTY_TEMPORARY_INITIATOR               0x0D00
#define ERROR_LOG_OVERFLOW                                              0x0A00
#define ERROR_READING_ISRC_NUMBER                                       0x1110
#define ERROR_READING_UPC_EAN_NUMBER                                    0x110F
#define ERROR_TOO_LONG_TO_CORRECT                                       0x1102
#define FAILURE_PREDICTION_THRESHOLD_EXCEEDED                           0x5D00
#define FAILURE_PREDICTION_THRESHOLD_EXCEEDED_FALSE                     0x5DFF
#define FOCUS_SERVO_FAILURE                                             0x0902
#define FORMAT_COMMAND_FAILED                                           0x3101
#define HARDWARE_WRITE_PROTECTED                                        0x2701
#define HEAD_SELECT_FAULT                                               0x0904
#define IO_PROCESS_TERMINATED                                           0x0006
#define IDLE_CONDITION_ACTIVATED_BY_COMMAND                             0x5E03
#define IDLE_CONDITION_ACTIVATED_BY_TIMER                               0x5E01
#define ILLEGAL_MODE_FOR_THIS_TRACK                                     0x6400
#define IMPLICIT_ASYMMETRIC_ACCESS_STATE_TRANSITION_FAILED              0x2A07
#define IMPORT_OR_EXPORT_ELEMENT_ACCESSED                               0x2801
#define INCOMPATIBLE_MEDIUM_INSTALLED                                   0x3000
#define INCORRECT_COPY_TARGET_DEVICE_TYPE                               0x0D03
#define INFORMATION_UNIT_TOO_LONG                                       0x0E02
#define INFORMATION_UNIT_TOO_SHORT                                      0x0E01
#define INFORMATION_UNIT_iuCRC_ERROR_DETECTED                           0x4703
#define INITIATOR_DETECTED_ERROR_MESSAGE_RECEIVED                       0x4800
#define INITIATOR_RESPONSE_TIMEOUT                                      0x4B06
#define INLINE_DATA_LENGTH_EXCEEDED                                     0x260B
#define INQUIRY_DATA_HAS_CHANGED                                        0x3F03
#define INSUFFICIENT_ACCESS_CONTROL_RESOURCES                           0x5505
#define INSUFFICIENT_REGISTRATION_RESOURCES                             0x5504
#define INSUFFICIENT_RESERVATION_RESOURCES                              0x5502
#define INSUFFICIENT_RESOURCES                                          0x5503
#define INSUFFICIENT_TIME_FOR_OPERATION                                 0x2E00
#define INTERNAL_TARGET_FAILURE                                         0x4400
#define INVALID_ADDRESS_FOR_WRITE                                       0x2102
#define INVALID_BITS_IN_IDENTIFY_MESSAGE                                0x3D00
#define INVALID_COMMAND_OPERATION_CODE                                  0x2000
#define INVALID_ELEMENT_ADDRESS                                         0x2101
#define INVALID_FIELD_IN_CDB                                            0x2400
#define INVALID_FIELD_IN_COMMAND_INFORMATION_UNIT                       0x0E03
#define INVALID_FIELD_IN_PARAMETER_LIST                                 0x2600
#define INVALID_INFORMATION_UNIT                                        0x0E00
#define INVALID_MESSAGE_ERROR                                           0x4900
#define INVALID_OPERATION_FOR_COPY_SOURCE_OR_DESTINATION                0x260C
#define INVALID_PACKET_SIZE                                             0x6401
#define INVALID_PARAMETER_WHILE_PORT_IS_ENABLED                         0x260E
#define INVALID_RELEASE_OF_PERSISTENT_RESERVATION                       0x2604
#define INVALID_TARGET_PORT_TRANSFER_TAG_RECEIVED                       0x4B01
#define IT_NEXUS_LOSS_OCCURRED                                          0x2907
#define LEC_UNCORRECTABLE_ERROR                                         0x1105
#define LOG_COUNTER_AT_MAXIMUM                                          0x5B02
#define LOG_EXCEPTION                                                   0x5B00
#define LOG_LIST_CODES_EXHAUSTED                                        0x5B03
#define LOG_PARAMETERS_CHANGED                                          0x2A02
#define LOGICAL_BLOCK_ADDRESS_OUT_OF_RANGE                              0x2100
#define LOGICAL_UNIT_COMMUNICATION_CRC_ERROR_UDMA32                     0x0803
#define LOGICAL_UNIT_COMMUNICATION_FAILURE                              0x0800
#define LOGICAL_UNIT_COMMUNICATION_PARITY_ERROR                         0x0802
#define LOGICAL_UNIT_COMMUNICATION_TIMEOUT                              0x0801
#define LOGICAL_UNIT_DOES_NOT_RESPOND_TO_SELECTION                      0x0500
#define LOGICAL_UNIT_FAILED_SELFCONFIGURATION                           0x4C00
#define LOGICAL_UNIT_FAILED_SELFTEST                                    0x3E03
#define LOGICAL_UNIT_FAILURE                                            0x3E01
#define LOGICAL_UNIT_FAILURE_PREDICTION_THRESHOLD_EXCEEDED              0x5D02
#define LOGICAL_UNIT_HAS_NOT_SELFCONFIGURED_YET                         0x3E00
#define LOGICAL_UNIT_IS_IN_PROCESS_OF_BECOMING_READY                    0x0401
#define LOGICAL_UNIT_NOT_ACCESSIBLE_ASYMMETRIC_ACCESS_STATE_TRANSITION  0x040A
#define LOGICAL_UNIT_NOT_ACCESSIBLE_TARGET_PORT_IN_STANDBY_STATE        0x040B
#define LOGICAL_UNIT_NOT_ACCESSIBLE_TARGET_PORT_IN_UNAVAILABLE_STATE    0x040C
#define LOGICAL_UNIT_NOT_READY_AUXILIARY_MEMORY_NOT_ACCESSIBLE          0x0410
#define LOGICAL_UNIT_NOT_READY_CAUSE_NOT_REPORTABLE                     0x0400
#define LOGICAL_UNIT_NOT_READY_FORMAT_IN_PROGRESS                       0x0404
#define LOGICAL_UNIT_NOT_READY_INITIALIZING_COMMAND_REQUIRED            0x0402
#define LOGICAL_UNIT_NOT_READY_LONG_WRITE_IN_PROGRESS                   0x0408
#define LOGICAL_UNIT_NOT_READY_MANUAL_INTERVENTION_REQUIRED             0x0403
#define LOGICAL_UNIT_NOT_READY_NOTIFY_ENABLE_SPINUP_REQUIRED            0x0411
#define LOGICAL_UNIT_NOT_READY_OPERATION_IN_PROGRESS                    0x0407
#define LOGICAL_UNIT_NOT_READY_SELFTEST_IN_PROGRESS                     0x0409
#define LOGICAL_UNIT_NOT_SUPPORTED                                      0x2500
#define LOGICAL_UNIT_SOFTWARE_WRITE_PROTECTED                           0x2702
#define LOGICAL_UNIT_UNABLE_TO_UPDATE_SELFTEST_LOG                      0x3E04
#define LOW_POWER_CONDITION_ON                                          0x5E00
#define MECHANICAL_POSITIONING_ERROR                                    0x1501
#define MECHANICAL_POSITIONING_OR_CHANGER_ERROR                         0x3B16
#define MEDIA_FAILURE_PREDICTION_THRESHOLD_EXCEEDED                     0x5D01
#define MEDIA_LOAD_OR_EJECT_FAILED                                      0x5300
#define MEDIA_REGION_CODE_IS_MISMATCHED_TO_LOGICAL_UNIT_REGION          0x6F04
#define MEDIUM_AUXILIARY_MEMORY_ACCESSIBLE                              0x3F11
#define MEDIUM_DESTINATION_ELEMENT_FULL                                 0x3B0D
#define MEDIUM_FORMAT_CORRUPTED                                         0x3100
#define MEDIUM_LOADABLE                                                 0x3F10
#define MEDIUM_MAGAZINE_INSERTED                                        0x3B13
#define MEDIUM_MAGAZINE_LOCKED                                          0x3B14
#define MEDIUM_MAGAZINE_NOT_ACCESSIBLE                                  0x3B11
#define MEDIUM_MAGAZINE_REMOVED                                         0x3B12
#define MEDIUM_MAGAZINE_UNLOCKED                                        0x3B15
#define MEDIUM_NOT_FORMATTED                                            0x3010
#define MEDIUM_NOT_PRESENT                                              0x3A00
#define MEDIUM_NOT_PRESENT_LOADABLE                                     0x3A03
#define MEDIUM_NOT_PRESENT_MEDIUM_AUXILIARY_MEMORY_ACCESSIBLE           0x3A04
#define MEDIUM_NOT_PRESENT_TRAY_CLOSED                                  0x3A01
#define MEDIUM_NOT_PRESENT_TRAY_OPEN                                    0x3A02
#define MEDIUM_REMOVAL_PREVENTED                                        0x5302
#define MEDIUM_SOURCE_ELEMENT_EMPTY                                     0x3B0E
#define MESSAGE_ERROR                                                   0x4300
#define MICROCODE_HAS_BEEN_CHANGED                                      0x3F01
#define MISCOMPARE_DURING_VERIFY_OPERATION                              0x1D00
#define MODE_PARAMETERS_CHANGED                                         0x2A01
#define NAK_RECEIVED                                                    0x4B04
#define NO_ADDITIONAL_SENSE_INFORMATION                                 0x0000
#define NO_CURRENT_AUDIO_STATUS_TO_RETURN                               0x0015
#define NO_MORE_TRACK_RESERVATIONS_ALLOWED                              0x7205
#define NO_REFERENCE_POSITION_FOUND                                     0x0600
#define NO_SEEK_COMPLETE                                                0x0200
#define NOT_READY_TO_READY_CHANGE_MEDIUM_MAY_HAVE_CHANGED               0x2800
#define OPERATION_IN_PROGRESS                                           0x0016
#define OPERATOR_MEDIUM_REMOVAL_REQUEST                                 0x5A01
#define OPERATOR_REQUEST_OR_STATE_CHANGE_INPUT                          0x5A00
#define OPERATOR_SELECTED_WRITE_PERMIT                                  0x5A03
#define OPERATOR_SELECTED_WRITE_PROTECT                                 0x5A02
#define OVERLAPPED_COMMANDS_ATTEMPTED                                   0x4E00
#define PACKET_DOES_NOT_FIT_IN_AVAILABLE_SPACE                          0x6301
#define PARAMETER_LIST_LENGTH_ERROR                                     0x1A00
#define PARAMETER_NOT_SUPPORTED                                         0x2601
#define PARAMETER_VALUE_INVALID                                         0x2602
#define PARAMETERS_CHANGED                                              0x2A00
#define PERMANENT_WRITE_PROTECT                                         0x2705
#define PERSISTENT_PREVENT_CONFLICT                                     0x2C06
#define PERSISTENT_WRITE_PROTECT                                        0x2704
#define POSITIONING_ERROR_DETECTED_BY_READ_OF_MEDIUM                    0x1502
#define POWER_CALIBRATION_AREA_ALMOST_FULL                              0x7301
#define POWER_CALIBRATION_AREA_ERROR                                    0x7303
#define POWER_CALIBRATION_AREA_IS_FULL                                  0x7302
#define POWER_ON_OCCURRED                                               0x2901
#define POWER_ON_RESET_OR_BUS_DEVICE_RESET_OCCURRED                     0x2900
#define PREVIOUS_BUSY_STATUS                                            0x2C07
#define PREVIOUS_RESERVATION_CONFLICT_STATUS                            0x2C09
#define PREVIOUS_TASK_SET_FULL_STATUS                                   0x2C08
#define PRIORITY_CHANGED                                                0x2A08
#define PROGRAM_MEMORY_AREA_IS_FULL                                     0x7305
#define PROGRAM_MEMORY_AREA_UPDATE_FAILURE                              0x7304
#define PROTOCOL_SERVICE_CRC_ERROR                                      0x4705
#define RANDOM_POSITIONING_ERROR                                        0x1500
#define READ_ERROR_FAILED_RETRANSMISSION_REQUEST                        0x1113
#define READ_ERROR_LOSS_OF_STREAMING                                    0x1111
#define READ_OF_SCRAMBLED_SECTOR_WITHOUT_AUTHENTICATION                 0x6F03
#define READ_RETRIES_EXHAUSTED                                          0x1101
#define RECORD_NOT_FOUND                                                0x1401
#define RECORDED_ENTITY_NOT_FOUND                                       0x1400
#define RECOVERED_DATA_DATA_AUTOREALLOCATED                             0x1802
#define RECOVERED_DATA_RECOMMEND_REASSIGNMENT                           0x1805
#define RECOVERED_DATA_RECOMMEND_REWRITE                                0x1806
#define RECOVERED_DATA_USING_PREVIOUS_SECTOR_ID                         0x1705
#define RECOVERED_DATA_WITH_CIRC                                        0x1803
#define RECOVERED_DATA_WITH_ERROR_CORR_AND_RETRIES_APPLIED              0x1801
#define RECOVERED_DATA_WITH_ERROR_CORRECTION_APPLIED                    0x1800
#define RECOVERED_DATA_WITH_LEC                                         0x1804
#define RECOVERED_DATA_WITH_LINKING                                     0x1808
#define RECOVERED_DATA_WITH_NEGATIVE_HEAD_OFFSET                        0x1703
#define RECOVERED_DATA_WITH_NO_ERROR_CORRECTION_APPLIED                 0x1700
#define RECOVERED_DATA_WITH_POSITIVE_HEAD_OFFSET                        0x1702
#define RECOVERED_DATA_WITH_RETRIES                                     0x1701
#define RECOVERED_DATA_WITH_RETRIES_AND_OR_CIRC_APPLIED                 0x1704
#define RECOVERED_DATA_WITHOUT_ECC_DATA_REWRITTEN                       0x1709
#define RECOVERED_DATA_WITHOUT_ECC_RECOMMEND_REASSIGNMENT               0x1707
#define RECOVERED_DATA_WITHOUT_ECC_RECOMMEND_REWRITE                    0x1708
#define REDUNDANCY_GROUP_CREATED_OR_MODIFIED                            0x3F06
#define REDUNDANCY_GROUP_DELETED                                        0x3F07
#define REGISTRATIONS_PREEMPTED                                         0x2A05
#define REPORTED_LUNS_DATA_HAS_CHANGED                                  0x3F0E
#define RESERVATIONS_PREEMPTED                                          0x2A03
#define RESERVATIONS_RELEASED                                           0x2A04
#define RMA_PMA_IS_ALMOST_FULL                                          0x7306
#define ROUNDED_PARAMETER                                               0x3700
#define SAVING_PARAMETERS_NOT_SUPPORTED                                 0x3900
#define SCSI_BUS_RESET_OCCURRED                                         0x2902
#define SCSI_PARITY_ERROR                                               0x4700
#define SCSI_PARITY_ERROR_DETECTED_DURING_ST_DATA_PHASE                 0x4702
#define SELECT_OR_RESELECT_FAILURE                                      0x4500
#define SESSION_FIXATION_ERROR                                          0x7200
#define SESSION_FIXATION_ERROR_INCOMPLETE_TRACK_IN_SESSION              0x7203
#define SESSION_FIXATION_ERROR_WRITING_LEADIN                           0x7201
#define SESSION_FIXATION_ERROR_WRITING_LEADOUT                          0x7202
#define SET_TARGET_PORT_GROUPS_COMMAND_FAILED                           0x670A
#define SOME_COMMANDS_CLEARED_BY_ISCSI_PROTOCOL_EVENT                   0x477F
#define SPARE_AREA_EXHAUSTION_PREDICTION_THRESHOLD_EXCEEDED             0x5D03
#define SPARE_CREATED_OR_MODIFIED                                       0x3F08
#define SPARE_DELETED                                                   0x3F09
#define SPINDLE_SERVO_FAILURE                                           0x0903
#define STANDBY_CONDITION_ACTIVATED_BY_COMMAND                          0x5E04
#define STANDBY_CONDITION_ACTIVATED_BY_TIMER                            0x5E02
#define SYNCHRONOUS_DATA_TRANSFER_ERROR                                 0x1B00
#define TARGET_OPERATING_CONDITIONS_HAVE_CHANGED                        0x3F00
#define THIRD_PARTY_DEVICE_FAILURE                                      0x0D01
#define THRESHOLD_CONDITION_MET                                         0x5B01
#define THRESHOLD_PARAMETERS_NOT_SUPPORTED                              0x2603
#define TIMEOUT_ON_LOGICAL_UNIT                                         0x3E02
#define TOO_MANY_SEGMENT_DESCRIPTORS                                    0x2608
#define TOO_MANY_TARGET_DESCRIPTORS                                     0x2606
#define TOO_MUCH_WRITE_DATA                                             0x4B02
#define TRACK_FOLLOWING_ERROR                                           0x0900
#define TRACKING_SERVO_FAILURE                                          0x0901
#define TRANSCEIVER_MODE_CHANGED_TO_LVD                                 0x2906
#define TRANSCEIVER_MODE_CHANGED_TO_SINGLEENDED                         0x2905
#define UNABLE_TO_RECOVER_TOC                                           0x5700
#define UNEXPECTED_INEXACT_SEGMENT                                      0x260A
#define UNREACHABLE_COPY_TARGET                                         0x0804
#define UNRECOVERED_READ_ERROR                                          0x1100
#define UNSUCCESSFUL_SOFT_RESET                                         0x4600
#define UNSUPPORTED_ENCLOSURE_FUNCTION                                  0x3501
#define UNSUPPORTED_SEGMENT_DESCRIPTOR_TYPE_CODE                        0x2609
#define UNSUPPORTED_TARGET_DESCRIPTOR_TYPE_CODE                         0x2607
#define VOLTAGE_FAULT                                                   0x6500
#define VOLUME_SET_CREATED_OR_MODIFIED                                  0x3F0A
#define VOLUME_SET_DEASSIGNED                                           0x3F0C
#define VOLUME_SET_DELETED                                              0x3F0B
#define VOLUME_SET_REASSIGNED                                           0x3F0D
#define WARNING                                                         0x0B00
#define WARNING_ENCLOSURE_DEGRADED                                      0x0B02
#define WARNING_SPECIFIED_TEMPERATURE_EXCEEDED                          0x0B01
#define WRITE_ERROR                                                     0x0C00
#define WRITE_ERROR_LOSS_OF_STREAMING                                   0x0C09
#define WRITE_ERROR_NOT_ENOUGH_UNSOLICITED_DATA                         0x0C0D
#define WRITE_ERROR_PADDING_BLOCKS_ADDED                                0x0C0A
#define WRITE_ERROR_RECOVERY_FAILED                                     0x0C08
#define WRITE_ERROR_RECOVERY_NEEDED                                     0x0C07
#define WRITE_ERROR_UNEXPECTED_UNSOLICITED_DATA                         0x0C0C
#define WRITE_PROTECTED                                                 0x2700
#define ZONED_FORMATTING_FAILED_DUE_TO_SPARE_LINKING                    0x3102

#endif /* __CDEMUD_SENSE_CONSTANTS_H__ */
