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
- (id)initWithProtocolVersionString:(id)protocolVersionString;	// 0x339e53d1
- (id)_abConstraintsPlistPath;	// 0x339e5641
- (id)_calConstraintsPlistPath;	// 0x339e55a1
- (id)addressBookConstraintsPath;	// 0x339e569d
- (id)calendarConstraintsPath;	// 0x339e55fd
- (void)dealloc;	// 0x339e5501
- (BOOL)serverUpdatesAttendeeStatusOnEvents;	// 0x339e559d
- (BOOL)supportsEmailFlagging;	// 0x339e5591
- (BOOL)supportsItemOperationsCommand;	// 0x339e5599
- (BOOL)supportsMailboxSearch;	// 0x339e558d
- (BOOL)supportsNoteSyncing;	// 0x339e56e1
- (BOOL)supportsProtocolVersion:(id)version;	// 0x339e5565
- (BOOL)supportsSettingsCommand;	// 0x339e5595
@end

