/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class NSURL, ICSDateValue, NSString;

@interface CalDAVUpdateOwnerItem : CoreDAVItem {
	ICSDateValue *_dtstamp;	// 28 = 0x1c
	NSString *_displayName;	// 32 = 0x20
	NSString *_firstName;	// 36 = 0x24
	NSString *_lastName;	// 40 = 0x28
	NSURL *_address;	// 44 = 0x2c
	NSString *_emailAddress;	// 48 = 0x30
}
@property(retain, nonatomic) NSURL *address;	// G=0x3471c7bd; S=0x3471c7cd; @synthesize=_address
@property(retain, nonatomic) NSString *displayName;	// G=0x3471c75d; S=0x3471c76d; @synthesize=_displayName
@property(retain, nonatomic) ICSDateValue *dtstamp;	// G=0x3471c73d; S=0x3471c74d; @synthesize=_dtstamp
@property(retain, nonatomic) NSString *emailAddress;	// G=0x3471c7dd; S=0x3471c7ed; @synthesize=_emailAddress
@property(retain, nonatomic) NSString *firstName;	// G=0x3471c77d; S=0x3471c78d; @synthesize=_firstName
@property(retain, nonatomic) NSString *lastName;	// G=0x3471c79d; S=0x3471c7ad; @synthesize=_lastName
// declared property getter: - (id)address;	// 0x3471c7bd
- (id)copyParseRules;	// 0x3471c38d
- (void)dealloc;	// 0x3471c0b9
- (id)description;	// 0x3471c16d
// declared property getter: - (id)displayName;	// 0x3471c75d
// declared property getter: - (id)dtstamp;	// 0x3471c73d
// declared property getter: - (id)emailAddress;	// 0x3471c7dd
// declared property getter: - (id)firstName;	// 0x3471c77d
// declared property getter: - (id)lastName;	// 0x3471c79d
// declared property setter: - (void)setAddress:(id)address;	// 0x3471c7cd
- (void)setAddressItem:(id)item;	// 0x3471c24d
// declared property setter: - (void)setDisplayName:(id)name;	// 0x3471c76d
- (void)setDisplayNameItem:(id)item;	// 0x3471c2ad
// declared property setter: - (void)setDtstamp:(id)dtstamp;	// 0x3471c74d
- (void)setDtstampItem:(id)item;	// 0x3471c33d
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x3471c7ed
- (void)setEmailAddressItem:(id)item;	// 0x3471c27d
// declared property setter: - (void)setFirstName:(id)name;	// 0x3471c78d
- (void)setFirstNameItem:(id)item;	// 0x3471c2dd
// declared property setter: - (void)setLastName:(id)name;	// 0x3471c7ad
- (void)setLastNameItem:(id)item;	// 0x3471c30d
@end

