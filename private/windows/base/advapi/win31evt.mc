;/*++ BUILD Version: 0001    // Increment this if a change has global effects
;
;Copyright (c) 1992  Microsoft Corporation
;
;Module Name:
;
;    win31evt.h
;
;Abstract:
;
;    Definitions for Windows 3.1 Migration Events
;
;Author:
;
;    Portable Systems Group 6-May-1992
;
;Revision History:
;
;Notes:
;
;    This file is generated by the MC tool from the win31evt.mc file.
;
;--*/
;
;
;#ifndef _WIN31EVT_
;#define _WIN31EVT_
;


SeverityNames=(Success=0x0:STATUS_SEVERITY_SUCCESS
               Informational=0x1:STATUS_SEVERITY_INFORMATIONAL
               Warning=0x2:STATUS_SEVERITY_WARNING
               Error=0x3:STATUS_SEVERITY_ERROR
              )
	
;
;/////////////////////////////////////////////////////////////////////////
;//
;// Windows 3.1 Migration Events (1000 - 1999)
;//
;/////////////////////////////////////////////////////////////////////////
;

MessageId=1000 Severity=Informational SymbolicName=WIN31IO_EVENT_EXCEPTION
Language=English
An exception occurred while performing Windows 3.1 migration.  Some data
may not have been migrated.
.

MessageId=1001 Severity=Informational SymbolicName=WIN31IO_EVENT_MIGRATE_INI_FILE
Language=English
The entire contents of %1 was migrated into the Windows NT registry.
.

MessageId=1002 Severity=Informational SymbolicName=WIN31IO_EVENT_MIGRATE_INI_SECTION
Language=English
The entire contents of the %1 section of %2 was migrated into the
Windows NT registry.
.

MessageId=1003 Severity=Informational SymbolicName=WIN31IO_EVENT_MIGRATE_INI_VARIABLE
Language=English
The value of the %1 variable in the %2 section of %3 was migrated into
the Windows NT registry.
.

MessageId=1004 Severity=Informational SymbolicName=WIN31IO_EVENT_MIGRATE_GROUP
Language=English
The entire contents of the %1 Program Manager group was migrated into the
Windows NT registry.
.

MessageId=1005 Severity=Informational SymbolicName=WIN31IO_EVENT_MIGRATE_GROUP_EXISTS
Language=English
The contents of the Windows 3.X Program Manager group file %1 was not
migrated into the Windows NT registry, as a group of that name, %2,
already existed.
.

MessageId=1006 Severity=Warning SymbolicName=WIN31IO_EVENT_MIGRATE_INI_FILE_FAILED
Language=English
Unable to migrate all or part of the %1 file into the Windows NT registry.
.

MessageId=1007 Severity=Warning SymbolicName=WIN31IO_EVENT_MIGRATE_INI_SECTION_FAILED
Language=English
Unable to migrate all or part of the %1 section of %2 into the Windows
NT registry.
.

MessageId=1008 Severity=Warning SymbolicName=WIN31IO_EVENT_MIGRATE_INI_VARIABLE_FAILED
Language=English
Unable to migrate the value of the %1 variable in the %2 section of %3
into the Windows NT registry.
.

MessageId=1009 Severity=Warning SymbolicName=WIN31IO_EVENT_MIGRATE_GROUP_FAILED
Language=English
Unable to migrate the contents of the %1 Program Manager group into
the Windows NT registry.
.

MessageId=1010 Severity=Warning SymbolicName=WIN31IO_EVENT_MIGRATE_GROUP_FAILED1
Language=English
Unable to load the contents of the Windows 3.1 Program Manager group file %1.
Error Code was %2.  Group not migrated to the Windows NT registry.
.

MessageId=1011 Severity=Warning SymbolicName=WIN31IO_EVENT_MIGRATE_GROUP_FAILED2
Language=English
Unable to read the value of %1 from the %2 file.  Group not migrated to
the Windows NT registry.
.

MessageId=1012 Severity=Warning SymbolicName=WIN31IO_EVENT_MIGRATE_GROUP_FAILED3
Language=English
Unable to convert the contents of the Windows 3.1 Program Manager group
file %1.  into the Windows NT format.  Error Code was %2.  Group not
migrated to the Windows NT registry.
.

MessageId=1013 Severity=Informational SymbolicName=WIN31IO_EVENT_MIGRATE_REGDAT
Language=English
Contents of %1 migrated to the Windows NT registry.
.

MessageId=1014 Severity=Warning SymbolicName=WIN31IO_EVENT_MIGRATE_REGDAT_FAILED
Language=English
Unable to migrate all or part of %1 to the Windows NT registry.
.

MessageId=1015 Severity=Warning SymbolicName=WIN31IO_EVENT_MIGRATE_GROUP_FAILED4
Language=English
Did not migrate the contents of the %1 Program Manager group into
the Windows NT registry.  It is incompatible with Windows NT.
.

;
;#endif // _WIN31EVT_
;
