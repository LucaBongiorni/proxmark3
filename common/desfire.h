#ifndef __DESFIRE_H
#define __DESFIRE_H

struct desfire_data {
   uint8_t iso_resp_buf[256];
   uint8_t resp_buf[256];
   DES3_KS session_key;
   uint8_t authenticated_key;
};

enum DESFIRE_STATUS {
    OPERATION_OK = 0,
    NO_CHANGES = 0xc,
    OUT_OF_EEPROM_ERROR = 0xe,
    ILLEGAL_COMMAND_CODE = 0x1c,
    INTEGRITY_ERROR = 0x1e,
    NO_SUCH_KEY = 0x40,
    LENGTH_ERROR = 0x7e,
    PERMISSION_DENIED = 0x9d,
    PARAMETER_ERROR = 0x9e,
    APPLICATION_NOT_FOUND = 0xa0,
    APPL_INTEGRITY_ERROR = 0xa1,
    AUTHENTICATION_ERROR = 0xae,
    ADDITIONAL_FRAME = 0xaf,
    BOUNDARY_ERROR = 0xbe,
    PICC_INTEGRITY_ERROR = 0xc1,
    COMMAND_ABORTED = 0xca,
    PICC_DISABLED_ERROR = 0xcd,
    COUNT_ERROR = 0xce,
    DUPLICATE_ERROR = 0xde,
    EEPROM_ERROR = 0xee,
    FILE_NOT_FOUND = 0xf0,
    FILE_INTEGRITY_ERROR = 0xf1
};


enum DESFIRE_CMD {
    CREATE_APPLICATION = 0xca,
    DELETE_APPLICATION = 0xda,
    GET_APPLICATION_IDS = 0x6a,
    SELECT_APPLICATION = 0x5a,
    FORMAT_PICC = 0xfc,
    GET_VERSION = 0x60,
    READ_DATA = 0xbd,
    WRITE_DATA = 0x3d,
    GET_VALUE = 0x6c,
    CREDIT = 0xc,
    DEBIT = 0xdc,
    LIMITED_CREDIT = 0x1c,
    WRITE_RECORD = 0x3b,
    READ_RECORDS = 0xbb,
    CLEAR_RECORD_FILE = 0xeb,
    COMMIT_TRANSACTION = 0xc7,
    ABORT_TRANSACTION = 0xa7,
    GET_FILE_IDS = 0x6f,
    GET_FILE_SETTINGS = 0xf5,
    CHANGE_FILE_SETTINGS = 0x5f,
    CREATE_STD_DATA_FILE = 0xcd,
    CREATE_BACKUP_DATA_FILE = 0xcb,
    CREATE_VALUE_FILE = 0xcc,
    CREATE_LINEAR_RECORD_FILE = 0xc1,
    CREATE_CYCLIC_RECORD_FILE = 0xc0,
    DELETE_FILE = 0xdf,
    AUTHENTICATE_A = 0xa,
    CHANGE_KEY_SETTINGS = 0x54,
    GET_KEY_SETTINGS = 0x45,
    CHANGE_KEY = 0xc4,
    GET_KEY_VERSION = 0x64,
    AUTHENTICATION_FRAME = 0xAF
};

enum MIFARE_COMMAND {
    CONNECT = 1,
    EXECUTE_NATIVE_COMMAND = 2,
    EXECUTE_SPECIAL_COMMAND = 4,
    NO_DISCONNECT = 8
};

#endif

