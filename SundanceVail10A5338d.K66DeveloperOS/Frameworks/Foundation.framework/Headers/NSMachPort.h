/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSPort.h"


@interface NSMachPort : NSPort {
	id _delegate;	// 4 = 0x4
	unsigned _flags;	// 8 = 0x8
	unsigned _machPort;	// 12 = 0xc
	unsigned _reserved;	// 16 = 0x10
}
@property(assign) id delegate;	// G=0x37337e4d; S=0x37337eb9; converted property
@property(readonly, assign) unsigned machPort;	// G=0x373503fd; converted property
+ (void)_fixNSMachPortLeak;	// 0x373a07d5
+ (id)port;	// 0x373a0665
+ (id)portWithMachPort:(unsigned)machPort;	// 0x373a06a1
+ (id)portWithMachPort:(unsigned)machPort options:(unsigned)options;	// 0x373a06e1
+ (void)resetAllPorts;	// 0x373a0661
+ (BOOL)sendBeforeTime:(double)time streamData:(id)data components:(id)components to:(id)to from:(id)from msgid:(unsigned)msgid reserved:(unsigned)reserved;	// 0x373a0941
- (id)init;	// 0x373a1081
- (id)initWithMachPort:(unsigned)machPort;	// 0x37337ccd
- (id)initWithMachPort:(unsigned)machPort options:(unsigned)options;	// 0x37337ce5
- (unsigned long)_cfTypeID;	// 0x373a0725
- (BOOL)_isDeallocating;	// 0x373a07dd
- (BOOL)_tryRetain;	// 0x373a07e1
- (void)dealloc;	// 0x373a10f9
// converted property getter: - (id)delegate;	// 0x37337e4d
- (void)finalize;	// 0x373a1125
- (unsigned)hash;	// 0x373a0781
- (void)invalidate;	// 0x3734c749
- (BOOL)isEqual:(id)equal;	// 0x373a0729
- (BOOL)isKindOfClass:(Class)aClass;	// 0x373a0839
- (BOOL)isMemberOfClass:(Class)aClass;	// 0x373a08bd
- (BOOL)isValid;	// 0x37337ff9
// converted property getter: - (unsigned)machPort;	// 0x373503fd
- (oneway void)release;	// 0x373394a5
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x373a0f81
- (id)retain;	// 0x3734c901
- (unsigned)retainCount;	// 0x373a07e5
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x37337f55
- (BOOL)sendBeforeDate:(id)date components:(id)components from:(id)from reserved:(unsigned)reserved;	// 0x373a0ebd
- (BOOL)sendBeforeDate:(id)date msgid:(unsigned)msgid components:(id)components from:(id)from reserved:(unsigned)reserved;	// 0x373a0f19
- (BOOL)sendBeforeTime:(double)time streamData:(void *)data components:(id)components from:(id)from msgid:(unsigned)msgid;	// 0x373a0e61
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x37337eb9
@end
