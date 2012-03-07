/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class BRControl;

__attribute__((visibility("hidden")))
@interface ATVJSView : NSObject {
@private
	BRControl *_control;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) BRControl *control;	// G=0x342d4fe9; @synthesize=_control
+ (void)addConstructorToObject:(OpaqueJSValue *)object inContext:(OpaqueJSContext *)context;	// 0x342d49c9
+ (OpaqueJSValue *)constructObjectWithClassName:(id)className withATVJSViewClass:(Class)atvjsviewClass inContext:(OpaqueJSContext *)context;	// 0x342d4eb1
+ (id)viewFromValue:(OpaqueJSValue *)value inContext:(OpaqueJSContext *)context exception:(const OpaqueJSValue **)exception;	// 0x342d4e41
// declared property getter: - (id)control;	// 0x342d4fe9
- (void)dealloc;	// 0x342d4f19
- (id)makeControl;	// 0x342d4fcd
@end

