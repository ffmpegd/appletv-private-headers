/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "ODICycle.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface ODICycle5 : ODICycle {
}
+ (void)addShapeForNode:(id)node relativeBounds:(CGRect)bounds state:(id)state;	// 0x32acfa69
+ (void)addShapeForTransition:(id)transition startAngle:(float)angle endAngle:(float)angle3 state:(id)state;	// 0x32acf895
+ (float)intersectionAngleNextToAngle:(float)angle isAfter:(BOOL)after state:(id)state;	// 0x32acf531
+ (BOOL)map1NodeWithState:(id)state;	// 0x32acf365
+ (BOOL)map2NodeWithState:(id)state;	// 0x32acead5
+ (CGRect)mapGSpaceWithState:(id)state;	// 0x32acfaf5
+ (void)mapNode:(id)node index:(unsigned)index state:(id)state;	// 0x32acfa11
+ (void)mapStyleForTransition:(id)transition shape:(id)shape state:(id)state;	// 0x32acf875
+ (void)mapTransition:(id)transition index:(unsigned)index state:(id)state;	// 0x32acf405
+ (CGSize)nodeSizeWithState:(id)state;	// 0x32acfb15
+ (float)normalizedAngle:(float)angle;	// 0x32acf9c1
@end

