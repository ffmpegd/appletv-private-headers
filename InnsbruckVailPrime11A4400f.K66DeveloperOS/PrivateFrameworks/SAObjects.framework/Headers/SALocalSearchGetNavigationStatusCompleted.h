/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSNumber, SALocalSearchRoute, SALocalSearchAceNavigationEta, NSString;

@interface SALocalSearchGetNavigationStatusCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(retain, nonatomic) NSNumber *etaInMinutes;	// G=0x326d1739; S=0x326d1755; 
@property(retain, nonatomic) NSNumber *navigating;	// G=0x326d1771; S=0x326d178d; 
@property(retain, nonatomic) SALocalSearchAceNavigationEta *nextManeuverEta;	// G=0x326d17a9; S=0x326d17ed; 
@property(retain, nonatomic) SALocalSearchAceNavigationEta *overallEta;	// G=0x326d1829; S=0x326d186d; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(retain, nonatomic) SALocalSearchRoute *route;	// G=0x326d18a9; S=0x326d18ed; 
+ (id)getNavigationStatusCompleted;	// 0x326d16a9
+ (id)getNavigationStatusCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x326d16ed
- (id)encodedClassName;	// 0x326d169d
// declared property getter: - (id)etaInMinutes;	// 0x326d1739
- (id)groupIdentifier;	// 0x326d168d
// declared property getter: - (id)navigating;	// 0x326d1771
// declared property getter: - (id)nextManeuverEta;	// 0x326d17a9
// declared property getter: - (id)overallEta;	// 0x326d1829
// declared property getter: - (id)route;	// 0x326d18a9
// declared property setter: - (void)setEtaInMinutes:(id)minutes;	// 0x326d1755
// declared property setter: - (void)setNavigating:(id)navigating;	// 0x326d178d
// declared property setter: - (void)setNextManeuverEta:(id)eta;	// 0x326d17ed
// declared property setter: - (void)setOverallEta:(id)eta;	// 0x326d186d
// declared property setter: - (void)setRoute:(id)route;	// 0x326d18ed
@end
