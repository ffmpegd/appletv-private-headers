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
@property(readonly, assign) BOOL bubbles;	// G=0x3182e7d1; 
@property(assign) BOOL cancelBubble;	// G=0x3182e859; S=0x3182e86d; 
@property(readonly, assign) BOOL cancelable;	// G=0x3182e7e5; 
@property(readonly, retain) id<DOMEventTarget> currentTarget;	// G=0x3182eb79; 
@property(readonly, assign) unsigned short eventPhase;	// G=0x3182e7bd; 
@property(assign) BOOL returnValue;	// G=0x3182e821; S=0x3182e83d; 
@property(readonly, retain) id<DOMEventTarget> srcElement;	// G=0x3182eb5d; 
@property(readonly, retain) id<DOMEventTarget> target;	// G=0x317a41f5; 
@property(readonly, assign) unsigned long long timeStamp;	// G=0x3182e7f9; 
@property(readonly, copy) NSString *type;	// G=0x3182eb95; 
- (void)initEvent:(id)event :(BOOL)arg2 :(BOOL)arg3;	// 0x3182e8cd
- (void)initEvent:(id)event canBubbleArg:(BOOL)arg cancelableArg:(BOOL)arg3;	// 0x3182ea15
// declared property getter: - (BOOL)bubbles;	// 0x3182e7d1
// declared property getter: - (BOOL)cancelBubble;	// 0x3182e859
// declared property getter: - (BOOL)cancelable;	// 0x3182e7e5
// declared property getter: - (id)currentTarget;	// 0x3182eb79
- (void)dealloc;	// 0x317a4229
- (BOOL)defaultPrevented;	// 0x3182e80d
// declared property getter: - (unsigned short)eventPhase;	// 0x3182e7bd
- (void)finalize;	// 0x3182ebbd
- (void)preventDefault;	// 0x3182e89d
// declared property getter: - (BOOL)returnValue;	// 0x3182e821
// declared property setter: - (void)setCancelBubble:(BOOL)bubble;	// 0x3182e86d
// declared property setter: - (void)setReturnValue:(BOOL)value;	// 0x3182e83d
// declared property getter: - (id)srcElement;	// 0x3182eb5d
- (void)stopImmediatePropagation;	// 0x3182e8b9
- (void)stopPropagation;	// 0x3182e889
// declared property getter: - (id)target;	// 0x317a41f5
// declared property getter: - (unsigned long long)timeStamp;	// 0x3182e7f9
// declared property getter: - (id)type;	// 0x3182eb95
@end
