/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <DAVRequest.h> // Unknown library

@class CalDAVListingReader;

@interface CalDAVListingRequest : DAVRequest {
	CalDAVListingReader *_responseReader;	// 200 = 0xc8
}
+ (id)icsStringFromDate:(id)date;	// 0x314623d9
+ (id)nodeWithName:(id)name;	// 0x31462581
+ (id)nodeWithName:(id)name attributes:(id)attributes;	// 0x3146253d
- (id)initWithSession:(id)session URI:(id)uri startDate:(id)date endDate:(id)date4;	// 0x3146264d
- (void)dealloc;	// 0x31462605
- (id)error;	// 0x314625c1
- (id)filenamesToETags;	// 0x314623b9
@end

