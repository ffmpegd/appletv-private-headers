/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import </libobjc.A.h>

@class NSTimer, NSDate, EKEventStore, NSArray, NSMutableArray, PCPersistentTimer;
@protocol OS_dispatch_queue;

@interface _EKNotificationMonitor : NSObject {
	EKEventStore *_eventStore;	// 4 = 0x4
	id _eventStoreGetter;	// 8 = 0x8
	BOOL _running;	// 12 = 0xc
	PCPersistentTimer *_timer;	// 16 = 0x10
	NSDate *_nextFireTime;	// 20 = 0x14
	NSTimer *_syncTimer;	// 24 = 0x18
	BOOL _pendingChanges;	// 28 = 0x1c
	NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
	NSObject<OS_dispatch_queue> *_timerQueue;	// 36 = 0x24
	unsigned _lastCount;	// 40 = 0x28
	NSMutableArray *_notifications;	// 44 = 0x2c
	NSMutableArray *_recentlyRepliedNotifications;	// 48 = 0x30
	NSMutableArray *_culledRecentlyRepliedNotifications;	// 52 = 0x34
	BOOL _initialCheck;	// 56 = 0x38
	BOOL _shouldInstallPersistentTimer;	// 57 = 0x39
	BOOL _loadRecentlyRepliedNotifications;	// 58 = 0x3a
}
@property(readonly, assign, nonatomic) unsigned notificationCount;	// G=0x2da912cd; 
@property(readonly, assign, nonatomic) NSArray *notifications;	// G=0x2daed9b5; 
@property(readonly, assign, nonatomic) NSArray *recentlyRepliedNotifications;	// G=0x2daedad9; 
- (id)init;	// 0x2da8dcc5
- (id)initForBulletinBoardWithEventStoreGetter:(id)eventStoreGetter;	// 0x2daed5e9
- (id)initWithEventStore:(id)eventStore;	// 0x2da8dc75
- (unsigned)_checkForNotifications:(id)notifications;	// 0x2da8dfd1
- (unsigned)_checkForRecentlyRepliedNotifications:(id)recentlyRepliedNotifications;	// 0x2daee4d5
- (void)_checkForUpdates;	// 0x2da8df7d
- (void)_databaseChanged;	// 0x2daa0419
- (int)_doesEvent:(id)event occurAfterDate:(id)date;	// 0x2daee341
- (id)_eventStore;	// 0x2da8df25
- (void)_killSyncTimer;	// 0x2daef0f1
- (id)_notificationFromEvent:(id)event;	// 0x2daedfd9
- (void)_notifyForUnalertedNotifications:(id)unalertedNotifications;	// 0x2da8f875
- (void)_resetSyncTimer;	// 0x2daeefc1
- (void)_resetTimer;	// 0x2da8de89
- (void)_syncDidEnd;	// 0x2daef1fd
- (void)_syncDidStart;	// 0x2daef195
- (void)_syncTimerFired:(id)fired;	// 0x2daef12d
- (void)_timerFired;	// 0x2daedf71
- (void)adjust;	// 0x2daedc11
- (void)dealloc;	// 0x2daed641
- (void)killTimer;	// 0x2daed70d
// declared property getter: - (unsigned)notificationCount;	// 0x2da912cd
// declared property getter: - (id)notifications;	// 0x2daed9b5
// declared property getter: - (id)recentlyRepliedNotifications;	// 0x2daedad9
- (void)start;	// 0x2da8dd65
- (void)stop;	// 0x2daed7a9
@end

