/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface CMShapeUtils : NSObject {
}
+ (id)absoluteOrientedBoundsWithRelativeOrientedBounds:(id)relativeOrientedBounds parentOrientedBounds:(id)bounds parentLogicalBounds:(CGRect)bounds3;	// 0x36bada31
+ (double)fixedPointDegToRad:(long)rad;	// 0x36bae111
+ (float)fontSizeForText:(id)text insideRectangle:(CGSize)rectangle;	// 0x36b2cff5
+ (double)getFormulaResultFromCustomGeometry:(id)customGeometry atIndex:(unsigned)index;	// 0x36b53239
+ (id)inscribedBoundsWithBounds:(id)bounds logicalBounds:(CGRect)bounds2;	// 0x36b2bbd5
+ (id)internalBoundsWithBounds:(id)bounds scaleBounds:(CGRect)bounds2;	// 0x36b2d06d
+ (float)intersectionAngleNextToAngle:(float)angle isAfter:(BOOL)after nodeSize:(CGSize)size;	// 0x36bade51
+ (BOOL)isShapeALine:(id)line;	// 0x36b094f1
+ (double)mapAdjustCoord:(OADAdjustCoord)coord geometry:(id)geometry;	// 0x36a908a1
+ (long)mapFormulaKeywordValue:(int)value geometry:(id)geometry;	// 0x36b5345d
+ (double)mapFormulaOfType:(int)type argValues:(double *)values isEscher:(BOOL)escher;	// 0x36b53521
+ (double)milliMinutesToRad:(long)rad;	// 0x36b5ed69
+ (double)nativeAngleToRad:(long)rad isEscher:(BOOL)escher;	// 0x36b5ed41
+ (float)normalizedAngle:(float)angle;	// 0x36bae1c1
+ (long)radToFixedPointDeg:(double)fixedPointDeg;	// 0x36bae131
+ (long)radToMilliMinutes:(double)milliMinutes;	// 0x36bae191
+ (long)radToNativeAngle:(double)nativeAngle isEscher:(BOOL)escher;	// 0x36bae161
+ (id)relatvieBoundsWithAbsoluteInnerBounds:(id)absoluteInnerBounds parentBounds:(id)bounds;	// 0x36b2be21
+ (float)scaleFactorFromLength:(float)length toLength:(float)length2;	// 0x36a4ec11
+ (void)setCoordSpaceForCustomeGeometry:(id)customeGeometry fromSize:(CGSize)size;	// 0x36b531f5
+ (id)transformFromBounds:(CGRect)bounds toOrientedBounds:(id)orientedBounds;	// 0x36a4e911
+ (CGRect)transformRect:(CGRect)rect scale:(float)scale offsetX:(float)x offsetY:(float)y;	// 0x36b8e5f9
+ (id)transformedBoundsWithBounds:(id)bounds transform:(id)transform;	// 0x36badcad
@end
