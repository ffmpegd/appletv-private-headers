/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSDate, NSNumber, NSString, NSArray;

@interface SAPerson : SADomainObject {
}
@property(copy, nonatomic) NSArray *addresses;	// G=0x303bd211; S=0x303bd28d; 
@property(copy, nonatomic) NSDate *birthday;	// G=0x303bd2f5; S=0x303bd311; 
@property(copy, nonatomic) NSString *company;	// G=0x303bd361; S=0x303bd37d; 
@property(copy, nonatomic) NSArray *emails;	// G=0x303bd3cd; S=0x303bd449; 
@property(copy, nonatomic) NSString *firstName;	// G=0x303bd4b1; S=0x303bd4cd; 
@property(copy, nonatomic) NSString *firstNamePhonetic;	// G=0x303bd51d; S=0x303bd539; 
@property(copy, nonatomic) NSString *fullName;	// G=0x303bd589; S=0x303bd5a5; 
@property(copy, nonatomic) NSString *lastName;	// G=0x303bd5f5; S=0x303bd611; 
@property(copy, nonatomic) NSString *lastNamePhonetic;	// G=0x303bd661; S=0x303bd67d; 
@property(copy, nonatomic) NSNumber *me;	// G=0x303bd6cd; S=0x303bd6e9; 
@property(copy, nonatomic) NSString *middleName;	// G=0x303bd739; S=0x303bd755; 
@property(copy, nonatomic) NSString *nickName;	// G=0x303bd7a5; S=0x303bd7c1; 
@property(copy, nonatomic) NSArray *phones;	// G=0x303bd811; S=0x303bd88d; 
@property(copy, nonatomic) NSString *prefix;	// G=0x303bd8f5; S=0x303bd911; 
@property(copy, nonatomic) NSArray *relatedNames;	// G=0x303bd961; S=0x303bd9dd; 
@property(copy, nonatomic) NSArray *socialProfiles;	// G=0x303bda45; S=0x303bdac1; 
@property(copy, nonatomic) NSString *suffix;	// G=0x303bdb29; S=0x303bdb45; 
+ (id)person;	// 0x303bd181
+ (id)personWithDictionary:(id)dictionary context:(id)context;	// 0x303bd1c5
// declared property getter: - (id)addresses;	// 0x303bd211
// declared property getter: - (id)birthday;	// 0x303bd2f5
// declared property getter: - (id)company;	// 0x303bd361
// declared property getter: - (id)emails;	// 0x303bd3cd
- (id)encodedClassName;	// 0x303bd175
// declared property getter: - (id)firstName;	// 0x303bd4b1
// declared property getter: - (id)firstNamePhonetic;	// 0x303bd51d
// declared property getter: - (id)fullName;	// 0x303bd589
- (id)groupIdentifier;	// 0x303bd165
// declared property getter: - (id)lastName;	// 0x303bd5f5
// declared property getter: - (id)lastNamePhonetic;	// 0x303bd661
// declared property getter: - (id)me;	// 0x303bd6cd
// declared property getter: - (id)middleName;	// 0x303bd739
// declared property getter: - (id)nickName;	// 0x303bd7a5
// declared property getter: - (id)phones;	// 0x303bd811
// declared property getter: - (id)prefix;	// 0x303bd8f5
// declared property getter: - (id)relatedNames;	// 0x303bd961
// declared property setter: - (void)setAddresses:(id)addresses;	// 0x303bd28d
// declared property setter: - (void)setBirthday:(id)birthday;	// 0x303bd311
// declared property setter: - (void)setCompany:(id)company;	// 0x303bd37d
// declared property setter: - (void)setEmails:(id)emails;	// 0x303bd449
// declared property setter: - (void)setFirstName:(id)name;	// 0x303bd4cd
// declared property setter: - (void)setFirstNamePhonetic:(id)phonetic;	// 0x303bd539
// declared property setter: - (void)setFullName:(id)name;	// 0x303bd5a5
// declared property setter: - (void)setLastName:(id)name;	// 0x303bd611
// declared property setter: - (void)setLastNamePhonetic:(id)phonetic;	// 0x303bd67d
// declared property setter: - (void)setMe:(id)me;	// 0x303bd6e9
// declared property setter: - (void)setMiddleName:(id)name;	// 0x303bd755
// declared property setter: - (void)setNickName:(id)name;	// 0x303bd7c1
// declared property setter: - (void)setPhones:(id)phones;	// 0x303bd88d
// declared property setter: - (void)setPrefix:(id)prefix;	// 0x303bd911
// declared property setter: - (void)setRelatedNames:(id)names;	// 0x303bd9dd
// declared property setter: - (void)setSocialProfiles:(id)profiles;	// 0x303bdac1
// declared property setter: - (void)setSuffix:(id)suffix;	// 0x303bdb45
// declared property getter: - (id)socialProfiles;	// 0x303bda45
// declared property getter: - (id)suffix;	// 0x303bdb29
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x303bdb95
@end

