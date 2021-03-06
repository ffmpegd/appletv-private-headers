/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKObject.h"
#import "EventKit-Structs.h"
#import "NSCopying.h"
#import "EKIdentityProtocol.h"

@class NSString, EKCalendar;

@interface EKSharee : EKObject <NSCopying, EKIdentityProtocol> {
}
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x2db16725; 
@property(copy, nonatomic) NSString *emailAddress;	// G=0x2db167c5; S=0x2db167e1; 
@property(copy, nonatomic) NSString *externalID;	// G=0x2db1686d; S=0x2db16889; 
@property(copy, nonatomic) NSString *firstName;	// G=0x2db167fd; S=0x2db16819; 
@property(copy, nonatomic) NSString *lastName;	// G=0x2db16835; S=0x2db16851; 
@property(copy, nonatomic) NSString *name;	// G=0x2db1674d; S=0x2db167a9; 
@property(readonly, assign, nonatomic) EKCalendar *owner;	// G=0x2db166e1; 
@property(assign, nonatomic) int shareeAccessLevel;	// G=0x2db16965; S=0x2db169e1; 
@property(assign, nonatomic) int shareeStatus;	// G=0x2db168a5; S=0x2db16921; 
+ (id)shareeWithEmailAddress:(id)emailAddress name:(id)name;	// 0x2db16245
+ (id)shareeWithName:(id)name emailAddress:(id)address externalID:(id)anId;	// 0x2db161fd
- (id)init;	// 0x2db16385
- (id)initWithEmailAddress:(id)emailAddress name:(id)name;	// 0x2db16315
- (id)initWithName:(id)name emailAddress:(id)address externalID:(id)anId;	// 0x2db16285
- (void *)ABRecordWithAddressBook:(void *)addressBook;	// 0x2db16a25
// declared property getter: - (id)UUID;	// 0x2db16725
- (id)_persistentSharee;	// 0x2db16715
- (id)copyWithZone:(NSZone *)zone;	// 0x2db163f1
- (id)description;	// 0x2db1658d
// declared property getter: - (id)emailAddress;	// 0x2db167c5
// declared property getter: - (id)externalID;	// 0x2db1686d
// declared property getter: - (id)firstName;	// 0x2db167fd
- (unsigned)hash;	// 0x2db16565
- (BOOL)isEqual:(id)equal;	// 0x2db164ed
// declared property getter: - (id)lastName;	// 0x2db16835
- (id)lazyLoadRelationForKey:(id)key;	// 0x2db16651
// declared property getter: - (id)name;	// 0x2db1674d
// declared property getter: - (id)owner;	// 0x2db166e1
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x2db167e1
// declared property setter: - (void)setExternalID:(id)anId;	// 0x2db16889
// declared property setter: - (void)setFirstName:(id)name;	// 0x2db16819
// declared property setter: - (void)setLastName:(id)name;	// 0x2db16851
// declared property setter: - (void)setName:(id)name;	// 0x2db167a9
// declared property setter: - (void)setShareeAccessLevel:(int)level;	// 0x2db169e1
// declared property setter: - (void)setShareeStatus:(int)status;	// 0x2db16921
// declared property getter: - (int)shareeAccessLevel;	// 0x2db16965
// declared property getter: - (int)shareeStatus;	// 0x2db168a5
@end

