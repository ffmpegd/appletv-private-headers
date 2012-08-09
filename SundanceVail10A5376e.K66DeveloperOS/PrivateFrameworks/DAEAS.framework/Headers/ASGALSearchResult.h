/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSDictionary, NSData, NSArray, NSMutableArray, NSString;

@interface ASGALSearchResult : ASItem {
	NSDictionary *_applicationData;	// 40 = 0x28
	NSString *_longID;	// 44 = 0x2c
	NSMutableArray *_classes;	// 48 = 0x30
	NSMutableArray *_collectionIDs;	// 52 = 0x34
	NSString *_phone;	// 56 = 0x38
	NSString *_office;	// 60 = 0x3c
	NSString *_title;	// 64 = 0x40
	NSString *_company;	// 68 = 0x44
	NSString *_alias;	// 72 = 0x48
	NSString *_firstName;	// 76 = 0x4c
	NSString *_lastName;	// 80 = 0x50
	NSString *_homePhone;	// 84 = 0x54
	NSString *_mobilePhone;	// 88 = 0x58
	NSString *_emailAddress;	// 92 = 0x5c
	NSData *_photoData;	// 96 = 0x60
}
@property(copy) NSString *alias;	// G=0x3227c8f5; S=0x3227c909; @synthesize=_alias
@property(retain) NSDictionary *applicationData;	// G=0x3227bab9; S=0x3227ba2d; converted property
@property(retain) NSArray *classes;	// G=0x3227c81d; S=0x3227c831; @synthesize=_classes
@property(retain) NSArray *collectionIDs;	// G=0x3227c841; S=0x3227c855; @synthesize=_collectionIDs
@property(copy) NSString *company;	// G=0x3227c8d1; S=0x3227c8e5; @synthesize=_company
@property(copy) NSString *emailAddress;	// G=0x3227c9a9; S=0x3227c9bd; @synthesize=_emailAddress
@property(copy) NSString *firstName;	// G=0x3227c919; S=0x3227c92d; @synthesize=_firstName
@property(copy) NSString *homePhone;	// G=0x3227c961; S=0x3227c975; @synthesize=_homePhone
@property(copy) NSString *lastName;	// G=0x3227c93d; S=0x3227c951; @synthesize=_lastName
@property(retain) NSString *longID;	// G=0x3227c7f9; S=0x3227c80d; @synthesize=_longID
@property(copy) NSString *mobilePhone;	// G=0x3227c985; S=0x3227c999; @synthesize=_mobilePhone
@property(copy) NSString *office;	// G=0x3227c889; S=0x3227c89d; @synthesize=_office
@property(copy) NSString *phone;	// G=0x3227c865; S=0x3227c879; @synthesize=_phone
@property(copy) NSData *photoData;	// G=0x3227c9cd; S=0x3227c9e1; @synthesize=_photoData
@property(copy) NSString *title;	// G=0x3227c8ad; S=0x3227c8c1; @synthesize=_title
+ (BOOL)acceptsTopLevelLeaves;	// 0x3227b6bd
+ (id)asParseRules;	// 0x3227bac9
+ (BOOL)frontingBasicTypes;	// 0x3227b7b9
+ (BOOL)notifyOfUnknownTokens;	// 0x3227b80d
+ (BOOL)parsingLeafNode;	// 0x3227b711
+ (BOOL)parsingWithSubItems;	// 0x3227b765
- (void)addClass:(id)aClass;	// 0x3227c721
- (void)addCollectionID:(id)anId;	// 0x3227c78d
// declared property getter: - (id)alias;	// 0x3227c8f5
// converted property getter: - (id)applicationData;	// 0x3227bab9
// declared property getter: - (id)classes;	// 0x3227c81d
// declared property getter: - (id)collectionIDs;	// 0x3227c841
// declared property getter: - (id)company;	// 0x3227c8d1
- (id)convertToDAContactSearchResultElement;	// 0x3227c405
- (void)dealloc;	// 0x3227b861
- (id)description;	// 0x3227b9c9
// declared property getter: - (id)emailAddress;	// 0x3227c9a9
// declared property getter: - (id)firstName;	// 0x3227c919
// declared property getter: - (id)homePhone;	// 0x3227c961
// declared property getter: - (id)lastName;	// 0x3227c93d
// declared property getter: - (id)longID;	// 0x3227c7f9
// declared property getter: - (id)mobilePhone;	// 0x3227c985
// declared property getter: - (id)office;	// 0x3227c889
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x3227c381
// declared property getter: - (id)phone;	// 0x3227c865
// declared property getter: - (id)photoData;	// 0x3227c9cd
- (void)postProcessApplicationData;	// 0x3227beb1
// declared property setter: - (void)setAlias:(id)alias;	// 0x3227c909
// converted property setter: - (void)setApplicationData:(id)data;	// 0x3227ba2d
// declared property setter: - (void)setClasses:(id)classes;	// 0x3227c831
// declared property setter: - (void)setCollectionIDs:(id)ids;	// 0x3227c855
// declared property setter: - (void)setCompany:(id)company;	// 0x3227c8e5
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x3227c9bd
// declared property setter: - (void)setFirstName:(id)name;	// 0x3227c92d
// declared property setter: - (void)setHomePhone:(id)phone;	// 0x3227c975
// declared property setter: - (void)setLastName:(id)name;	// 0x3227c951
// declared property setter: - (void)setLongID:(id)anId;	// 0x3227c80d
// declared property setter: - (void)setMobilePhone:(id)phone;	// 0x3227c999
// declared property setter: - (void)setOffice:(id)office;	// 0x3227c89d
// declared property setter: - (void)setPhone:(id)phone;	// 0x3227c879
// declared property setter: - (void)setPhotoData:(id)data;	// 0x3227c9e1
// declared property setter: - (void)setTitle:(id)title;	// 0x3227c8c1
// declared property getter: - (id)title;	// 0x3227c8ad
@end
