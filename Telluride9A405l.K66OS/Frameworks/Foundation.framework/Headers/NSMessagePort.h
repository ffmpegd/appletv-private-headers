/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSPort.h"


@interface NSMessagePort : NSPort {
@private
	void *_port;	// 4 = 0x4
	id _delegate;	// 8 = 0x8
}
@property(assign) id delegate;	// G=0x302e58d1; S=0x302e58c1; converted property
+ (void)_fixNSMessagePortLeak;	// 0x302e6089
+ (BOOL)sendBeforeTime:(double)time streamData:(id)data components:(id)components to:(id)to from:(id)from msgid:(unsigned)msgid reserved:(unsigned)reserved;	// 0x302e5919
- (id)init;	// 0x302e6075
- (id)initWithName:(id)name;	// 0x302e5d39
- (id)initWithRemoteName:(id)remoteName;	// 0x302e6009
- (BOOL)_isDeallocating;	// 0x302e608d
- (BOOL)_tryRetain;	// 0x302e6091
- (void)dealloc;	// 0x302e6149
// converted property getter: - (id)delegate;	// 0x302e58d1
- (void)finalize;	// 0x302e6191
- (void)invalidate;	// 0x302e5849
- (BOOL)isValid;	// 0x302e5825
- (id)name;	// 0x302e58e1
- (oneway void)release;	// 0x302e60b1
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x302e5ced
- (id)retain;	// 0x302e6095
- (unsigned)retainCount;	// 0x302e6135
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x302e5ca1
- (BOOL)sendBeforeDate:(id)date components:(id)components from:(id)from reserved:(unsigned)reserved;	// 0x302e5bd9
- (BOOL)sendBeforeDate:(id)date msgid:(unsigned)msgid components:(id)components from:(id)from reserved:(unsigned)reserved;	// 0x302e5c39
- (BOOL)sendBeforeTime:(double)time streamData:(void *)data components:(id)components from:(id)from msgid:(unsigned)msgid;	// 0x302e5b79
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x302e58c1
- (BOOL)setName:(id)name;	// 0x302e58f5
@end

