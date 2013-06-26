/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSNotification.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface NSConcreteNotification : NSNotification {
	NSString *name;	// 4 = 0x4
	id object;	// 8 = 0x8
	NSDictionary *userInfo;	// 12 = 0xc
	BOOL dyingObject;	// 16 = 0x10
}
@property(readonly, retain) NSString *name;	// G=0x324fdeb1; converted property
@property(readonly, retain) id object;	// G=0x324fdec1; converted property
@property(readonly, retain) NSDictionary *userInfo;	// G=0x32506b39; converted property
+ (id)newTempNotificationWithName:(id)name object:(id)object userInfo:(id)info;	// 0x324fdda9
- (id)initWithName:(id)name object:(id)object userInfo:(id)info;	// 0x32521371
- (void)dealloc;	// 0x324fe47d
// converted property getter: - (id)name;	// 0x324fdeb1
// converted property getter: - (id)object;	// 0x324fdec1
- (void)recycle;	// 0x324fe439
// converted property getter: - (id)userInfo;	// 0x32506b39
@end
