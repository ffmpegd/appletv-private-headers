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
- (CGPoint)_renderPathElement:(id)element withTransform:(CGAffineTransform)transform inPath:(CGPathRef)path;	// 0x32967969
- (CGAffineTransform)affineTransform;	// 0x3296753d
- (CGPathRef)createShapeWithTransform:(CGAffineTransform)transform;	// 0x32967841
- (void)dealloc;	// 0x32967dbd
- (void)setPath:(id)path;	// 0x32967499
- (void)setSpace:(CGSize)space;	// 0x329674d9
@end
