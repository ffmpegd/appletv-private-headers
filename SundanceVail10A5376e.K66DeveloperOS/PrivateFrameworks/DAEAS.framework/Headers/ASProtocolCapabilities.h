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
- (id)initWithProtocolVersionString:(id)protocolVersionString;	// 0x322763e9
- (id)_abConstraintsPlistPath;	// 0x32276659
- (id)_calConstraintsPlistPath;	// 0x322765b9
- (id)addressBookConstraintsPath;	// 0x322766b5
- (id)calendarConstraintsPath;	// 0x32276615
- (void)dealloc;	// 0x32276519
- (BOOL)serverUpdatesAttendeeStatusOnEvents;	// 0x322765b5
- (BOOL)supportsEmailFlagging;	// 0x322765a9
- (BOOL)supportsItemOperationsCommand;	// 0x322765b1
- (BOOL)supportsMailboxSearch;	// 0x322765a5
- (BOOL)supportsNoteSyncing;	// 0x322766f9
- (BOOL)supportsProtocolVersion:(id)version;	// 0x3227657d
- (BOOL)supportsSettingsCommand;	// 0x322765ad
@end
