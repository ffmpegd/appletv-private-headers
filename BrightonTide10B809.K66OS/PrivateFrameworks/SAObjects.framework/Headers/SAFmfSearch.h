/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class SALocation, NSString, NSArray, NSURL;

@interface SAFmfSearch : SABaseClientBoundCommand {
}
@property(retain, nonatomic) SALocation *currentLocation;	// G=0x353d7e21; S=0x353d7e75; 
@property(copy, nonatomic) NSArray *emailAddresses;	// G=0x353d7eb1; S=0x353d7ecd; 
@property(copy, nonatomic) NSArray *friends;	// G=0x353d7f1d; S=0x353d7f99; 
@property(copy, nonatomic) NSString *proximity;	// G=0x353d8001; S=0x353d801d; 
@property(retain, nonatomic) SALocation *requestedLocation;	// G=0x353d806d; S=0x353d80c1; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x353d7d45; S=0x353d7dc1; 
+ (id)search;	// 0x353d7cb5
+ (id)searchWithDictionary:(id)dictionary context:(id)context;	// 0x353d7cf9
// declared property getter: - (id)currentLocation;	// 0x353d7e21
// declared property getter: - (id)emailAddresses;	// 0x353d7eb1
- (id)encodedClassName;	// 0x353d7ca9
// declared property getter: - (id)friends;	// 0x353d7f1d
- (id)groupIdentifier;	// 0x353d7c99
// declared property getter: - (id)proximity;	// 0x353d8001
// declared property getter: - (id)requestedLocation;	// 0x353d806d
- (BOOL)requiresResponse;	// 0x353d80fd
// declared property setter: - (void)setCurrentLocation:(id)location;	// 0x353d7e75
// declared property setter: - (void)setEmailAddresses:(id)addresses;	// 0x353d7ecd
// declared property setter: - (void)setFriends:(id)friends;	// 0x353d7f99
// declared property setter: - (void)setProximity:(id)proximity;	// 0x353d801d
// declared property setter: - (void)setRequestedLocation:(id)location;	// 0x353d80c1
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x353d7dc1
// declared property getter: - (id)targetAppId;	// 0x353d7d45
@end
