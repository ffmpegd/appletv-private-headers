/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@class NSString;
@protocol DOMEventTarget;

@interface DOMEvent : DOMObject {
}
@property(readonly, assign) BOOL bubbles;	// G=0x3619f051; 
@property(assign) BOOL cancelBubble;	// G=0x3619f2a5; S=0x3619f2d5; 
@property(readonly, assign) BOOL cancelable;	// G=0x3619f081; 
@property(readonly, assign) id<DOMEventTarget> currentTarget;	// G=0x3619ef21; 
@property(readonly, assign) unsigned short eventPhase;	// G=0x3619f025; 
@property(assign) BOOL returnValue;	// G=0x3619f215; S=0x3619f249; 
@property(readonly, assign) id<DOMEventTarget> srcElement;	// G=0x3619f111; 
@property(readonly, assign) id<DOMEventTarget> target;	// G=0x360a1ae9; 
@property(readonly, assign) unsigned long long timeStamp;	// G=0x3619f0b1; 
@property(readonly, assign) NSString *type;	// G=0x3619ee11; 
- (void)initEvent:(id)event :(BOOL)arg2 :(BOOL)arg3;	// 0x3619f569
- (void)initEvent:(id)event canBubbleArg:(BOOL)arg cancelableArg:(BOOL)arg3;	// 0x3619f3ad
// declared property getter: - (BOOL)bubbles;	// 0x3619f051
// declared property getter: - (BOOL)cancelBubble;	// 0x3619f2a5
// declared property getter: - (BOOL)cancelable;	// 0x3619f081
// declared property getter: - (id)currentTarget;	// 0x3619ef21
- (void)dealloc;	// 0x360a1dd1
- (BOOL)defaultPrevented;	// 0x3619f0e1
// declared property getter: - (unsigned short)eventPhase;	// 0x3619f025
- (void)finalize;	// 0x3619edbd
- (void)preventDefault;	// 0x3619f365
// declared property getter: - (BOOL)returnValue;	// 0x3619f215
// declared property setter: - (void)setCancelBubble:(BOOL)bubble;	// 0x3619f2d5
// declared property setter: - (void)setReturnValue:(BOOL)value;	// 0x3619f249
// declared property getter: - (id)srcElement;	// 0x3619f111
- (void)stopImmediatePropagation;	// 0x3619f725
- (void)stopPropagation;	// 0x3619f325
// declared property getter: - (id)target;	// 0x360a1ae9
// declared property getter: - (unsigned long long)timeStamp;	// 0x3619f0b1
// declared property getter: - (id)type;	// 0x3619ee11
@end
