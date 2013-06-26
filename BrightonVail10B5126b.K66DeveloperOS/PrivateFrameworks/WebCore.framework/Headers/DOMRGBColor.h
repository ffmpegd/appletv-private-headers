/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import "DOMObject.h"

@class DOMCSSPrimitiveValue;

@interface DOMRGBColor : DOMObject {
}
@property(readonly, assign) DOMCSSPrimitiveValue *alpha;	// G=0x35ee6995; 
@property(readonly, assign) DOMCSSPrimitiveValue *blue;	// G=0x35ee680d; 
@property(readonly, assign) DOMCSSPrimitiveValue *green;	// G=0x35ee6681; 
@property(readonly, assign) DOMCSSPrimitiveValue *red;	// G=0x35ee6345; 
// declared property getter: - (id)alpha;	// 0x35ee6995
// declared property getter: - (id)blue;	// 0x35ee680d
- (CGColorRef)color;	// 0x3601f99d
- (void)dealloc;	// 0x35eea2d9
- (void)finalize;	// 0x3601f94d
// declared property getter: - (id)green;	// 0x35ee6681
// declared property getter: - (id)red;	// 0x35ee6345
@end
