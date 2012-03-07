/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "MMCredential.h"
#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface MMMemberAccount : NSObject <MMCredential> {
@private
	NSString *_name;	// 4 = 0x4
	NSString *_password;	// 8 = 0x8
	NSString *_app_id;	// 12 = 0xc
	NSString *_user_agent;	// 16 = 0x10
}
@property(readonly, retain) NSString *name;	// G=0x343b2fbd; converted property
@property(readonly, retain) NSString *password;	// G=0x343b2fcd; converted property
+ (id)accountWithName:(id)name password:(id)password applicationID:(id)anId;	// 0x343b30a9
- (id)initWithName:(id)name password:(id)password applicationID:(id)anId;	// 0x343b2ffd
- (id)applicationID;	// 0x343b2fed
- (void)dealloc;	// 0x343b30f1
// converted property getter: - (id)name;	// 0x343b2fbd
- (id)owner;	// 0x343b2fdd
// converted property getter: - (id)password;	// 0x343b2fcd
@end

