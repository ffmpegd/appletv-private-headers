/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DataAccess-Structs.h"
#import <NSObject.h> // Unknown library

@class NoteContext;

@interface DALocalDBWatcher : NSObject {
	int _lastSavedCalSequenceNumber;	// 4 = 0x4
	int _lastSavedABSequenceNumber;	// 8 = 0x8
	void *_abWatcher;	// 12 = 0xc
	CalDatabase *_calWatcher;	// 16 = 0x10
	NoteContext *_noteWatcher;	// 20 = 0x14
	CFDictionaryRef _concernedABPartyToBlockMap;	// 24 = 0x18
	CFDictionaryRef _concernedCalPartyToBlockMap;	// 28 = 0x1c
	CFDictionaryRef _concernedNotePartyToBlockMap;	// 32 = 0x20
	BOOL _watchingBookmarks;	// 36 = 0x24
	CFDictionaryRef _concernedBookmarkPartyToBlockMap;	// 40 = 0x28
}
@property(assign) int lastSavedABSequenceNumber;	// G=0x35e58179; S=0x35e5818d; @synthesize=_lastSavedABSequenceNumber
@property(assign) int lastSavedCalSequenceNumber;	// G=0x35e581a5; S=0x35e581b9; @synthesize=_lastSavedCalSequenceNumber
+ (id)sharedDBWatcher;	// 0x35e56a8d
- (id)init;	// 0x35e56b7d
- (void)_handleABChangeNotificationWithInfo:(id)info;	// 0x35e56d11
- (void)_handleBookmarkChangeNotification;	// 0x35e57615
- (void)_handleCalChangeNotification;	// 0x35e571bd
- (void)_notesChangedExternally:(id)externally;	// 0x35e579bd
- (void)dealloc;	// 0x35e56c35
// declared property getter: - (int)lastSavedABSequenceNumber;	// 0x35e58179
// declared property getter: - (int)lastSavedCalSequenceNumber;	// 0x35e581a5
- (void)noteABDBDirChanged;	// 0x35e57e75
- (void)noteCalDBDirChanged;	// 0x35e58015
- (void)registerConcernedABParty:(id)party withChangedBlock:(id)changedBlock;	// 0x35e56e29
- (void)registerConcernedBookmarkParty:(id)party withChangedBlock:(id)changedBlock;	// 0x35e576c5
- (void)registerConcernedCalParty:(id)party withChangedBlock:(id)changedBlock;	// 0x35e572b1
- (void)registerConcernedNoteParty:(id)party withChangedBlock:(id)changedBlock;	// 0x35e57add
- (void)removeConcernedABParty:(id)party;	// 0x35e57089
- (void)removeConcernedBookmarkParty:(id)party;	// 0x35e578a9
- (void)removeConcernedCalParty:(id)party;	// 0x35e574d9
- (void)removeConcernedNoteParty:(id)party;	// 0x35e57d2d
// declared property setter: - (void)setLastSavedABSequenceNumber:(int)number;	// 0x35e5818d
// declared property setter: - (void)setLastSavedCalSequenceNumber:(int)number;	// 0x35e581b9
@end
