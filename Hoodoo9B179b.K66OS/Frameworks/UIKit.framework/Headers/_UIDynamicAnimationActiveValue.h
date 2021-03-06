/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


@interface _UIDynamicAnimationActiveValue : NSObject {
@private
	double _value;	// 4 = 0x4
	double _minimumActiveValue;	// 12 = 0xc
	double _maximumActiveValue;	// 20 = 0x14
	int _type;	// 28 = 0x1c
	double _boundaryPull;	// 32 = 0x20
	id _applier;	// 40 = 0x28
	unsigned _lowerBoundary : 1;	// 44 = 0x2c
	unsigned _upperBoundary : 1;	// 44 = 0x2c
}
@property(assign, nonatomic) double maximumActiveValue;	// G=0x33271bf5; S=0x332716a1; @synthesize=_maximumActiveValue
@property(assign, nonatomic) double minimumActiveValue;	// G=0x33271bdd; S=0x3327161d; @synthesize=_minimumActiveValue
@property(assign, nonatomic) int type;	// G=0x33271c0d; S=0x33271725; @synthesize=_type
@property(assign, nonatomic) double value;	// G=0x33271bc5; S=0x332715a9; @synthesize=_value
+ (id)activeValue:(double)value ofType:(int)type;	// 0x332713bd
+ (id)lowerBoundary:(double)boundary ofType:(int)type;	// 0x33271305
+ (id)upperBoundary:(double)boundary ofType:(int)type;	// 0x33271361
- (id)init;	// 0x33271421
- (void)_appendDescriptionToString:(id)string atLevel:(int)level;	// 0x332717f9
- (id)_applier;	// 0x33271505
- (double)_boundaryPull;	// 0x332717a5
- (BOOL)_isLowerBoundary;	// 0x332717d1
- (BOOL)_isUpperBoundary;	// 0x332717e5
- (void)_setBoundaryPull:(double)pull;	// 0x332717bd
- (void)dealloc;	// 0x332714b9
- (id)description;	// 0x33271b85
// declared property getter: - (double)maximumActiveValue;	// 0x33271bf5
// declared property getter: - (double)minimumActiveValue;	// 0x33271bdd
// declared property setter: - (void)setMaximumActiveValue:(double)value;	// 0x332716a1
// declared property setter: - (void)setMinimumActiveValue:(double)value;	// 0x3327161d
// declared property setter: - (void)setType:(int)type;	// 0x33271725
// declared property setter: - (void)setValue:(double)value;	// 0x332715a9
// declared property getter: - (int)type;	// 0x33271c0d
// declared property getter: - (double)value;	// 0x33271bc5
@end

