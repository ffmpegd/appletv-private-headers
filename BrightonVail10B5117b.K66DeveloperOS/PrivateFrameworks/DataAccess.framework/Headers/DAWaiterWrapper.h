/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@protocol DADataclassLockWatcher;

@interface DAWaiterWrapper : NSObject {
	id<DADataclassLockWatcher> _waiter;	// 4 = 0x4
	int _dataclasses;	// 8 = 0x8
	id _completionHandler;	// 12 = 0xc
	int _waiterNum;	// 16 = 0x10
}
@property(copy) id completionHandler;	// G=0x33b50321; S=0x33b50335; @synthesize=_completionHandler
@property(assign) int dataclasses;	// G=0x33b50345; S=0x33b50359; @synthesize=_dataclasses
@property(retain) id<DADataclassLockWatcher> waiter;	// G=0x33b502fd; S=0x33b50311; @synthesize=_waiter
@property(readonly, assign) int waiterNum;	// G=0x33b50371; @synthesize=_waiterNum
- (id)init;	// 0x33b501d1
// declared property getter: - (id)completionHandler;	// 0x33b50321
// declared property getter: - (int)dataclasses;	// 0x33b50345
- (void)dealloc;	// 0x33b50299
- (id)description;	// 0x33b50221
// declared property setter: - (void)setCompletionHandler:(id)handler;	// 0x33b50335
// declared property setter: - (void)setDataclasses:(int)dataclasses;	// 0x33b50359
// declared property setter: - (void)setWaiter:(id)waiter;	// 0x33b50311
// declared property getter: - (id)waiter;	// 0x33b502fd
// declared property getter: - (int)waiterNum;	// 0x33b50371
@end

