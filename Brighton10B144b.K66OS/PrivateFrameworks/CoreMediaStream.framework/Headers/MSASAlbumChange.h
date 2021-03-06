/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library

@class MSASInvitation, NSString;

@interface MSASAlbumChange : NSObject {
	NSString *_GUID;	// 4 = 0x4
	NSString *_ownerEmail;	// 8 = 0x8
	NSString *_ownerFullName;	// 12 = 0xc
	NSString *_ownerFirstName;	// 16 = 0x10
	NSString *_ownerLastName;	// 20 = 0x14
	NSString *_URLString;	// 24 = 0x18
	MSASInvitation *_invitation;	// 28 = 0x1c
	NSString *_name;	// 32 = 0x20
	BOOL _wasDeleted;	// 36 = 0x24
}
@property(retain, nonatomic) NSString *GUID;	// G=0x3377a879; S=0x3377a889; @synthesize=_GUID
@property(retain, nonatomic) NSString *URLString;	// G=0x3377a92d; S=0x3377a93d; @synthesize=_URLString
@property(retain, nonatomic) MSASInvitation *invitation;	// G=0x3377a965; S=0x3377a975; @synthesize=_invitation
@property(retain, nonatomic) NSString *name;	// G=0x3377a99d; S=0x3377a9ad; @synthesize=_name
@property(copy, nonatomic) NSString *ownerEmail;	// G=0x3377a8b1; S=0x3377a8c5; @synthesize=_ownerEmail
@property(copy, nonatomic) NSString *ownerFirstName;	// G=0x3377a8e5; S=0x3377a8f9; @synthesize=_ownerFirstName
@property(copy, nonatomic) NSString *ownerFullName;	// G=0x3377a801; S=0x3377a8d5; @synthesize=_ownerFullName
@property(copy, nonatomic) NSString *ownerLastName;	// G=0x3377a909; S=0x3377a91d; @synthesize=_ownerLastName
@property(assign, nonatomic) BOOL wasDeleted;	// G=0x3377a9d5; S=0x3377a9e5; @synthesize=_wasDeleted
- (void).cxx_destruct;	// 0x3377a9f5
// declared property getter: - (id)GUID;	// 0x3377a879
// declared property getter: - (id)URLString;	// 0x3377a92d
- (id)description;	// 0x3377a691
// declared property getter: - (id)invitation;	// 0x3377a965
// declared property getter: - (id)name;	// 0x3377a99d
// declared property getter: - (id)ownerEmail;	// 0x3377a8b1
// declared property getter: - (id)ownerFirstName;	// 0x3377a8e5
// declared property getter: - (id)ownerFullName;	// 0x3377a801
// declared property getter: - (id)ownerLastName;	// 0x3377a909
// declared property setter: - (void)setGUID:(id)guid;	// 0x3377a889
// declared property setter: - (void)setInvitation:(id)invitation;	// 0x3377a975
// declared property setter: - (void)setName:(id)name;	// 0x3377a9ad
// declared property setter: - (void)setOwnerEmail:(id)email;	// 0x3377a8c5
// declared property setter: - (void)setOwnerFirstName:(id)name;	// 0x3377a8f9
// declared property setter: - (void)setOwnerFullName:(id)name;	// 0x3377a8d5
// declared property setter: - (void)setOwnerLastName:(id)name;	// 0x3377a91d
// declared property setter: - (void)setURLString:(id)string;	// 0x3377a93d
// declared property setter: - (void)setWasDeleted:(BOOL)deleted;	// 0x3377a9e5
// declared property getter: - (BOOL)wasDeleted;	// 0x3377a9d5
@end

