/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
 */

#import "DATask.h"
#import <NSObject.h> // Unknown library

@class DATaskManager, DAStatusReport;

@interface SubCalDATask : NSObject <DATask> {
	DATaskManager *_taskManager;	// 4 = 0x4
	BOOL _finished;	// 8 = 0x8
	DAStatusReport *_statusReport;	// 12 = 0xc
}
@property(retain, nonatomic) DAStatusReport *statusReport;	// G=0x36df9731; S=0x36df9741; @synthesize=_statusReport
@property(assign, nonatomic) DATaskManager *taskManager;	// G=0x36df9711; S=0x36df9721; @synthesize=_taskManager
- (void)cancelTaskWithReason:(int)reason underlyingError:(id)error;	// 0x36df966d
- (id)consumerDictKey;	// 0x36df7105
- (void)dealloc;	// 0x36df961d
- (void)didFinish;	// 0x36df970d
- (void)finishWithError:(id)error;	// 0x36df9685
- (void)performDelegateCallbackWithError:(id)error;	// 0x36df9709
- (void)performTask;	// 0x36df9669
// declared property setter: - (void)setStatusReport:(id)report;	// 0x36df9741
// declared property setter: - (void)setTaskManager:(id)manager;	// 0x36df9721
- (BOOL)shouldHoldPowerAssertion;	// 0x36df9681
// declared property getter: - (id)statusReport;	// 0x36df9731
// declared property getter: - (id)taskManager;	// 0x36df9711
- (void)willFinish;	// 0x36df9705
@end
