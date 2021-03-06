/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class MobileCalDAVAccount, NSURL;

@interface MobileCalUserAddress : NSObject {
	MobileCalDAVAccount *_account;	// 4 = 0x4
	NSURL *_address;	// 8 = 0x8
}
@property(retain) MobileCalDAVAccount *account;	// G=0x378af269; S=0x378af2a1; converted property
@property(readonly, retain) NSURL *address;	// G=0x378af2b1; converted property
+ (id)userAddress:(id)address forAccount:(id)account;	// 0x378af21d
+ (id)userAddressFromDictionaryRepresentation:(id)dictionaryRepresentation forAccount:(id)account;	// 0x378af3b9
- (id)initWithAddress:(id)address account:(id)account;	// 0x378af14d
- (void)_setAddress:(id)address;	// 0x378af2e9
// converted property getter: - (id)account;	// 0x378af269
// converted property getter: - (id)address;	// 0x378af2b1
- (void)dealloc;	// 0x378af1b1
- (id)description;	// 0x378af1fd
- (id)dictionaryRepresentation;	// 0x378af32d
// converted property setter: - (void)setAccount:(id)account;	// 0x378af2a1
@end

