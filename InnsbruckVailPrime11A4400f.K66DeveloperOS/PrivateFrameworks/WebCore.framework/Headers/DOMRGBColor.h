/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"
#import "WebCore-Structs.h"

@class DOMCSSPrimitiveValue;

@interface DOMRGBColor : DOMObject {
}
@property(readonly, assign) DOMCSSPrimitiveValue *alpha;	// G=0x3304f6ad; 
@property(readonly, assign) DOMCSSPrimitiveValue *blue;	// G=0x3304f551; 
@property(readonly, assign) DOMCSSPrimitiveValue *green;	// G=0x3304f3f1; 
@property(readonly, assign) DOMCSSPrimitiveValue *red;	// G=0x3304f101; 
// declared property getter: - (id)alpha;	// 0x3304f6ad
// declared property getter: - (id)blue;	// 0x3304f551
- (CGColorRef)color;	// 0x331c3cd1
- (void)dealloc;	// 0x33053309
- (void)finalize;	// 0x331c3c81
// declared property getter: - (id)green;	// 0x3304f3f1
// declared property getter: - (id)red;	// 0x3304f101
@end

