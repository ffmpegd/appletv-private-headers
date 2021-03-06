/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "CoreMediaStream-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSDictionary, NSString;

@interface MSASAlbum : NSObject <NSCopying> {
	NSString *_ownerEmail;	// 4 = 0x4
	NSString *_ownerFullName;	// 8 = 0x8
	NSString *_ownerFirstName;	// 12 = 0xc
	NSString *_ownerLastName;	// 16 = 0x10
	NSString *_GUID;	// 20 = 0x14
	NSString *_ctag;	// 24 = 0x18
	int _relationshipState;	// 28 = 0x1c
	NSString *_foreignCtag;	// 32 = 0x20
	NSString *_URLString;	// 36 = 0x24
	NSString *_publicURLString;	// 40 = 0x28
	NSDictionary *_metadata;	// 44 = 0x2c
	id _context;	// 48 = 0x30
}
@property(retain, nonatomic) NSString *GUID;	// G=0x37c820dd; S=0x37c820ed; @synthesize=_GUID
@property(retain, nonatomic) NSString *URLString;	// G=0x37c821a5; S=0x37c821b5; @synthesize=_URLString
@property(retain, nonatomic) id context;	// G=0x37c8224d; S=0x37c8225d; @synthesize=_context
@property(retain, nonatomic) NSString *ctag;	// G=0x37c82115; S=0x37c82125; @synthesize=_ctag
@property(retain, nonatomic) NSString *foreignCtag;	// G=0x37c8216d; S=0x37c8217d; @synthesize=_foreignCtag
@property(retain, nonatomic) NSDictionary *metadata;	// G=0x37c82215; S=0x37c82225; @synthesize=_metadata
@property(retain, nonatomic) NSString *ownerEmail;	// G=0x37c81ffd; S=0x37c8200d; @synthesize=_ownerEmail
@property(retain, nonatomic) NSString *ownerFirstName;	// G=0x37c8206d; S=0x37c8207d; @synthesize=_ownerFirstName
@property(retain, nonatomic) NSString *ownerFullName;	// G=0x37c82035; S=0x37c82045; @synthesize=_ownerFullName
@property(retain, nonatomic) NSString *ownerLastName;	// G=0x37c820a5; S=0x37c820b5; @synthesize=_ownerLastName
@property(retain, nonatomic) NSString *publicURLString;	// G=0x37c821dd; S=0x37c821ed; @synthesize=_publicURLString
@property(assign, nonatomic) int relationshipState;	// G=0x37c8214d; S=0x37c8215d; @synthesize=_relationshipState
@property(readonly, assign, nonatomic) BOOL useForeignCtag;	// G=0x37c817e1; 
+ (id)album;	// 0x37c81419
+ (id)albumWithAlbum:(id)album;	// 0x37c81469
+ (BOOL)supportsSecureCoding;	// 0x37c81451
- (id)initWithCoder:(id)coder;	// 0x37c8198d
- (void).cxx_destruct;	// 0x37c82271
// declared property getter: - (id)GUID;	// 0x37c820dd
// declared property getter: - (id)URLString;	// 0x37c821a5
- (id)_ownerFullName;	// 0x37c81455
// declared property getter: - (id)context;	// 0x37c8224d
- (id)copyWithZone:(NSZone *)zone;	// 0x37c81961
// declared property getter: - (id)ctag;	// 0x37c82115
- (id)description;	// 0x37c81e35
- (void)encodeWithCoder:(id)coder;	// 0x37c81c0d
// declared property getter: - (id)foreignCtag;	// 0x37c8216d
- (unsigned)hash;	// 0x37c817c1
- (BOOL)isEqual:(id)equal;	// 0x37c816f1
// declared property getter: - (id)metadata;	// 0x37c82215
- (id)metadataValueForKey:(id)key;	// 0x37c818f9
// declared property getter: - (id)ownerEmail;	// 0x37c81ffd
// declared property getter: - (id)ownerFirstName;	// 0x37c8206d
// declared property getter: - (id)ownerFullName;	// 0x37c82035
// declared property getter: - (id)ownerLastName;	// 0x37c820a5
// declared property getter: - (id)publicURLString;	// 0x37c821dd
// declared property getter: - (int)relationshipState;	// 0x37c8214d
// declared property setter: - (void)setContext:(id)context;	// 0x37c8225d
// declared property setter: - (void)setCtag:(id)ctag;	// 0x37c82125
// declared property setter: - (void)setForeignCtag:(id)ctag;	// 0x37c8217d
// declared property setter: - (void)setGUID:(id)guid;	// 0x37c820ed
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x37c82225
- (void)setMetadataValue:(id)value forKey:(id)key;	// 0x37c817fd
// declared property setter: - (void)setOwnerEmail:(id)email;	// 0x37c8200d
// declared property setter: - (void)setOwnerFirstName:(id)name;	// 0x37c8207d
// declared property setter: - (void)setOwnerFullName:(id)name;	// 0x37c82045
// declared property setter: - (void)setOwnerLastName:(id)name;	// 0x37c820b5
// declared property setter: - (void)setPublicURLString:(id)string;	// 0x37c821ed
// declared property setter: - (void)setRelationshipState:(int)state;	// 0x37c8215d
// declared property setter: - (void)setURLString:(id)string;	// 0x37c821b5
// declared property getter: - (BOOL)useForeignCtag;	// 0x37c817e1
@end

