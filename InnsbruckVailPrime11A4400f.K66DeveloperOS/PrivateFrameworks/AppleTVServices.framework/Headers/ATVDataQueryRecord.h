/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

#import </libobjc.A.h>

@class ATVDataQuery;
@protocol OS_dispatch_queue;

@interface ATVDataQueryRecord : NSObject {
	NSObject<OS_dispatch_queue> *_completionQueue;	// 4 = 0x4
	id _completionHandler;	// 8 = 0x8
	BOOL _processAsync;	// 12 = 0xc
	ATVDataQuery *_query;	// 16 = 0x10
	int _priority;	// 20 = 0x14
}
@property(assign, nonatomic) int priority;	// G=0x3009827d; S=0x3009828d; @synthesize=_priority
@property(assign, nonatomic) BOOL processAsync;	// G=0x3009829d; S=0x300982ad; @synthesize=_processAsync
@property(retain, nonatomic) ATVDataQuery *query;	// G=0x3009825d; S=0x3009826d; @synthesize=_query
- (id)initWithQuery:(id)query priority:(int)priority processAsync:(BOOL)async withCompletionQueue:(id)completionQueue completionHandler:(id)handler;	// 0x3009805d
- (void)dealloc;	// 0x30098125
// declared property getter: - (int)priority;	// 0x3009827d
// declared property getter: - (BOOL)processAsync;	// 0x3009829d
// declared property getter: - (id)query;	// 0x3009825d
- (void)sendCallBack;	// 0x3009819d
// declared property setter: - (void)setPriority:(int)priority;	// 0x3009828d
// declared property setter: - (void)setProcessAsync:(BOOL)async;	// 0x300982ad
// declared property setter: - (void)setQuery:(id)query;	// 0x3009826d
@end
