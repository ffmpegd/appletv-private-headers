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
@property(assign) id delegate;	// G=0x320988d1; S=0x320988c1; converted property
+ (void)_fixNSMessagePortLeak;	// 0x32099089
+ (BOOL)sendBeforeTime:(double)time streamData:(id)data components:(id)components to:(id)to from:(id)from msgid:(unsigned)msgid reserved:(unsigned)reserved;	// 0x32098919
- (id)init;	// 0x32099075
- (id)initWithName:(id)name;	// 0x32098d39
- (id)initWithRemoteName:(id)remoteName;	// 0x32099009
- (BOOL)_isDeallocating;	// 0x3209908d
- (BOOL)_tryRetain;	// 0x32099091
- (void)dealloc;	// 0x32099149
// converted property getter: - (id)delegate;	// 0x320988d1
- (void)finalize;	// 0x32099191
- (void)invalidate;	// 0x32098849
- (BOOL)isValid;	// 0x32098825
- (id)name;	// 0x320988e1
- (oneway void)release;	// 0x320990b1
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x32098ced
- (id)retain;	// 0x32099095
- (unsigned)retainCount;	// 0x32099135
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x32098ca1
- (BOOL)sendBeforeDate:(id)date components:(id)components from:(id)from reserved:(unsigned)reserved;	// 0x32098bd9
- (BOOL)sendBeforeDate:(id)date msgid:(unsigned)msgid components:(id)components from:(id)from reserved:(unsigned)reserved;	// 0x32098c39
- (BOOL)sendBeforeTime:(double)time streamData:(void *)data components:(id)components from:(id)from msgid:(unsigned)msgid;	// 0x32098b79
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x320988c1
- (BOOL)setName:(id)name;	// 0x320988f5
@end

