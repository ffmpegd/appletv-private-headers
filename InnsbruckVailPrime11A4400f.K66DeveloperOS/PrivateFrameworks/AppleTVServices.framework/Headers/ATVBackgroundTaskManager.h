/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

#import </libobjc.A.h>


@interface ATVBackgroundTaskManager : NSObject {
}
+ (id)sharedInstance;	// 0x3008c4c1
- (void)disableBackgroundTasksOfType:(int)type;	// 0x3008cbe9
- (void)enableBackgroundTasksOfType:(int)type;	// 0x3008c9c5
- (void)performFinishedForTask:(id)task;	// 0x3008cf51
- (void)registerBackgroundTask:(id)task;	// 0x3008c585
- (BOOL)tasksEnabledOfType:(int)type;	// 0x3008ce0d
- (void)unregisterBackgroundTask:(id)task;	// 0x3008c7a5
- (void)updateTasksForTimeChange;	// 0x3008ce1d
@end

