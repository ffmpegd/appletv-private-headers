/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMUIEvent.h"

@class DOMTouchList;

@interface DOMTouchEvent : DOMUIEvent {
}
@property(readonly, assign) BOOL altKey;	// G=0x36025955; 
@property(readonly, assign) DOMTouchList *changedTouches;	// G=0x3602578d; 
@property(readonly, assign) BOOL ctrlKey;	// G=0x360258ed; 
@property(readonly, assign) BOOL metaKey;	// G=0x36025989; 
@property(readonly, assign) float rotation;	// G=0x360258bd; 
@property(readonly, assign) float scale;	// G=0x36025891; 
@property(readonly, assign) BOOL shiftKey;	// G=0x36025921; 
@property(readonly, assign) DOMTouchList *targetTouches;	// G=0x36025689; 
@property(readonly, assign) DOMTouchList *touches;	// G=0x36025585; 
- (void)initTouchEvent:(id)event canBubble:(BOOL)bubble cancelable:(BOOL)cancelable view:(id)view detail:(int)detail screenX:(int)x screenY:(int)y clientX:(int)x8 clientY:(int)y9 ctrlKey:(BOOL)key altKey:(BOOL)key11 shiftKey:(BOOL)key12 metaKey:(BOOL)key13 touches:(id)touches targetTouches:(id)touches15 changedTouches:(id)touches16 scale:(float)scale rotation:(float)rotation;	// 0x360259bd
// declared property getter: - (BOOL)altKey;	// 0x36025955
// declared property getter: - (id)changedTouches;	// 0x3602578d
// declared property getter: - (BOOL)ctrlKey;	// 0x360258ed
// declared property getter: - (BOOL)metaKey;	// 0x36025989
// declared property getter: - (float)rotation;	// 0x360258bd
// declared property getter: - (float)scale;	// 0x36025891
// declared property getter: - (BOOL)shiftKey;	// 0x36025921
// declared property getter: - (id)targetTouches;	// 0x36025689
// declared property getter: - (id)touches;	// 0x36025585
@end

