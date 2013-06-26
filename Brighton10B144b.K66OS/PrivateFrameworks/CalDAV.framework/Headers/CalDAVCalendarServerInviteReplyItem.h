/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class CoreDAVItemWithHrefChildItem, NSString, NSURL, CoreDAVLeafItem, CoreDAVItemWithNoChildren, CoreDAVHrefItem;

@interface CalDAVCalendarServerInviteReplyItem : CoreDAVItem {
	CoreDAVHrefItem *_href;	// 28 = 0x1c
	CoreDAVItemWithNoChildren *_inviteStatus;	// 32 = 0x20
	CoreDAVItemWithHrefChildItem *_hostURL;	// 36 = 0x24
	CoreDAVLeafItem *_inReplyTo;	// 40 = 0x28
	CoreDAVLeafItem *_summary;	// 44 = 0x2c
	NSString *_firstName;	// 48 = 0x30
	NSString *_lastName;	// 52 = 0x34
	NSURL *_acceptedURL;	// 56 = 0x38
}
@property(retain) NSURL *acceptedURL;	// G=0x33596061; S=0x33596075; @synthesize=_acceptedURL
@property(retain) NSString *firstName;	// G=0x33596019; S=0x3359602d; @synthesize=_firstName
@property(retain) CoreDAVItemWithHrefChildItem *hostURL;	// G=0x33595fad; S=0x33595fc1; @synthesize=_hostURL
@property(retain) CoreDAVHrefItem *href;	// G=0x33595f65; S=0x33595f79; @synthesize=_href
@property(retain) CoreDAVLeafItem *inReplyTo;	// G=0x33595fd1; S=0x33595fe5; @synthesize=_inReplyTo
@property(retain) CoreDAVItemWithNoChildren *inviteStatus;	// G=0x33595f89; S=0x33595f9d; @synthesize=_inviteStatus
@property(retain) NSString *lastName;	// G=0x3359603d; S=0x33596051; @synthesize=_lastName
@property(retain) CoreDAVLeafItem *summary;	// G=0x33595ff5; S=0x33596009; @synthesize=_summary
- (id)init;	// 0x3359578d
// declared property getter: - (id)acceptedURL;	// 0x33596061
- (id)copyParseRules;	// 0x33595935
- (void)dealloc;	// 0x335957b9
// declared property getter: - (id)firstName;	// 0x33596019
// declared property getter: - (id)hostURL;	// 0x33595fad
// declared property getter: - (id)href;	// 0x33595f65
// declared property getter: - (id)inReplyTo;	// 0x33595fd1
// declared property getter: - (id)inviteStatus;	// 0x33595f89
// declared property getter: - (id)lastName;	// 0x3359603d
// declared property setter: - (void)setAcceptedURL:(id)url;	// 0x33596075
- (void)setAcceptedURLItem:(id)item;	// 0x335958f5
// declared property setter: - (void)setFirstName:(id)name;	// 0x3359602d
- (void)setFirstNameItem:(id)item;	// 0x33595895
// declared property setter: - (void)setHostURL:(id)url;	// 0x33595fc1
// declared property setter: - (void)setHref:(id)href;	// 0x33595f79
// declared property setter: - (void)setInReplyTo:(id)to;	// 0x33595fe5
// declared property setter: - (void)setInviteStatus:(id)status;	// 0x33595f9d
// declared property setter: - (void)setLastName:(id)name;	// 0x33596051
- (void)setLastNameItem:(id)item;	// 0x335958c5
// declared property setter: - (void)setSummary:(id)summary;	// 0x33596009
// declared property getter: - (id)summary;	// 0x33595ff5
@end
