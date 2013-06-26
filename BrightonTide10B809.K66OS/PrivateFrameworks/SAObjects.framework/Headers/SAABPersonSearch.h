/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class SALocation, NSString, SAPhone, NSURL, NSDate, SAEmail, NSNumber;

@interface SAABPersonSearch : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSURL *accountIdentifier;	// G=0x353ce1b5; S=0x353ce231; 
@property(retain, nonatomic) SALocation *address;	// G=0x353ce291; S=0x353ce2e5; 
@property(copy, nonatomic) NSDate *birthday;	// G=0x353ce321; S=0x353ce33d; 
@property(copy, nonatomic) NSString *company;	// G=0x353ce38d; S=0x353ce3a9; 
@property(retain, nonatomic) SAEmail *email;	// G=0x353ce3f9; S=0x353ce44d; 
@property(copy, nonatomic) NSNumber *me;	// G=0x353ce489; S=0x353ce4a5; 
@property(copy, nonatomic) NSString *name;	// G=0x353ce4f5; S=0x353ce511; 
@property(retain, nonatomic) SAPhone *phone;	// G=0x353ce561; S=0x353ce5b5; 
@property(copy, nonatomic) NSString *relationship;	// G=0x353ce5f1; S=0x353ce60d; 
@property(copy, nonatomic) NSString *scope;	// G=0x353ce65d; S=0x353ce679; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x353ce0d9; S=0x353ce155; 
+ (id)personSearch;	// 0x353ce049
+ (id)personSearchWithDictionary:(id)dictionary context:(id)context;	// 0x353ce08d
// declared property getter: - (id)accountIdentifier;	// 0x353ce1b5
// declared property getter: - (id)address;	// 0x353ce291
// declared property getter: - (id)birthday;	// 0x353ce321
// declared property getter: - (id)company;	// 0x353ce38d
// declared property getter: - (id)email;	// 0x353ce3f9
- (id)encodedClassName;	// 0x353ce03d
- (id)groupIdentifier;	// 0x353ce02d
// declared property getter: - (id)me;	// 0x353ce489
// declared property getter: - (id)name;	// 0x353ce4f5
// declared property getter: - (id)phone;	// 0x353ce561
// declared property getter: - (id)relationship;	// 0x353ce5f1
- (BOOL)requiresResponse;	// 0x353ce6c9
// declared property getter: - (id)scope;	// 0x353ce65d
// declared property setter: - (void)setAccountIdentifier:(id)identifier;	// 0x353ce231
// declared property setter: - (void)setAddress:(id)address;	// 0x353ce2e5
// declared property setter: - (void)setBirthday:(id)birthday;	// 0x353ce33d
// declared property setter: - (void)setCompany:(id)company;	// 0x353ce3a9
// declared property setter: - (void)setEmail:(id)email;	// 0x353ce44d
// declared property setter: - (void)setMe:(id)me;	// 0x353ce4a5
// declared property setter: - (void)setName:(id)name;	// 0x353ce511
// declared property setter: - (void)setPhone:(id)phone;	// 0x353ce5b5
// declared property setter: - (void)setRelationship:(id)relationship;	// 0x353ce60d
// declared property setter: - (void)setScope:(id)scope;	// 0x353ce679
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x353ce155
// declared property getter: - (id)targetAppId;	// 0x353ce0d9
@end
