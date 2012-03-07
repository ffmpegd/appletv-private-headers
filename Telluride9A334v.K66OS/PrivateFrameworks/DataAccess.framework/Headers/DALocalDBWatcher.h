/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DataAccess-Structs.h"
#import <NSObject.h> // Unknown library


@interface DALocalDBWatcher : NSObject {
	int _lastSavedCalSequenceNumber;	// 4 = 0x4
	int _lastSavedABSequenceNumber;	// 8 = 0x8
	void *_abWatcher;	// 12 = 0xc
	CalDatabase *_calWatcher;	// 16 = 0x10
	CFDictionaryRef _concernedABPartyToBlockMap;	// 20 = 0x14
	CFDictionaryRef _concernedCalPartyToBlockMap;	// 24 = 0x18
	BOOL _watchingBookmarks;	// 28 = 0x1c
	CFDictionaryRef _concernedBookmarkPartyToBlockMap;	// 32 = 0x20
}
@property(assign) int lastSavedABSequenceNumber;	// G=0x337b6681; S=0x337b6691; @synthesize=_lastSavedABSequenceNumber
@property(assign) int lastSavedCalSequenceNumber;	// G=0x337b66a1; S=0x337b66b1; @synthesize=_lastSavedCalSequenceNumber
+ (id)sharedDBWatcher;	// 0x337b5651
- (id)init;	// 0x337b5735
- (void)_handleABChangeNotificationWithInfo:(id)info;	// 0x337b584d
- (void)_handleBookmarkChangeNotification;	// 0x337b6085
- (void)_handleCalChangeNotification;	// 0x337b5c69
- (void)dealloc;	// 0x337b57d1
// declared property getter: - (int)lastSavedABSequenceNumber;	// 0x337b6681
// declared property getter: - (int)lastSavedCalSequenceNumber;	// 0x337b66a1
- (void)noteABDBDirChanged;	// 0x337b63f1
- (void)noteCalDBDirChanged;	// 0x337b6535
- (void)registerConcernedABParty:(id)party withChangedBlock:(id)changedBlock;	// 0x337b593d
- (void)registerConcernedBookmarkParty:(id)party withChangedBlock:(id)changedBlock;	// 0x337b610d
- (void)registerConcernedCalParty:(id)party withChangedBlock:(id)changedBlock;	// 0x337b5d35
- (void)removeConcernedABParty:(id)party;	// 0x337b5b41
- (void)removeConcernedBookmarkParty:(id)party;	// 0x337b62e9
- (void)removeConcernedCalParty:(id)party;	// 0x337b5f55
// declared property setter: - (void)setLastSavedABSequenceNumber:(int)number;	// 0x337b6691
// declared property setter: - (void)setLastSavedCalSequenceNumber:(int)number;	// 0x337b66b1
@end

