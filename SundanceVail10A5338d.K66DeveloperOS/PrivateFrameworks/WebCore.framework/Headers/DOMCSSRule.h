/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@class NSString, DOMCSSStyleSheet;

@interface DOMCSSRule : DOMObject {
}
@property(copy) NSString *cssText;	// G=0x357e4d21; S=0x357e4edd; 
@property(readonly, assign) DOMCSSRule *parentRule;	// G=0x357e51a9; 
@property(readonly, assign) DOMCSSStyleSheet *parentStyleSheet;	// G=0x357e5095; 
@property(readonly, assign) unsigned short type;	// G=0x357e4cf1; 
// declared property getter: - (id)cssText;	// 0x357e4d21
- (void)dealloc;	// 0x357e4c2d
- (void)finalize;	// 0x357e4ca1
// declared property getter: - (id)parentRule;	// 0x357e51a9
// declared property getter: - (id)parentStyleSheet;	// 0x357e5095
// declared property setter: - (void)setCssText:(id)text;	// 0x357e4edd
// declared property getter: - (unsigned short)type;	// 0x357e4cf1
@end

