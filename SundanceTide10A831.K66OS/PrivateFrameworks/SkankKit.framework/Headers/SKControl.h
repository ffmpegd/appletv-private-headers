/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SkankKit-Structs.h"
#import "SKLayer.h"


@interface SKControl : SKLayer {
	id _target;	// 56 = 0x38
	SEL _action;	// 60 = 0x3c
	BOOL _enabled;	// 64 = 0x40
}
@property(assign) SEL action;	// G=0x35a9ff25; S=0x35a9ff35; converted property
@property(assign) BOOL enabled;	// G=0x35a9ff79; S=0x35a9ff89; converted property
@property(retain) id target;	// G=0x35a9ff05; S=0x35a9ff15; converted property
- (id)init;	// 0x35a9fea9
// converted property getter: - (SEL)action;	// 0x35a9ff25
// converted property getter: - (BOOL)enabled;	// 0x35a9ff79
- (BOOL)handleEvent:(GSEventRef)event inLayer:(id)layer;	// 0x35aa0005
- (void)performAction;	// 0x35a9ffc1
// converted property setter: - (void)setAction:(SEL)action;	// 0x35a9ff35
// converted property setter: - (void)setEnabled:(BOOL)enabled;	// 0x35a9ff89
// converted property setter: - (void)setTarget:(id)target;	// 0x35a9ff15
- (void)setTarget:(id)target andAction:(SEL)action;	// 0x35a9ff45
// converted property getter: - (id)target;	// 0x35a9ff05
@end

