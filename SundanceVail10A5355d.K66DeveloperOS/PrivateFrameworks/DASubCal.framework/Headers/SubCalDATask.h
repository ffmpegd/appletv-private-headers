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
@property(retain, nonatomic) DAStatusReport *statusReport;	// G=0x37a9f521; S=0x37a9f531; @synthesize=_statusReport
@property(assign, nonatomic) DATaskManager *taskManager;	// G=0x37a9f501; S=0x37a9f511; @synthesize=_taskManager
- (void)cancelTaskWithReason:(int)reason underlyingError:(id)error;	// 0x37a9f45d
- (id)consumerDictKey;	// 0x37a9cf19
- (void)dealloc;	// 0x37a9f40d
- (void)didFinish;	// 0x37a9f4fd
- (void)finishWithError:(id)error;	// 0x37a9f475
- (void)performDelegateCallbackWithError:(id)error;	// 0x37a9f4f9
- (void)performTask;	// 0x37a9f459
// declared property setter: - (void)setStatusReport:(id)report;	// 0x37a9f531
// declared property setter: - (void)setTaskManager:(id)manager;	// 0x37a9f511
- (BOOL)shouldHoldPowerAssertion;	// 0x37a9f471
// declared property getter: - (id)statusReport;	// 0x37a9f521
// declared property getter: - (id)taskManager;	// 0x37a9f501
- (void)willFinish;	// 0x37a9f4f5
@end

