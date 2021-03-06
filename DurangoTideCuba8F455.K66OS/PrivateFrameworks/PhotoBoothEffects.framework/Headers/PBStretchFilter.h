/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

#import "PhotoBoothEffects-Structs.h"
#import "PBFilter.h"


@interface PBStretchFilter : PBFilter {
	CGPoint inputPoint;	// 8 = 0x8
}
@property(assign) CGPoint inputPoint;	// G=0x30b5bd0d; S=0x30b5bce1; @synthesize
- (const char *)_fragmentShaderSource;	// 0x30b5b8a9
- (id)_glesUniforms;	// 0x30b5b8ed
- (id)_lookupTableNames;	// 0x30b5b8c5
// declared property getter: - (CGPoint)inputPoint;	// 0x30b5bd0d
- (unsigned long)kernelArgCount;	// 0x30b5b8b5
- (/*function-pointer*/ void *)kernelWrapper;	// 0x30b5b8b9
- (void)renderWithContext:(id)context inputSize:(CGSize)size outputRect:(CGRect)rect mirrored:(BOOL)mirrored;	// 0x30b5bad1
- (void)setDefaults;	// 0x30b5b95d
// declared property setter: - (void)setInputPoint:(CGPoint)point;	// 0x30b5bce1
- (void)setupKernelArguments:(id)arguments mirrored:(BOOL)mirrored;	// 0x30b5b99d
@end

