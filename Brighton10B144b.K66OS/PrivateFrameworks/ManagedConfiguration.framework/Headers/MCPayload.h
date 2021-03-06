/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library

@class NSString, NSArray, MCProfile;

@interface MCPayload : NSObject {
	MCProfile *_profile;	// 4 = 0x4
	NSString *_type;	// 8 = 0x8
	NSString *_payloadDescription;	// 12 = 0xc
	NSString *_displayName;	// 16 = 0x10
	NSString *_identifier;	// 20 = 0x14
	NSString *_organization;	// 24 = 0x18
	NSString *_UUID;	// 28 = 0x1c
	int _version;	// 32 = 0x20
	NSString *_persistentResourceID;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x344b3271; @synthesize=_UUID
@property(retain, nonatomic) NSString *displayName;	// G=0x344b3219; S=0x344b3229; @synthesize=_displayName
@property(readonly, assign, nonatomic) NSString *friendlyName;	// G=0x344b2ec1; 
@property(readonly, assign, nonatomic) NSString *identifier;	// G=0x344b3251; @synthesize=_identifier
@property(readonly, assign, nonatomic) NSArray *installationWarnings;	// G=0x344b31b5; 
@property(readonly, assign, nonatomic) NSString *organization;	// G=0x344b3261; @synthesize=_organization
@property(readonly, assign, nonatomic) NSString *payloadDescription;	// G=0x344b3209; @synthesize=_payloadDescription
@property(retain, nonatomic) NSString *persistentResourceID;	// G=0x344b3291; S=0x344b32a1; @synthesize=_persistentResourceID
@property(readonly, assign, nonatomic) MCProfile *profile;	// G=0x344b31d9; @synthesize=_profile
@property(readonly, assign, nonatomic) NSString *type;	// G=0x344b31f9; @synthesize=_type
@property(readonly, assign, nonatomic) int version;	// G=0x344b3281; @synthesize=_version
+ (id)badFieldTypeErrorWithField:(id)field;	// 0x344b3895
+ (id)badFieldValueErrorWithField:(id)field;	// 0x344b391d
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x344b2df5
+ (id)payloadFromDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x344b35b5
+ (id)payloadsFromArray:(id)array profile:(id)profile outError:(id *)error;	// 0x344b3371
+ (id)typeStrings;	// 0x344b2df1
+ (id)wrapperPayloadDictionary;	// 0x344b43fd
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x344b39a5
- (void).cxx_destruct;	// 0x344b32c9
// declared property getter: - (id)UUID;	// 0x344b3271
- (void)dealloc;	// 0x344b2e7d
- (id)description;	// 0x344b3015
// declared property getter: - (id)displayName;	// 0x344b3219
// declared property getter: - (id)friendlyName;	// 0x344b2ec1
// declared property getter: - (id)identifier;	// 0x344b3251
// declared property getter: - (id)installationWarnings;	// 0x344b31b5
- (id)malformedPayloadErrorWithError:(id)error;	// 0x344b413d
// declared property getter: - (id)organization;	// 0x344b3261
// declared property getter: - (id)payloadDescription;	// 0x344b3209
// declared property getter: - (id)persistentResourceID;	// 0x344b3291
// declared property getter: - (id)profile;	// 0x344b31d9
// declared property setter: - (void)setDisplayName:(id)name;	// 0x344b3229
- (void)setPersistentResourceID:(id)anId;	// 0x344b4101
// declared property setter: - (void)setPersistentResourceID:(id)anId;	// 0x344b32a1
- (id)stubDictionary;	// 0x344b4269
- (id)subtitle1Description;	// 0x344b31cd
- (id)subtitle1Label;	// 0x344b31c9
- (id)subtitle2Description;	// 0x344b31d5
- (id)subtitle2Label;	// 0x344b31d1
- (id)title;	// 0x344b31b9
// declared property getter: - (id)type;	// 0x344b31f9
// declared property getter: - (int)version;	// 0x344b3281
@end

