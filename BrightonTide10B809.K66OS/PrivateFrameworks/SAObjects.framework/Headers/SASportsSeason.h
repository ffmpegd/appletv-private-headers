/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class SASportsSeasonRange;

@interface SASportsSeason : AceObject <SAAceSerializable> {
}
@property(retain, nonatomic) SASportsSeasonRange *postSeason;	// G=0x353fcd8d; S=0x353fcde1; 
@property(retain, nonatomic) SASportsSeasonRange *preSeason;	// G=0x353fce1d; S=0x353fce71; 
@property(retain, nonatomic) SASportsSeasonRange *regularSeason;	// G=0x353fcead; S=0x353fcf01; 
+ (id)season;	// 0x353fccfd
+ (id)seasonWithDictionary:(id)dictionary context:(id)context;	// 0x353fcd41
- (id)encodedClassName;	// 0x353fccf1
- (id)groupIdentifier;	// 0x353fcce1
// declared property getter: - (id)postSeason;	// 0x353fcd8d
// declared property getter: - (id)preSeason;	// 0x353fce1d
// declared property getter: - (id)regularSeason;	// 0x353fcead
// declared property setter: - (void)setPostSeason:(id)season;	// 0x353fcde1
// declared property setter: - (void)setPreSeason:(id)season;	// 0x353fce71
// declared property setter: - (void)setRegularSeason:(id)season;	// 0x353fcf01
@end
