/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class ATVJSContext;

__attribute__((visibility("hidden")))
@interface ATVJSTimerContext : NSObject {
@private
	ATVJSContext *_context;	// 4 = 0x4
	OpaqueJSValue *_callback;	// 8 = 0x8
	OpaqueJSValue *_thisObject;	// 12 = 0xc
	const OpaqueJSValue **_args;	// 16 = 0x10
	unsigned long _argCount;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) unsigned long argCount;	// G=0x33a3152d; @synthesize=_argCount
@property(readonly, assign, nonatomic) const OpaqueJSValue **args;	// G=0x33a3151d; @synthesize=_args
@property(readonly, assign, nonatomic) OpaqueJSValue *callback;	// G=0x33a314fd; @synthesize=_callback
@property(readonly, assign) ATVJSContext *context;	// G=0x33a314e9; @synthesize=_context
@property(readonly, assign, nonatomic) OpaqueJSValue *thisObject;	// G=0x33a3150d; @synthesize=_thisObject
- (id)initWithContext:(id)context callback:(OpaqueJSValue *)callback thisObject:(OpaqueJSValue *)object args:(const OpaqueJSValue **)args argCount:(unsigned long)count;	// 0x33a31199
// declared property getter: - (unsigned long)argCount;	// 0x33a3152d
// declared property getter: - (const OpaqueJSValue **)args;	// 0x33a3151d
// declared property getter: - (OpaqueJSValue *)callback;	// 0x33a314fd
// declared property getter: - (id)context;	// 0x33a314e9
- (void)dealloc;	// 0x33a31351
// declared property getter: - (OpaqueJSValue *)thisObject;	// 0x33a3150d
@end

