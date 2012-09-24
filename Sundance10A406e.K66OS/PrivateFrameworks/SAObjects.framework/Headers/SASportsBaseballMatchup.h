/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SASportsMatchup.h"

@class NSNumber, NSString;

@interface SASportsBaseballMatchup : SASportsMatchup {
}
@property(copy, nonatomic) NSNumber *awayErrors;	// G=0x3254525d; S=0x32545279; 
@property(copy, nonatomic) NSNumber *awayHits;	// G=0x325452c9; S=0x325452e5; 
@property(copy, nonatomic) NSNumber *balls;	// G=0x32545335; S=0x32545351; 
@property(copy, nonatomic) NSNumber *homeErrors;	// G=0x325453a1; S=0x325453bd; 
@property(copy, nonatomic) NSNumber *homeHits;	// G=0x3254540d; S=0x32545429; 
@property(copy, nonatomic) NSString *inningStatus;	// G=0x32545479; S=0x32545495; 
@property(copy, nonatomic) NSNumber *onFirst;	// G=0x325454e5; S=0x32545501; 
@property(copy, nonatomic) NSNumber *onSecond;	// G=0x32545551; S=0x3254556d; 
@property(copy, nonatomic) NSNumber *onThird;	// G=0x325455bd; S=0x325455d9; 
@property(copy, nonatomic) NSNumber *outs;	// G=0x32545629; S=0x32545645; 
@property(copy, nonatomic) NSNumber *strikes;	// G=0x32545695; S=0x325456b1; 
+ (id)baseballMatchup;	// 0x325451cd
+ (id)baseballMatchupWithDictionary:(id)dictionary context:(id)context;	// 0x32545211
// declared property getter: - (id)awayErrors;	// 0x3254525d
// declared property getter: - (id)awayHits;	// 0x325452c9
// declared property getter: - (id)balls;	// 0x32545335
- (id)encodedClassName;	// 0x325451c1
- (id)groupIdentifier;	// 0x325451b1
// declared property getter: - (id)homeErrors;	// 0x325453a1
// declared property getter: - (id)homeHits;	// 0x3254540d
// declared property getter: - (id)inningStatus;	// 0x32545479
// declared property getter: - (id)onFirst;	// 0x325454e5
// declared property getter: - (id)onSecond;	// 0x32545551
// declared property getter: - (id)onThird;	// 0x325455bd
// declared property getter: - (id)outs;	// 0x32545629
// declared property setter: - (void)setAwayErrors:(id)errors;	// 0x32545279
// declared property setter: - (void)setAwayHits:(id)hits;	// 0x325452e5
// declared property setter: - (void)setBalls:(id)balls;	// 0x32545351
// declared property setter: - (void)setHomeErrors:(id)errors;	// 0x325453bd
// declared property setter: - (void)setHomeHits:(id)hits;	// 0x32545429
// declared property setter: - (void)setInningStatus:(id)status;	// 0x32545495
// declared property setter: - (void)setOnFirst:(id)first;	// 0x32545501
// declared property setter: - (void)setOnSecond:(id)second;	// 0x3254556d
// declared property setter: - (void)setOnThird:(id)third;	// 0x325455d9
// declared property setter: - (void)setOuts:(id)outs;	// 0x32545645
// declared property setter: - (void)setStrikes:(id)strikes;	// 0x325456b1
// declared property getter: - (id)strikes;	// 0x32545695
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x32545701
@end
