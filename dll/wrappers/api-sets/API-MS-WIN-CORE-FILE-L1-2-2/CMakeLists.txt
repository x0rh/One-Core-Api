
spec2def(API-MS-WIN-CORE-FILE-L1-2-2.dll API-MS-WIN-CORE-FILE-L1-2-2.spec)

list(APPEND SOURCE
    API-MS-WIN-CORE-FILE-L1-2-2.rc
    ${CMAKE_CURRENT_BINARY_DIR}/API-MS-WIN-CORE-FILE-L1-2-2_stubs.c
    ${CMAKE_CURRENT_BINARY_DIR}/API-MS-WIN-CORE-FILE-L1-2-2.def)

add_library(API-MS-WIN-CORE-FILE-L1-2-2 SHARED ${SOURCE})

set_module_type(API-MS-WIN-CORE-FILE-L1-2-2 win32dll ENTRYPOINT 0)
add_importlibs(API-MS-WIN-CORE-FILE-L1-2-2 kernel32 ntdll)
add_dependencies(API-MS-WIN-CORE-FILE-L1-2-2 psdk)
add_cd_file(TARGET API-MS-WIN-CORE-FILE-L1-2-2 DESTINATION reactos/system32 FOR all)
