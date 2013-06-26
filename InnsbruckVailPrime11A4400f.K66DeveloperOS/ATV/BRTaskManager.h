/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSConditionLock, NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRTaskManager : BRSingleton {
	NSMutableArray *_taskQueue;	// 4 = 0x4
	NSConditionLock *_queueLock;	// 8 = 0x8
	int _numberOfTaskThreadsRunning;	// 12 = 0xc
	int _numberOfFinishingThreads;	// 16 = 0x10
}
+ (void)setSingleton:(id)singleton;	// 0x3fe909
+ (id)singleton;	// 0x3fe8f9
- (id)init;	// 0x3fe919
- (void)_processTasks;	// 0x3fed19
- (void)cancelTask:(id)task;	// 0x3feba9
- (void)dealloc;	// 0x3fe9d1
- (void)scheduleTask:(id)task;	// 0x3fea35
@end
