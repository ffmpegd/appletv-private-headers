/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class MobileCalDAVAccount, NSString;

@interface CalDAVMoveEventOperation : NSObject {
	MobileCalDAVAccount *_account;	// 4 = 0x4
	NSString *_fromPath;	// 8 = 0x8
	NSString *_toPath;	// 12 = 0xc
}
- (id)initWithAccount:(id)account fromPath:(id)path toPath:(id)path3;	// 0x32d12669
- (void)dealloc;	// 0x32d1260d
- (void)performOperation;	// 0x32d126e5
@end
