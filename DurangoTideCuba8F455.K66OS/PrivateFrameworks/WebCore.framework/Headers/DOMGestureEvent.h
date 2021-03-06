/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMUIEvent.h"

@protocol DOMEventTarget;

__attribute__((visibility("hidden")))
@interface DOMGestureEvent : DOMUIEvent {
}
@property(readonly, assign) BOOL altKey;	// G=0x3182f351; 
@property(readonly, assign) BOOL ctrlKey;	// G=0x3182f321; 
@property(readonly, assign) BOOL metaKey;	// G=0x3182f369; 
@property(readonly, assign) float rotation;	// G=0x3182f30d; 
@property(readonly, assign) float scale;	// G=0x3182f2f9; 
@property(readonly, assign) BOOL shiftKey;	// G=0x3182f339; 
@property(readonly, retain) id<DOMEventTarget> target;	// G=0x3182f381; 
- (void)initGestureEvent:(id)event canBubble:(BOOL)bubble cancelable:(BOOL)cancelable view:(id)view detail:(int)detail screenX:(int)x screenY:(int)y clientX:(int)x8 clientY:(int)y9 ctrlKey:(BOOL)key altKey:(BOOL)key11 shiftKey:(BOOL)key12 metaKey:(BOOL)key13 target:(id)target scale:(float)scale rotation:(float)rotation;	// 0x3182f39d
// declared property getter: - (BOOL)altKey;	// 0x3182f351
// declared property getter: - (BOOL)ctrlKey;	// 0x3182f321
// declared property getter: - (BOOL)metaKey;	// 0x3182f369
// declared property getter: - (float)rotation;	// 0x3182f30d
// declared property getter: - (float)scale;	// 0x3182f2f9
// declared property getter: - (BOOL)shiftKey;	// 0x3182f339
// declared property getter: - (id)target;	// 0x3182f381
@end

