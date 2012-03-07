/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library
#import "EventKit-Structs.h"

@class PCPersistentTimer, NSDate;

@interface _EKInvitationMonitor : NSObject {
@private
	BOOL _running;	// 4 = 0x4
	PCPersistentTimer *_timer;	// 8 = 0x8
	NSDate *_nextFireTime;	// 12 = 0xc
	dispatch_queue_s *_queue;	// 16 = 0x10
	int _lastCount;	// 20 = 0x14
	BOOL _notifyUnalerted;	// 24 = 0x18
	BOOL _initialCheck;	// 25 = 0x19
}
@property(assign, nonatomic) BOOL notifyUnalerted;	// G=0x332193e9; S=0x332193f9; @synthesize=_notifyUnalerted
@property(readonly, assign, nonatomic) unsigned unreadCount;	// G=0x33218c71; 
- (id)initWithEventStore:(id)eventStore;	// 0x33218929
- (void)_checkForUpdates:(id)updates;	// 0x331c084d
- (void)_checkforUnalertedEvents:(id)events;	// 0x331c0afd
- (void)_databaseChanged;	// 0x33219071
- (BOOL)_isDataProtected;	// 0x332193e5
- (void)_protectedDataDidBecomeAvailable;	// 0x331bfe25
- (void)_protectedDataWillBecomeUnavailable;	// 0x332193e1
- (void)_resetTimer:(id)timer;	// 0x331c0289
- (void)_timerFired;	// 0x33219101
- (void)adjust;	// 0x33218d3d
- (void)dealloc;	// 0x33218939
// declared property getter: - (BOOL)notifyUnalerted;	// 0x332193e9
// declared property setter: - (void)setNotifyUnalerted:(BOOL)unalerted;	// 0x332193f9
- (void)start;	// 0x33218999
- (void)stop;	// 0x33218b15
// declared property getter: - (unsigned)unreadCount;	// 0x33218c71
@end

