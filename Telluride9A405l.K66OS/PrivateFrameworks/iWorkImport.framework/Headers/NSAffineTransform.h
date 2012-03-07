/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSAffineTransform.h> // Unknown library


@interface NSAffineTransform (GQUAdditions)
- (id)initWithCGAffineTransform:(CGAffineTransform)cgaffineTransform;	// 0x3428acb5
- (float)angle;	// 0x3428a9f9
- (CGRect)boundsOfTransformedRect:(CGRect)transformedRect;	// 0x3428a5dd
- (CGAffineTransform)cgAffineTransform;	// 0x3428a4cd
- (id)description;	// 0x3428a555
- (BOOL)differOnlyByTranslation:(id)translation;	// 0x3428a375
- (BOOL)differsFrom:(id)from;	// 0x3428a2d9
- (BOOL)isAxisAligned;	// 0x3428a8ad
- (void)shearXBy:(float)by yBy:(float)by2;	// 0x3428a715
- (void)transformRect:(CGRect)rect upperLeft:(CGPoint *)left lowerLeft:(CGPoint *)left3 lowerRight:(CGPoint *)right upperRight:(CGPoint *)right5;	// 0x3428a3ed
@end

