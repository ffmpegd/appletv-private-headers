/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import </libobjc.A.h>

@class NSString;

@interface DAUserNotificationInfo : NSObject {
	id _handler;	// 4 = 0x4
	NSString *_groupIdentifier;	// 8 = 0x8
}
@property(copy, nonatomic) NSString *groupIdentifier;	// G=0x3082efe1; S=0x3082eff5; @synthesize=_groupIdentifier
@property(retain) id handler;	// G=0x3082efd1; S=0x3082efa1; converted property
- (void)dealloc;	// 0x3082ef3d
// declared property getter: - (id)groupIdentifier;	// 0x3082efe1
// converted property getter: - (id)handler;	// 0x3082efd1
// declared property setter: - (void)setGroupIdentifier:(id)identifier;	// 0x3082eff5
// converted property setter: - (void)setHandler:(id)handler;	// 0x3082efa1
@end

