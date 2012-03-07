/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMLineShapeBuilder.h"

@class OADPath;

__attribute__((visibility("hidden")))
@interface CMFreeFormShapeBuilder : CMLineShapeBuilder {
@private
	OADPath *_path;	// 24 = 0x18
	CGSize _space;	// 28 = 0x1c
}
- (CGPoint)_renderPathElement:(id)element withTransform:(CGAffineTransform)transform inPath:(CGPathRef)path;	// 0x35270969
- (CGAffineTransform)affineTransform;	// 0x3527053d
- (CGPathRef)createShapeWithTransform:(CGAffineTransform)transform;	// 0x35270841
- (void)dealloc;	// 0x35270dbd
- (void)setPath:(id)path;	// 0x35270499
- (void)setSpace:(CGSize)space;	// 0x352704d9
@end

