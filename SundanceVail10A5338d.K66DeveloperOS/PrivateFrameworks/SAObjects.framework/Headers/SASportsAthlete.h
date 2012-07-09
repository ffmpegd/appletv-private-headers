/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SASportsEntity.h"

@class SASportsTeam, NSString, NSArray, NSNumber;

@interface SASportsAthlete : SASportsEntity {
}
@property(retain, nonatomic) SASportsTeam *activeTeam;	// G=0x37978559; S=0x379785ad; 
@property(copy, nonatomic) NSArray *athleteMetadata;	// G=0x379785e9; S=0x37978665; 
@property(copy, nonatomic) NSString *firstName;	// G=0x379786cd; S=0x379786e9; 
@property(copy, nonatomic) NSArray *formattedMetadata;	// G=0x37978739; S=0x37978755; 
@property(copy, nonatomic) NSString *gender;	// G=0x379787a5; S=0x379787c1; 
@property(copy, nonatomic) NSNumber *injured;	// G=0x37978811; S=0x3797882d; 
@property(copy, nonatomic) NSString *lastName;	// G=0x3797887d; S=0x37978899; 
@property(copy, nonatomic) NSString *position;	// G=0x379788e9; S=0x37978905; 
@property(copy, nonatomic) NSArray *previousTeams;	// G=0x37978955; S=0x379789d1; 
@property(copy, nonatomic) NSArray *statistics;	// G=0x37978a39; S=0x37978ab5; 
+ (id)athlete;	// 0x379784c9
+ (id)athleteWithDictionary:(id)dictionary context:(id)context;	// 0x3797850d
// declared property getter: - (id)activeTeam;	// 0x37978559
// declared property getter: - (id)athleteMetadata;	// 0x379785e9
- (id)encodedClassName;	// 0x379784bd
// declared property getter: - (id)firstName;	// 0x379786cd
// declared property getter: - (id)formattedMetadata;	// 0x37978739
// declared property getter: - (id)gender;	// 0x379787a5
- (id)groupIdentifier;	// 0x379784ad
// declared property getter: - (id)injured;	// 0x37978811
// declared property getter: - (id)lastName;	// 0x3797887d
// declared property getter: - (id)position;	// 0x379788e9
// declared property getter: - (id)previousTeams;	// 0x37978955
// declared property setter: - (void)setActiveTeam:(id)team;	// 0x379785ad
// declared property setter: - (void)setAthleteMetadata:(id)metadata;	// 0x37978665
// declared property setter: - (void)setFirstName:(id)name;	// 0x379786e9
// declared property setter: - (void)setFormattedMetadata:(id)metadata;	// 0x37978755
// declared property setter: - (void)setGender:(id)gender;	// 0x379787c1
// declared property setter: - (void)setInjured:(id)injured;	// 0x3797882d
// declared property setter: - (void)setLastName:(id)name;	// 0x37978899
// declared property setter: - (void)setPosition:(id)position;	// 0x37978905
// declared property setter: - (void)setPreviousTeams:(id)teams;	// 0x379789d1
// declared property setter: - (void)setStatistics:(id)statistics;	// 0x37978ab5
// declared property getter: - (id)statistics;	// 0x37978a39
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x37978b1d
@end
