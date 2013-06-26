/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIEnhancementCalculation.h"


__attribute__((visibility("hidden")))
@interface CIEnhancementCalculator : CIEnhancementCalculation {
	BOOL faceBalanceEnabled;	// 56 = 0x38
	BOOL vibranceEnabled;	// 57 = 0x39
	BOOL curvesEnabled;	// 58 = 0x3a
	BOOL shadowsEnabled;	// 59 = 0x3b
}
@property(assign) BOOL curvesEnabled;	// G=0x2d709981; S=0x2d709999; @synthesize
@property(assign) BOOL faceBalanceEnabled;	// G=0x2d709921; S=0x2d709939; @synthesize
@property(assign) BOOL shadowsEnabled;	// G=0x2d7099b1; S=0x2d7099c9; @synthesize
@property(assign) BOOL vibranceEnabled;	// G=0x2d709951; S=0x2d709969; @synthesize
- (id)init;	// 0x2d708d11
- (void)analyzeFeatures:(id)features usingContext:(id)context baseImage:(id)image;	// 0x2d709389
// declared property getter: - (BOOL)curvesEnabled;	// 0x2d709981
- (void)dealloc;	// 0x2d708d79
// declared property getter: - (BOOL)faceBalanceEnabled;	// 0x2d709921
- (id)histogramFromRows:(id)rows componentOffset:(unsigned)offset;	// 0x2d708da5
// declared property setter: - (void)setCurvesEnabled:(BOOL)enabled;	// 0x2d709999
// declared property setter: - (void)setFaceBalanceEnabled:(BOOL)enabled;	// 0x2d709939
// declared property setter: - (void)setShadowsEnabled:(BOOL)enabled;	// 0x2d7099c9
// declared property setter: - (void)setVibranceEnabled:(BOOL)enabled;	// 0x2d709969
- (id)setupFaceColorFromImage:(id)image usingContext:(id)context detectorOpts:(id)opts;	// 0x2d709881
- (void)setupFaceColorFromImage:(id)image usingContext:(id)context features:(id)features;	// 0x2d7098fd
- (void)setupHistogramsUsing:(id)aUsing redIndex:(int)index greenIndex:(int)index3 blueIndex:(int)index4;	// 0x2d708ef9
// declared property getter: - (BOOL)shadowsEnabled;	// 0x2d7099b1
// declared property getter: - (BOOL)vibranceEnabled;	// 0x2d709951
@end
