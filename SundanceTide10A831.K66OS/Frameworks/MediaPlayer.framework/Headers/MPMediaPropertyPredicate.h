/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPMediaPredicate.h"

@class NSString;

@interface MPMediaPropertyPredicate : MPMediaPredicate {
	MPMediaPropertyPredicateInternal _internal;	// 4 = 0x4
}
@property(assign, nonatomic) MPMediaPropertyPredicateInternal _internal;	// G=0x36f08e11; S=0x36f08e31; @synthesize
@property(assign, nonatomic) int comparisonType;	// G=0x36f08de9; S=0x36f08dfd; 
@property(copy, nonatomic) NSString *property;	// G=0x36f08d71; S=0x36f08d81; 
@property(copy, nonatomic) id value;	// G=0x36f08da9; S=0x36f08dbd; 
+ (id)predicateWithValue:(id)value forProperty:(id)property;	// 0x36f08c31
+ (id)predicateWithValue:(id)value forProperty:(id)property comparisonType:(int)type;	// 0x36f08c55
- (id)initWithCoder:(id)coder;	// 0x36f086c9
- (id)ML3PredicateForContainer;	// 0x36f466ed
- (id)ML3PredicateForTrack;	// 0x36f4669d
- (id)_ML3PredicateForML3EntityProperty:(id)ml3EntityProperty;	// 0x36f4673d
// declared property getter: - (MPMediaPropertyPredicateInternal)_internal;	// 0x36f08e11
// declared property getter: - (int)comparisonType;	// 0x36f08de9
- (void)dealloc;	// 0x36f08671
- (id)description;	// 0x36f08a09
- (id)descriptionOfValue:(id)value forProperty:(id)property;	// 0x36f088d5
- (void)encodeWithCoder:(id)coder;	// 0x36f08809
- (unsigned)hash;	// 0x36f08bed
- (BOOL)isEqual:(id)equal;	// 0x36f08b3d
// declared property getter: - (id)property;	// 0x36f08d71
// declared property setter: - (void)setComparisonType:(int)type;	// 0x36f08dfd
// declared property setter: - (void)setProperty:(id)property;	// 0x36f08d81
// declared property setter: - (void)setValue:(id)value;	// 0x36f08dbd
// declared property setter: - (void)set_internal:(MPMediaPropertyPredicateInternal)internal;	// 0x36f08e31
// declared property getter: - (id)value;	// 0x36f08da9
@end
