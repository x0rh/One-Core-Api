/*
 * COPYRIGHT:       See COPYING in the top level directory
 * PROJECT:         ReactOS NT Library
 * FILE:            dll/ntdll/dispatch/amd64/stubs.c
 * PURPOSE:         AMD64 stubs
 * PROGRAMMERS:      Stefan Ginsberg (stefan.ginsberg@reactos.org)
 */

/* INCLUDES *****************************************************************/

#include <ntdll.h>
#define NDEBUG
#include <debug.h>

/* PUBLIC FUNCTIONS **********************************************************/

/*
 * @unimplemented
 */
VOID
NTAPI
LdrInitializeThunk(PVOID Unknown1, // FIXME: Parameters!
                   PVOID Unknown2,
                   PVOID Unknown3)
{
    UNIMPLEMENTED;
    return;
}

/*
 * @unimplemented
 */
VOID
NTAPI
KiUserApcDispatcher(IN PVOID NormalRoutine,
                    IN PVOID NormalContext,
                    IN PVOID SystemArgument1,
                    IN PVOID SystemArgument2)
{
    UNIMPLEMENTED;
    return;
}

VOID
NTAPI
KiRaiseUserExceptionDispatcher(VOID)
{
    UNIMPLEMENTED;
    return;
}

VOID
NTAPI
KiUserCallbackDispatcher(VOID)
{
    UNIMPLEMENTED;
    return;
}

VOID
NTAPI
KiUserExceptionDispatcher(VOID)
{
    UNIMPLEMENTED;
    return;
}
