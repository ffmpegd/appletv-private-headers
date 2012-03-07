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
@private
	MPMediaPropertyPredicateInternal _internal;	// 4 = 0x4
}
@property(assign, nonatomic) MPMediaPropertyPredicateInternal _internal;	// G=0x33bffd25; S=0x33bffd41; @synthesize
@property(assign, nonatomic) int comparisonType;	// G=0x33bffcfd; S=0x33bffd11; 
@property(copy, nonatomic) NSString *property;	// G=0x33bffc85; S=0x33bffc95; 
@property(copy, nonatomic) id value;	// G=0x33bffcbd; S=0x33bffcd1; 
+ (id)predicateWithValue:(id)value forProperty:(id)property;	// 0x33bffb45
+ (id)predicateWithValue:(id)value forProperty:(id)property comparisonType:(int)type;	// 0x33bffb69
- (id)initWithCoder:(id)coder;	// 0x33bff62d
- (id)ML3PredicateForContainer;	// 0x33c3b0e1
- (id)ML3PredicateForTrack;	// 0x33c3b091
- (id)_ML3PredicateForML3EntityProperty:(id)ml3EntityProperty;	// 0x33c3b131
// declared property getter: - (MPMediaPropertyPredicateInternal)_internal;	// 0x33bffd25
// declared property getter: - (int)comparisonType;	// 0x33bffcfd
- (void)dealloc;	// 0x33bff5d5
- (id)description;	// 0x33bff985
- (id)descriptionOfValue:(id)value forProperty:(id)property;	// 0x33bff851
- (void)encodeWithCoder:(id)coder;	// 0x33bff779
- (unsigned)hash;	// 0x33bffaf9
- (BOOL)isEqual:(id)equal;	// 0x33bffa3d
// declared property getter: - (id)property;	// 0x33bffc85
// declared property setter: - (void)setComparisonType:(int)type;	// 0x33bffd11
// declared property setter: - (void)setProperty:(id)property;	// 0x33bffc95
// declared property setter: - (void)setValue:(id)value;	// 0x33bffcd1
// declared property setter: - (void)set_internal:(MPMediaPropertyPredicateInternal)internal;	// 0x33bffd41
// declared property getter: - (id)value;	// 0x33bffcbd
@end

