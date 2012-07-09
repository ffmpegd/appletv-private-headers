/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SASportsMatchup.h"

@class NSString, NSNumber;

@interface SASportsBaseballMatchup : SASportsMatchup {
}
@property(copy, nonatomic) NSNumber *awayErrors;	// G=0x3797f905; S=0x3797f921; 
@property(copy, nonatomic) NSNumber *awayHits;	// G=0x3797f971; S=0x3797f98d; 
@property(copy, nonatomic) NSNumber *balls;	// G=0x3797f9dd; S=0x3797f9f9; 
@property(copy, nonatomic) NSNumber *homeErrors;	// G=0x3797fa49; S=0x3797fa65; 
@property(copy, nonatomic) NSNumber *homeHits;	// G=0x3797fab5; S=0x3797fad1; 
@property(copy, nonatomic) NSString *inningStatus;	// G=0x3797fb21; S=0x3797fb3d; 
@property(copy, nonatomic) NSNumber *onFirst;	// G=0x3797fb8d; S=0x3797fba9; 
@property(copy, nonatomic) NSNumber *onSecond;	// G=0x3797fbf9; S=0x3797fc15; 
@property(copy, nonatomic) NSNumber *onThird;	// G=0x3797fc65; S=0x3797fc81; 
@property(copy, nonatomic) NSNumber *outs;	// G=0x3797fcd1; S=0x3797fced; 
@property(copy, nonatomic) NSNumber *strikes;	// G=0x3797fd3d; S=0x3797fd59; 
+ (id)baseballMatchup;	// 0x3797f875
+ (id)baseballMatchupWithDictionary:(id)dictionary context:(id)context;	// 0x3797f8b9
// declared property getter: - (id)awayErrors;	// 0x3797f905
// declared property getter: - (id)awayHits;	// 0x3797f971
// declared property getter: - (id)balls;	// 0x3797f9dd
- (id)encodedClassName;	// 0x3797f869
- (id)groupIdentifier;	// 0x3797f859
// declared property getter: - (id)homeErrors;	// 0x3797fa49
// declared property getter: - (id)homeHits;	// 0x3797fab5
// declared property getter: - (id)inningStatus;	// 0x3797fb21
// declared property getter: - (id)onFirst;	// 0x3797fb8d
// declared property getter: - (id)onSecond;	// 0x3797fbf9
// declared property getter: - (id)onThird;	// 0x3797fc65
// declared property getter: - (id)outs;	// 0x3797fcd1
// declared property setter: - (void)setAwayErrors:(id)errors;	// 0x3797f921
// declared property setter: - (void)setAwayHits:(id)hits;	// 0x3797f98d
// declared property setter: - (void)setBalls:(id)balls;	// 0x3797f9f9
// declared property setter: - (void)setHomeErrors:(id)errors;	// 0x3797fa65
// declared property setter: - (void)setHomeHits:(id)hits;	// 0x3797fad1
// declared property setter: - (void)setInningStatus:(id)status;	// 0x3797fb3d
// declared property setter: - (void)setOnFirst:(id)first;	// 0x3797fba9
// declared property setter: - (void)setOnSecond:(id)second;	// 0x3797fc15
// declared property setter: - (void)setOnThird:(id)third;	// 0x3797fc81
// declared property setter: - (void)setOuts:(id)outs;	// 0x3797fced
// declared property setter: - (void)setStrikes:(id)strikes;	// 0x3797fd59
// declared property getter: - (id)strikes;	// 0x3797fd3d
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x3797fda9
@end
