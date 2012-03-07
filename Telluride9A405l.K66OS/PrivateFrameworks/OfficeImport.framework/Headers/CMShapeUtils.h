/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CMShapeUtils : NSObject {
}
+ (id)absoluteOrientedBoundsWithRelativeOrientedBounds:(id)relativeOrientedBounds parentOrientedBounds:(id)bounds parentLogicalBounds:(CGRect)bounds3;	// 0x30ed8225
+ (double)fixedPointDegToRad:(long)rad;	// 0x30ed8195
+ (double)fixedPointDegToRad:(long)rad;	// 0x30ed81b5
+ (float)fontSizeForText:(id)text insideRectangle:(CGSize)rectangle;	// 0x30db0175
+ (double)getFormulaResultFromCustomGeometry:(id)customGeometry atIndex:(unsigned)index;	// 0x30d2e805
+ (id)inscribedBoundsWithBounds:(id)bounds logicalBounds:(CGRect)bounds2;	// 0x30daedd9
+ (id)internalBoundsWithBounds:(id)bounds scaleBounds:(CGRect)bounds2;	// 0x30db01e9
+ (float)intersectionAngleNextToAngle:(float)angle isAfter:(BOOL)after nodeSize:(CGSize)size;	// 0x30dd4685
+ (BOOL)isShapeALine:(id)line;	// 0x30d2bf15
+ (double)mapAdjustCoord:(OADAdjustCoord)coord geometry:(id)geometry;	// 0x30d2e7a9
+ (long)mapFormulaKeywordValue:(int)value geometry:(id)geometry;	// 0x30d2e9e5
+ (double)mapFormulaOfType:(int)type argValues:(double *)values isEscher:(BOOL)escher;	// 0x30d2ea89
+ (double)milliMinutesToRad:(long)rad;	// 0x30ed81d5
+ (double)nativeAngleToRad:(long)rad isEscher:(BOOL)escher;	// 0x30ed8445
+ (float)normalizedAngle:(float)angle;	// 0x30dd49c1
+ (long)radToFixedPointDeg:(double)fixedPointDeg;	// 0x30ed84ad
+ (long)radToFixedPointDeg:(double)fixedPointDeg;	// 0x30ed81f5
+ (long)radToMilliMinutes:(double)milliMinutes;	// 0x30ed84dd
+ (long)radToNativeAngle:(double)nativeAngle isEscher:(BOOL)escher;	// 0x30ed8475
+ (id)relatvieBoundsWithAbsoluteInnerBounds:(id)absoluteInnerBounds parentBounds:(id)bounds;	// 0x30daf00d
+ (float)scaleFactorFromLength:(float)length toLength:(float)length2;	// 0x30cb1131
+ (void)setCoordSpaceForCustomeGeometry:(id)customeGeometry fromSize:(CGSize)size;	// 0x30db2e21
+ (id)transformFromBounds:(CGRect)bounds toOrientedBounds:(id)orientedBounds;	// 0x30cb0dd1
+ (CGRect)transformRect:(CGRect)rect scale:(float)scale offsetX:(float)x offsetY:(float)y;	// 0x30dd2115
+ (id)transformedBoundsWithBounds:(id)bounds transform:(id)transform;	// 0x30dd68d5
@end

