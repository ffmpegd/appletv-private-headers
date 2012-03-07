/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface ASProtocolCapabilities : NSObject {
	NSString *_calConstraintsPlistPath;	// 4 = 0x4
	NSString *_abConstraintsPlistPath;	// 8 = 0x8
}
- (id)initWithProtocolVersionString:(id)protocolVersionString;	// 0x32194e45
- (id)_abConstraintsPlistPath;	// 0x3219508d
- (id)_calConstraintsPlistPath;	// 0x32194fe9
- (id)addressBookConstraintsPath;	// 0x321950e9
- (id)calendarConstraintsPath;	// 0x32195045
- (void)dealloc;	// 0x32194f4d
- (BOOL)serverUpdatesAttendeeStatusOnEvents;	// 0x32194fe5
- (BOOL)supportsEmailFlagging;	// 0x32194fd9
- (BOOL)supportsItemOperationsCommand;	// 0x32194fe1
- (BOOL)supportsMailboxSearch;	// 0x32194fd5
- (BOOL)supportsProtocolVersion:(id)version;	// 0x32194fad
- (BOOL)supportsSettingsCommand;	// 0x32194fdd
@end
