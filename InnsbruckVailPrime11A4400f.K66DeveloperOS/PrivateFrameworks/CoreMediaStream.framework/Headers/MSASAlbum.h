/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "CoreMediaStream-Structs.h"
#import "NSCopying.h"
#import </libobjc.A.h>

@class NSString, NSDate, NSDictionary;

@interface MSASAlbum : NSObject <NSCopying> {
	NSString *_ownerEmail;	// 4 = 0x4
	NSString *_ownerPersonID;	// 8 = 0x8
	NSString *_ownerFullName;	// 12 = 0xc
	NSString *_ownerFirstName;	// 16 = 0x10
	NSString *_ownerLastName;	// 20 = 0x14
	NSDate *_subscriptionDate;	// 24 = 0x18
	NSString *_GUID;	// 28 = 0x1c
	NSString *_ctag;	// 32 = 0x20
	int _relationshipState;	// 36 = 0x24
	NSString *_foreignCtag;	// 40 = 0x28
	NSString *_URLString;	// 44 = 0x2c
	NSString *_publicURLString;	// 48 = 0x30
	NSDictionary *_metadata;	// 52 = 0x34
	id _context;	// 56 = 0x38
}
@property(retain, nonatomic) NSString *GUID;	// G=0x304fa3f5; S=0x304fa405; @synthesize=_GUID
@property(retain, nonatomic) NSString *URLString;	// G=0x304fa4bd; S=0x304fa4cd; @synthesize=_URLString
@property(retain, nonatomic) id context;	// G=0x304fa565; S=0x304fa575; @synthesize=_context
@property(retain, nonatomic) NSString *ctag;	// G=0x304fa42d; S=0x304fa43d; @synthesize=_ctag
@property(retain, nonatomic) NSString *foreignCtag;	// G=0x304fa485; S=0x304fa495; @synthesize=_foreignCtag
@property(retain, nonatomic) NSDictionary *metadata;	// G=0x304fa52d; S=0x304fa53d; @synthesize=_metadata
@property(retain, nonatomic) NSString *ownerEmail;	// G=0x304f948d; S=0x304fa2e5; @synthesize=_ownerEmail
@property(retain, nonatomic) NSString *ownerFirstName;	// G=0x304f9345; S=0x304fa36d; @synthesize=_ownerFirstName
@property(retain, nonatomic) NSString *ownerFullName;	// G=0x304f92a1; S=0x304fa345; @synthesize=_ownerFullName
@property(retain, nonatomic) NSString *ownerLastName;	// G=0x304f93e9; S=0x304fa395; @synthesize=_ownerLastName
@property(retain, nonatomic) NSString *ownerPersonID;	// G=0x304fa30d; S=0x304fa31d; @synthesize=_ownerPersonID
@property(retain, nonatomic) NSString *publicURLString;	// G=0x304fa4f5; S=0x304fa505; @synthesize=_publicURLString
@property(assign, nonatomic) int relationshipState;	// G=0x304fa465; S=0x304fa475; @synthesize=_relationshipState
@property(retain, nonatomic) NSDate *subscriptionDate;	// G=0x304fa3bd; S=0x304fa3cd; @synthesize=_subscriptionDate
@property(readonly, assign, nonatomic) BOOL useForeignCtag;	// G=0x304f9911; 
+ (id)album;	// 0x304f9265
+ (id)albumWithAlbum:(id)album;	// 0x304f9531
+ (BOOL)supportsSecureCoding;	// 0x304f929d
- (id)initWithCoder:(id)coder;	// 0x304f9ab5
- (void).cxx_destruct;	// 0x304fa589
// declared property getter: - (id)GUID;	// 0x304fa3f5
// declared property getter: - (id)URLString;	// 0x304fa4bd
// declared property getter: - (id)context;	// 0x304fa565
- (id)copyWithZone:(NSZone *)zone;	// 0x304f9a89
// declared property getter: - (id)ctag;	// 0x304fa42d
- (id)description;	// 0x304fa0e1
- (void)encodeWithCoder:(id)coder;	// 0x304f9d89
// declared property getter: - (id)foreignCtag;	// 0x304fa485
- (unsigned)hash;	// 0x304f98f1
- (BOOL)isEqual:(id)equal;	// 0x304f9821
// declared property getter: - (id)metadata;	// 0x304fa52d
- (id)metadataValueForKey:(id)key;	// 0x304f9a21
// declared property getter: - (id)ownerEmail;	// 0x304f948d
// declared property getter: - (id)ownerFirstName;	// 0x304f9345
// declared property getter: - (id)ownerFullName;	// 0x304f92a1
// declared property getter: - (id)ownerLastName;	// 0x304f93e9
// declared property getter: - (id)ownerPersonID;	// 0x304fa30d
// declared property getter: - (id)publicURLString;	// 0x304fa4f5
// declared property getter: - (int)relationshipState;	// 0x304fa465
// declared property setter: - (void)setContext:(id)context;	// 0x304fa575
// declared property setter: - (void)setCtag:(id)ctag;	// 0x304fa43d
// declared property setter: - (void)setForeignCtag:(id)ctag;	// 0x304fa495
// declared property setter: - (void)setGUID:(id)guid;	// 0x304fa405
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x304fa53d
- (void)setMetadataValue:(id)value forKey:(id)key;	// 0x304f992d
// declared property setter: - (void)setOwnerEmail:(id)email;	// 0x304fa2e5
// declared property setter: - (void)setOwnerFirstName:(id)name;	// 0x304fa36d
// declared property setter: - (void)setOwnerFullName:(id)name;	// 0x304fa345
// declared property setter: - (void)setOwnerLastName:(id)name;	// 0x304fa395
// declared property setter: - (void)setOwnerPersonID:(id)anId;	// 0x304fa31d
// declared property setter: - (void)setPublicURLString:(id)string;	// 0x304fa505
// declared property setter: - (void)setRelationshipState:(int)state;	// 0x304fa475
// declared property setter: - (void)setSubscriptionDate:(id)date;	// 0x304fa3cd
// declared property setter: - (void)setURLString:(id)string;	// 0x304fa4cd
// declared property getter: - (id)subscriptionDate;	// 0x304fa3bd
// declared property getter: - (BOOL)useForeignCtag;	// 0x304f9911
@end
