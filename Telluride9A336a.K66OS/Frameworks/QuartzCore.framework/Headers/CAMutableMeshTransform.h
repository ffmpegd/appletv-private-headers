/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CAMeshTransform.h"

@class NSString;

@interface CAMutableMeshTransform : CAMeshTransform {
}
@property(copy) NSString *depthNormalization;	// G=0x361698bd; S=0x36169f99; 
@property(assign) int subdivisionSteps;	// G=0x36169921; S=0x36168d45; 
+ (id)meshTransform;	// 0x361698e9
- (id)init;	// 0x36169fa1
- (void)addFace:(CAMeshFace)face;	// 0x36169aa9
- (void)addVertex:(CAMeshVertex)vertex;	// 0x36169e05
- (id)copyWithZone:(NSZone *)zone;	// 0x3616994d
// declared property getter: - (id)depthNormalization;	// 0x361698bd
- (void)removeFaceAtIndex:(unsigned long)index;	// 0x36169985
- (void)removeVertexAtIndex:(unsigned long)index;	// 0x36169cd1
- (void)replaceFaceAtIndex:(unsigned long)index withFace:(CAMeshFace)face;	// 0x36169bd5
- (void)replaceVertexAtIndex:(unsigned long)index withVertex:(CAMeshVertex)vertex;	// 0x36169ef5
// declared property setter: - (void)setDepthNormalization:(id)normalization;	// 0x36169f99
// declared property setter: - (void)setSubdivisionSteps:(int)steps;	// 0x36168d45
// declared property getter: - (int)subdivisionSteps;	// 0x36169921
@end

