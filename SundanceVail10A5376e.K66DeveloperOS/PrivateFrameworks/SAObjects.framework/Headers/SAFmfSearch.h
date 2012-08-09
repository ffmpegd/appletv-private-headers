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
@property(retain, nonatomic) SALocation *currentLocation;	// G=0x3423bc6d; S=0x3423bcc1; 
@property(copy, nonatomic) NSArray *emailAddresses;	// G=0x3423bcfd; S=0x3423bd19; 
@property(copy, nonatomic) NSArray *friends;	// G=0x3423bd69; S=0x3423bde5; 
@property(copy, nonatomic) NSString *proximity;	// G=0x3423be4d; S=0x3423be69; 
@property(retain, nonatomic) SALocation *requestedLocation;	// G=0x3423beb9; S=0x3423bf0d; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x3423bb91; S=0x3423bc0d; 
+ (id)search;	// 0x3423bb01
+ (id)searchWithDictionary:(id)dictionary context:(id)context;	// 0x3423bb45
// declared property getter: - (id)currentLocation;	// 0x3423bc6d
// declared property getter: - (id)emailAddresses;	// 0x3423bcfd
- (id)encodedClassName;	// 0x3423baf5
// declared property getter: - (id)friends;	// 0x3423bd69
- (id)groupIdentifier;	// 0x3423bae5
// declared property getter: - (id)proximity;	// 0x3423be4d
// declared property getter: - (id)requestedLocation;	// 0x3423beb9
- (BOOL)requiresResponse;	// 0x3423bf49
// declared property setter: - (void)setCurrentLocation:(id)location;	// 0x3423bcc1
// declared property setter: - (void)setEmailAddresses:(id)addresses;	// 0x3423bd19
// declared property setter: - (void)setFriends:(id)friends;	// 0x3423bde5
// declared property setter: - (void)setProximity:(id)proximity;	// 0x3423be69
// declared property setter: - (void)setRequestedLocation:(id)location;	// 0x3423bf0d
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x3423bc0d
// declared property getter: - (id)targetAppId;	// 0x3423bb91
@end
