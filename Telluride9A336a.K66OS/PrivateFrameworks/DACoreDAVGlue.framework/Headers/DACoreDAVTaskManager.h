/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACoreDAVGlue.framework/DACoreDAVGlue
 */

#import "CoreDAVTaskManager.h"
#import <DATaskManager.h> // Unknown library

@class NSRunLoop;

@interface DACoreDAVTaskManager : DATaskManager <CoreDAVTaskManager> {
	int _numActiveTasks;	// 56 = 0x38
}
@property(retain) NSRunLoop *workRunLoop;	// G=0x322eb4c9; S=0x322eb4e5; 
- (void)_updateSpinner:(BOOL)spinner;	// 0x322eb171
- (void)coreDAVTaskDidFinish:(id)coreDAVTask;	// 0x322eb4b9
- (void)coreDAVTaskEndModal:(id)modal;	// 0x322eb4a9
- (void)coreDAVTaskRequestModal:(id)modal;	// 0x322eb499
// declared property setter: - (void)setWorkRunLoop:(id)loop;	// 0x322eb4e5
- (void)submitIndependentCoreDAVTask:(id)task;	// 0x322eb489
- (void)submitQueuedCoreDAVTask:(id)task;	// 0x322eb479
- (void)taskManagerDidAddTask:(id)taskManager;	// 0x322eb2c9
- (void)taskManagerWillRemoveTask:(id)taskManager;	// 0x322eb3a1
// declared property getter: - (id)workRunLoop;	// 0x322eb4c9
@end

