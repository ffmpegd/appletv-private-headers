/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"


@interface BRReflectionControl : BRControl {
@private
	float _reflectionAmount;	// 48 = 0x30
	float _reflectionOffset;	// 52 = 0x34
	BOOL _flipped;	// 56 = 0x38
}
@property(assign) BOOL flipped;	// G=0x366bb5d1; S=0x366bb455; converted property
@property(assign) float reflectionAmount;	// G=0x366bb425; S=0x366bb3bd; converted property
@property(assign) float reflectionOffset;	// G=0x366bb445; S=0x366bb435; converted property
- (id)init;	// 0x366bb305
- (id)_generateFiltersFrom:(float)from to:(float)to;	// 0x366bb5e1
- (id)_reflectionFilters;	// 0x366bb711
- (id)_unflippedReflectionFilters;	// 0x366bb751
// converted property getter: - (BOOL)flipped;	// 0x366bb5d1
// converted property getter: - (float)reflectionAmount;	// 0x366bb425
// converted property getter: - (float)reflectionOffset;	// 0x366bb445
// converted property setter: - (void)setFlipped:(BOOL)flipped;	// 0x366bb455
- (void)setImage:(id)image;	// 0x366bb379
// converted property setter: - (void)setReflectionAmount:(float)amount;	// 0x366bb3bd
// converted property setter: - (void)setReflectionOffset:(float)offset;	// 0x366bb435
@end

