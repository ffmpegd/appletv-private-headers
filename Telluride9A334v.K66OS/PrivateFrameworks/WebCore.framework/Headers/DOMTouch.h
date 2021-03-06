/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@protocol DOMEventTarget;

__attribute__((visibility("hidden")))
@interface DOMTouch : DOMObject {
}
@property(readonly, assign) int clientX;	// G=0x36878509; 
@property(readonly, assign) int clientY;	// G=0x36878535; 
@property(readonly, assign) unsigned identifier;	// G=0x368784dd; 
@property(readonly, assign) int pageX;	// G=0x36878561; 
@property(readonly, assign) int pageY;	// G=0x3687858d; 
@property(readonly, assign) int screenX;	// G=0x368785b9; 
@property(readonly, assign) int screenY;	// G=0x368785e5; 
@property(readonly, retain) id<DOMEventTarget> target;	// G=0x3687868d; 
// declared property getter: - (int)clientX;	// 0x36878509
// declared property getter: - (int)clientY;	// 0x36878535
- (void)dealloc;	// 0x36878611
- (void)finalize;	// 0x36878749
// declared property getter: - (unsigned)identifier;	// 0x368784dd
// declared property getter: - (int)pageX;	// 0x36878561
// declared property getter: - (int)pageY;	// 0x3687858d
// declared property getter: - (int)screenX;	// 0x368785b9
// declared property getter: - (int)screenY;	// 0x368785e5
// declared property getter: - (id)target;	// 0x3687868d
@end

